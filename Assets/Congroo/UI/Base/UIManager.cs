using Congroo.Core;
using Cysharp.Threading.Tasks;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Xml.Linq;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public enum UIType
{
    Page,
    Popup,


}

public class UIManager : SingletonMono<UIManager>
{
    [Header("Settings")]
    public List<AssetReferenceT<GameObject>> PreLoadList;


    [Header("Component")]
    public Transform PageRoot;
    public Transform PopupRoot;

    private Dictionary<string, UIPageBase> Page_LoadedDict = new Dictionary<string, UIPageBase>();
    private Dictionary<string, UIPopupBase> Popup_LoadedDict = new Dictionary<string, UIPopupBase>();

    private Stack<string> mPageStack = new Stack<string>();


    protected override void Awake()
    {
        base.Awake();
        GameObject.DontDestroyOnLoad(gameObject);
    }

    private async void Start()
    {
        await Initialize();
    }
    public async UniTask Initialize()
    {
        await Preload();
        await this.OpenPageUI(UIViewName.MainView);
    }


    public async UniTask Preload()
    {
        foreach (var item in PreLoadList)
        {
            var handler = item.LoadAssetAsync();
            await handler.Task;
            GameObject go = GameObject.Instantiate(handler.Result, Vector3.zero, Quaternion.identity);
            go.transform.localScale = Vector3.one;
            go.SetActive(true);

            var uiBase = go.GetComponent<UIBase>();
            uiBase.UName = handler.Result.name;

            if (uiBase is UIPageBase)
            {
                go.transform.SetParent(PageRoot, false);
                Page_LoadedDict.Add(uiBase.UName, uiBase as UIPageBase);
            }

            if (uiBase is UIPopupBase)
            {
                go.transform.SetParent(PopupRoot, false);
                Popup_LoadedDict.Add(uiBase.UName, uiBase as UIPopupBase);
            }

            go.transform.SetAsLastSibling();

            uiBase.Init();

            go.SetActive(false);
        }
    }

    public async UniTask<T> SpawnUI<T>(string rUName) where T : UIBase
    {
        string path = GetAddressablePath(rUName);
        CLog.L(LType.UI, $"SpawnUI<T> {path}");

        var op = ResMgr.Instance.LoadAssetAsync<GameObject>(path);
        await op.Task;
        GameObject prefab = null;
        if(op.Status == AsyncOperationStatus.Succeeded)
        {
            prefab = op.Result;
        }
        else
        {
            CLog.E(LType.UI, "Failed to load ui prefab");
        }
        GameObject go = GameObject.Instantiate(prefab, Vector3.zero, Quaternion.identity);
        go.transform.localScale = Vector3.one;
        T uiBase = go.GetComponent<UIBase>() as T;
        uiBase.UName = prefab.name;
        uiBase.Asset = op;
        uiBase.Init();
        return uiBase;
    }


    public async UniTask OpenPageUI(string rUName)
    {
        // �رյ�ǰ����
        string prePage = string.Empty;
        if(mPageStack.Count > 0)
        {
            prePage = mPageStack.Peek();
        }

        if (this.Page_LoadedDict.TryGetValue(rUName, out UIPageBase uiBase))
        {
            uiBase.Open();
            mPageStack.Push(rUName);
        }
        else
        {
            UIPageBase uiPageBase = await SpawnUI<UIPageBase>(rUName);

            uiPageBase.transform.SetParent(PageRoot, false);
            uiPageBase.transform.SetAsLastSibling();
            Page_LoadedDict.Add(uiPageBase.UName, uiPageBase);
            uiPageBase.Open();
            mPageStack.Push(rUName);
        }

        if(!string.IsNullOrEmpty(prePage))
        {
            ClosePageUI(prePage);
        }
    }

    public async UniTask BackPage()
    {
        if(mPageStack.Count > 1)
        {
            // �رյ�ǰ����
            string prePage = mPageStack.Pop();
            string curPage = mPageStack.Pop();

            if (this.Page_LoadedDict.TryGetValue(curPage, out UIPageBase uiBase))
            {
                uiBase.Open();
                mPageStack.Push(curPage);
            }
            else
            {
                UIPageBase uiPageBase = await SpawnUI<UIPageBase>(curPage);

                uiPageBase.transform.SetParent(PageRoot, false);
                uiPageBase.transform.SetAsLastSibling();
                Page_LoadedDict.Add(uiPageBase.UName, uiPageBase);
                uiPageBase.Open();
                mPageStack.Push(curPage);
            }

            if (!string.IsNullOrEmpty(prePage))
            {
                ClosePageUI(prePage);
            }
        }
        else
        {
            CLog.L(LType.UI, $"���һ��������,�޷�����");
        }
    }

    public async UniTask OpenPopupUI(string rUName)
    {
        if (this.Popup_LoadedDict.TryGetValue(rUName, out UIPopupBase uiBase))
        {
            uiBase.Open();
        }
        else
        {
            UIPopupBase uiPopupBase = await SpawnUI<UIPopupBase>(rUName);

            uiPopupBase.transform.SetParent(PopupRoot, false);
            uiPopupBase.transform.SetAsLastSibling();
            Popup_LoadedDict.Add(uiPopupBase.UName, uiPopupBase);
            uiPopupBase.Open();
        }
    }


    private void ClosePageUI(string rUName)
    {
        if (this.Page_LoadedDict.TryGetValue(rUName, out UIPageBase uiBase))
        {
            uiBase.Close();
            if (!uiBase.IsNeedCache)
            {
                GameObject.Destroy(uiBase.gameObject);
                this.Page_LoadedDict.Remove(rUName);
                ResMgr.Instance.Relase(uiBase.Asset);
            }
        }
    }


    public void ClosePopupUI(string rUName)
    {
        if (this.Popup_LoadedDict.TryGetValue(rUName, out UIPopupBase uiBase))
        {
            uiBase.Close();
            if (!uiBase.IsNeedCache)
            {
                GameObject.Destroy(uiBase.gameObject);
                this.Popup_LoadedDict.Remove(rUName);
                ResMgr.Instance.Relase(uiBase.Asset);
            }
        }
    }


    public T GetPageUI<T>(string rUIName) where T : UIPageBase
    {
        if (Page_LoadedDict.TryGetValue(rUIName, out UIPageBase value))
        {
            return value as T;
        }
        return default(T);
    }


    public T GetPopupUI<T>(string rUIName) where T : UIPopupBase
    {
        if (Popup_LoadedDict.TryGetValue(rUIName, out UIPopupBase value))
        {
            return value as T;
        }
        return default(T);
    }


    private string GetAddressablePath(string rUName)
    {
        return $"Prefabs/UI/{rUName}.prefab";
    }

}
