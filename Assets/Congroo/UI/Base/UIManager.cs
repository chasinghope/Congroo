using Congroo.Core;
using System.Collections.Generic;
using System.Threading.Tasks;
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
    private async void Start()
    {
        await Initialize();
    }
    public async Task Initialize()
    {
        await Preload();
        await this.OpenPageUI(UIViewName.MainMenu);
    }


    public async Task Preload()
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

    public async Task<T> SpawnUI<T>(string rUName) where T : UIBase
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
        return uiBase;
    }


    public async Task OpenPageUI(string rUName)
    {
        if (this.Page_LoadedDict.TryGetValue(rUName, out UIPageBase uiBase))
        {
            uiBase.Open();
        }
        else
        {
            UIPageBase uiPageBase = await SpawnUI<UIPageBase>(rUName);

            uiPageBase.transform.SetParent(PageRoot, false);
            uiPageBase.transform.SetAsLastSibling();
            Page_LoadedDict.Add(uiPageBase.UName, uiPageBase);
            uiPageBase.Open();
        }
    }

    public async Task OpenPopupUI(string rUName)
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


    public void ClosePageUI(string rUName)
    {
        if (this.Page_LoadedDict.TryGetValue(rUName, out UIPageBase uiBase))
        {
            uiBase.Close();
            if (!uiBase.IsNeedCache)
            {
                GameObject.Destroy(uiBase.gameObject);
                this.Page_LoadedDict.Remove(rUName);
                ResMgr.Instance.ReleaseAsset(uiBase.gameObject);
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
                ResMgr.Instance.ReleaseAsset(uiBase.gameObject);
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
        return $"Assets/GameAssets/Prefabs/UI/{rUName}.prefab";
    }

}
