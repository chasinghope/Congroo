using System;
using Congroo.Core;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.ResourceManagement;
using GameObjectTask = Cysharp.Threading.Tasks.UniTask<UnityEngine.GameObject>;
using Object = UnityEngine.Object;
using UIBaseTask = Cysharp.Threading.Tasks.UniTask<UIBase>;

public class UIManager : SingletonMono<UIManager>
{
    private readonly Dictionary<Type, GameObject> mInstanceDict = new Dictionary<Type, GameObject>();
    private readonly Stack<(Type type, UIData data)> mPanleStack = new Stack<(Type type, UIData data)>();
    private readonly Dictionary<Type, UILayerAttribute> mTypeLayerDict = new Dictionary<Type, UILayerAttribute>();
    
    private RectTransform mLayerTransform;
    
    
    [SerializeField] private Canvas mCanvas;
    [SerializeField] private GameObject mStuck;
    [Header("UILayer")] 
    [SerializeField] private RectTransform mPanelLayer;
    [SerializeField] private RectTransform mPopupLayer;
    
    
    /// <summary>
    /// UI画布
    /// </summary>
    public Canvas Canvas { get; private set; }

    /// <summary>
    /// UI相机
    /// </summary>
    public Camera Camera { get; private set; }
    
    public GameObject Stuck { get; private set; }

    /// <summary>
    /// 当加载UI超过这个时间（单位：秒）时，检测为卡住
    /// </summary>
    public float StuckTime = 1;
    
    
    /// <summary>
    /// 当前显示的Panel
    /// </summary>
    public UIBase CurrentPanel
    {
        get
        {
            if (mPanleStack.Count <= 0) return null;

            if (mPanleStack.Peek().type == null) return null;

            if (mInstanceDict.TryGetValue(mPanleStack.Peek().type, out var instance))
            {
                return instance.GetComponent<UIBase>();
            }
            return null;
        }
    }
    
    #region 事件
    /// <summary>
    /// 卡住开始时触发的事件
    /// </summary>
    public event Action OnStuckStart;

    /// <summary>
    /// 卡住结束时触发的事件
    /// </summary>
    public event Action OnStuckEnd;

    /// <summary>
    /// 资源请求
    /// </summary>
    public event Func<Type, GameObjectTask> OnAssetRequest;

    /// <summary>
    /// 资源释放
    /// </summary>
    public event Action<Type> OnAssetRelease;

    /// <summary>
    /// UI创建时调用
    /// </summary>
    public event Action<UIBase> OnCreate;

    /// <summary>
    /// UI刷新时调用
    /// </summary>
    public event Action<UIBase> OnRefresh;

    /// <summary>
    /// UI绑定事件时调用
    /// </summary>
    public event Action<UIBase> OnBind;

    /// <summary>
    /// UI解绑事件时调用
    /// </summary>
    public event Action<UIBase> OnUnbind;

    /// <summary>
    /// UI显示时调用
    /// </summary>
    public event Action<UIBase> OnShow;

    /// <summary>
    /// UI隐藏时调用
    /// </summary>
    public event Action<UIBase> OnHide;

    /// <summary>
    /// UI销毁时调用
    /// </summary>
    public event Action<UIBase> OnDied;
    #endregion
    
    
    public void Initialize()
    {
        if (mCanvas == null) throw new Exception("UIFrame初始化失败，请设置Canvas");
        if (mCanvas.worldCamera == null) throw new Exception("UIFrame初始化失败，请给Canvas设置worldCamera");
        Canvas = mCanvas;
        Camera = mCanvas.worldCamera;
        // mLayerTransform.anchorMin = Vector2.zero;
        // mLayerTransform.anchorMax = Vector2.one;
        // mLayerTransform.offsetMin = Vector2.zero;
        // mLayerTransform.offsetMax = Vector2.zero;

        Stuck = mStuck;
        DontDestroyOnLoad(gameObject);

        OnAssetRequest += Test_OnAssetRequestHandler;
        OnAssetRelease += Test_OnAssetReleaseHandler;
    }

    
    #region UI资源
    
    public Dictionary<Type, Object> mPrefabResDict = new ();
    public const string UI_PATH = "UI/";
    
    private void Test_OnAssetReleaseHandler(Type rType)
    {
        if (mPrefabResDict.TryGetValue(rType, out Object res))
        {
            // Resources.UnloadAsset(res);
            mPrefabResDict.Remove(rType);
        }
    }

    private async GameObjectTask Test_OnAssetRequestHandler(Type rType)
    {
        string path = UI_PATH + rType.Name;
        ResourceRequest request = Resources.LoadAsync<GameObject>(path);
        var res = await request;
        GameObject resPrefab = request.asset as GameObject;
        mPrefabResDict[rType] = request.asset;
        return resPrefab;
    }
    
    #endregion


    #region 操作

    
    /// <summary>
    /// 打开UI
    /// </summary>
    /// <param name="rData"></param>
    /// <typeparam name="T"></typeparam>
    public void Open(string rTypeName, UIData rData = null)
    {
        Type type = Type.GetType(rTypeName);
    }

    
    public void Open(Type rType, UIData rData = null) 
    {
        ShowAsync(rType, rData).Forget();
    }
    
    /// <summary>
    /// 打开UI
    /// </summary>
    /// <param name="rData"></param>
    /// <typeparam name="T"></typeparam>
    public void Open<T>(UIData rData = null) where T : UIBase
    {
        ShowAsync(typeof(T), rData).Forget();
    }

    public async UniTask<T> OpenAsync<T>(UIData rData = null) where T : UIBase
    {
         UIBase uiBase = await ShowAsync(typeof(T), rData);
         return uiBase as T;
    }


    /// <summary>
    /// 刷新UI
    /// </summary>
    /// <param name="rData"></param>
    /// <typeparam name="T"></typeparam>
    public async UniTask Refresh<T>(UIData rData = null) where T : UIBase
    {
        Type type = typeof(T);
        if (mInstanceDict.TryGetValue(type, out GameObject instance))
        {
            UIBase ui = instance.GetComponent<UIBase>();
            if (!ui.gameObject.activeInHierarchy) 
                return;
            
            if (rData != null) TrySetData(ui, rData);
            await DoRefresh(ui);
        }
    }
    
    public async UniTask RefreshAll(Func<Type, bool> rPredicate = null)
    {
        foreach (var item in mInstanceDict)
        {
            if (rPredicate != null && !rPredicate.Invoke(item.Key)) continue;

            UIBase ui = item.Value.GetComponent<UIBase>();
            if (!ui.gameObject.activeInHierarchy) 
                return;

            await DoRefresh(ui);
        }
    }

    
    public void Hide<T>(bool rForceDestroy = false)
    { 
        HideAsync(typeof(T), rForceDestroy).Forget();
    }
    
    public async UniTask HideAysnc<T>(bool rForceDestroy = false)
    { 
        await HideAsync(typeof(T), rForceDestroy);
    }

    public void Back()
    {
        BackAsync().Forget();
    }
    
    
    /// <summary>
    /// 获取UI
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public T Get<T>() where T : UIBase
    {
        if (mInstanceDict.TryGetValue(typeof(T), out GameObject instance))
        {
            return instance.GetComponent<UIBase>() as T;
        }
        return null;
    }

    /// <summary>
    /// 尝试获取UI
    /// </summary>
    /// <param name="rUI"></param>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public bool TryGet<T>(out T rUI) where T : UIBase
    {
        rUI = Get<T>();
        return rUI != null;
    }

    
    /// <summary>
    /// ui是否被打开了
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <returns></returns>
    public bool IsOpened<T>() where T : UIBase
    {
        if (mInstanceDict.TryGetValue(typeof(T), out GameObject instance))
        {
            if (instance.activeInHierarchy)
                return true;
        }

        return false;
    }
    
    #endregion


    
    private async UIBaseTask ShowAsync(Type rType, UIData rData = null)
    {
        UILayerAttribute uiLayerAttribute = GetLayer(rType);
        if (uiLayerAttribute == null)
        {
            throw new Exception("UIManager Error: 类型没有设置UILayer属性");
        }

        try
        {
            CancellationTokenSource timeoutCts = new ();
            UIBase result = null;
            bool isStuck = false;
            UniTask.Delay(TimeSpan.FromSeconds(StuckTime), ignoreTimeScale: true).GetAwaiter().OnCompleted(() =>
            {
                if (timeoutCts.IsCancellationRequested) return;
                OnStuckStart?.Invoke();
                isStuck = true;
            });

            if (uiLayerAttribute.Layer == EUILayer.Panel)
            {
                UIBase curPanel = CurrentPanel;
                if (curPanel != null && rType == curPanel.GetType())
                {
                    Debug.LogWarning("UIManager Warning: 重复打开同类型UI");
                    return curPanel;
                }


                if (curPanel != null)
                {
                    DoUnbind(curPanel);
                }

                GameObject instance = await RequestInstance(rType, rData, mPanelLayer);
                UIBase uiBase = instance.GetComponent<UIBase>();
                await DoCreate(uiBase);
                
                if (rData != null && curPanel != null)
                {
                    rData.Sender = curPanel.GetType();
                }
                await DoRefresh(uiBase);
                if (curPanel != null)
                {
                    DoHide(curPanel);
                    curPanel.gameObject.SetActive(false);
                    if (curPanel.AutoDestroy)
                        ReleaseInstance(curPanel.GetType());
                }
        
                instance.SetActive(true);
                
                DoBind(uiBase);
                DoShow(uiBase);
                
                mPanleStack.Push((rType, rData));
                result = uiBase;

            }
            else if (uiLayerAttribute.Layer == EUILayer.Popup)
            {
                GameObject instance = await RequestInstance(rType, rData, mPopupLayer);
                UIBase uiBase = instance.GetComponent<UIBase>();

                if (rData != null && CurrentPanel != null)
                {
                    rData.Sender = CurrentPanel.GetType();
                }

                if (!uiBase.gameObject.activeInHierarchy)
                {
                    await DoCreate(uiBase);
                    await DoRefresh(uiBase);
                    instance.SetActive(true);
                    instance.transform.SetAsLastSibling();
                    DoBind(uiBase);
                    DoShow(uiBase);
                }
                else
                {
                    Debug.LogWarning("UIManager Warning: 重复打开同类型UI");
                }

                result = uiBase;
            }

            timeoutCts.Cancel();
            if (isStuck)
            {
                OnStuckEnd?.Invoke();
            }

            return result;
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
            return null;
        }
    }


    private async UniTask BackAsync(bool rForceDestroy = false)
    {
        CancellationTokenSource timeoutCts = new CancellationTokenSource();

        bool isStuck = false;
        Task.Delay(TimeSpan.FromSeconds(StuckTime)).GetAwaiter().OnCompleted(() =>
        {
            if (timeoutCts.IsCancellationRequested) return;
            OnStuckStart?.Invoke();
            isStuck = true;
        });
        
        UIBase curPanel = CurrentPanel;
        if (curPanel == null)
        {
            timeoutCts.Cancel();
            Debug.LogWarning("UIManager Warning: 当前没有打开的面板");
            return;
        }

        mPanleStack.Pop();
        if (mPanleStack.Count > 0)
        {
            (Type prePanelType, UIData preData) = mPanleStack.Peek();
            if (preData != null && curPanel != null)
            {
                preData.Sender = curPanel.GetType();
            }

            GameObject instance = await RequestInstance(prePanelType, preData, mPanelLayer);
            UIBase uiBase = instance.GetComponent<UIBase>();
            await DoRefresh(uiBase);
            curPanel.gameObject.SetActive(false);
            DoUnbind(curPanel);
            DoHide(curPanel);
            if (curPanel.AutoDestroy || rForceDestroy) ReleaseInstance(curPanel.GetType());
            instance.SetActive(true);
            instance.transform.SetAsLastSibling();
            DoBind(uiBase);
            DoShow(uiBase);
        }
        else
        {
            curPanel.gameObject.SetActive(false);
            DoUnbind(curPanel);
            DoHide(curPanel);
            if (curPanel.AutoDestroy || rForceDestroy) ReleaseInstance(curPanel.GetType());
        }

        timeoutCts.Cancel();
        if (isStuck)
           OnStuckEnd?.Invoke();
    }
        
    public async UniTask HideAsync(Type rType, bool rForceDestroy = false)
    {
        UILayerAttribute uiLayerAttribute = GetLayer(rType);
        if (uiLayerAttribute == null)
        {
            throw new Exception("UIManager Error: 类型没有设置UILayer属性");
        }

        try
        {
            if (uiLayerAttribute.Layer == EUILayer.Panel)
            {
                CancellationTokenSource timeoutCts = new CancellationTokenSource();

                bool isStuck = false;
                Task.Delay(TimeSpan.FromSeconds(StuckTime)).GetAwaiter().OnCompleted(() =>
                {
                    if (timeoutCts.IsCancellationRequested) return;
                    OnStuckStart?.Invoke();
                    isStuck = true;
                });
                
                UIBase curPanel = CurrentPanel;
                if (curPanel == null)
                {
                    timeoutCts.Cancel();
                    Debug.LogWarning("UIManager Warning: 当前没有打开的面板");
                    return;
                }

                mPanleStack.Pop();
                if (mPanleStack.Count <= 0)
                {
                    (Type prePanelType, UIData preData) = mPanleStack.Peek();
                    if (preData != null && curPanel != null)
                    {
                        preData.Sender = curPanel.GetType();
                    }

                    GameObject instance = await RequestInstance(prePanelType, preData, mPanelLayer);
                    UIBase uiBase = instance.GetComponent<UIBase>();
                    await DoRefresh(uiBase);
                    curPanel.gameObject.SetActive(false);
                    DoUnbind(curPanel);
                    DoHide(curPanel);
                    if (curPanel.AutoDestroy || rForceDestroy) ReleaseInstance(curPanel.GetType());
                    instance.SetActive(true);
                    instance.transform.SetAsLastSibling();
                    DoBind(uiBase);
                    DoShow(uiBase);
                }
                else
                {
                    curPanel.gameObject.SetActive(false);
                    DoUnbind(curPanel);
                    DoHide(curPanel);
                    if (curPanel.AutoDestroy || rForceDestroy) ReleaseInstance(curPanel.GetType());
                }

                timeoutCts.Cancel();
                if (isStuck)
                   OnStuckEnd?.Invoke();
            }
            else if(uiLayerAttribute.Layer == EUILayer.Popup)
            {
                if (mInstanceDict.TryGetValue(rType, out GameObject instance))
                {
                    UIBase uibase = instance.GetComponent<UIBase>();
                    DoUnbind(uibase);
                    DoHide(uibase);
                    instance.SetActive(false);
                    if (uibase.AutoDestroy || rForceDestroy) 
                        ReleaseInstance(rType);
                }
                else
                {
                    Debug.LogWarning("UIManager Warning: 当前没有打开的弹窗");
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }
    }
    
    private async GameObjectTask RequestInstance(Type rType, UIData rData, RectTransform rParent)
    {
        if (rType == null) throw new NullReferenceException();

        if (mInstanceDict.TryGetValue(rType, out GameObject instance))
        {
            TrySetData(instance.GetComponent<UIBase>(), rData);
            return instance;
        }
        GameObject refInstance = null;
        if (OnAssetRequest != null)
        {
            refInstance = await OnAssetRequest.Invoke(rType);
        }
        if (refInstance == null) throw new Exception("资源加载失败");
        UIBase uibase = refInstance.GetComponent<UIBase>();
        if (uibase == null) throw new Exception("预制体没有挂载继承自UIBase的脚本");
        instance = Instantiate(refInstance, rParent, rData);
        mInstanceDict[rType] = instance;
        return instance;
    }
    
    private GameObject Instantiate(GameObject prefab, Transform parent = null, UIData data = null)
    {
        bool refActiveSelf = prefab.activeSelf;
        prefab.SetActive(false);
        GameObject instance = GameObject.Instantiate(prefab, parent);
        prefab.SetActive(refActiveSelf);
        UIBase uibase = instance.GetComponent<UIBase>();
        TrySetData(uibase, data);
        return instance;
    }

    private void ReleaseInstance(Type type)
    {
        if (type == null) return;

        if (mInstanceDict.TryGetValue(type, out GameObject instance))
        {
            this.Destroy(instance);
            OnAssetRelease?.Invoke(type);
            mInstanceDict.Remove(type);
        }
    }
    
    
    // private bool TrySetData(UIBase rUI, UIData rData)
    // {
    //     if (rUI == null) return false;
    //     PropertyInfo property = rUI.GetType().GetProperty("Data", BindingFlags.Public | BindingFlags.Instance);
    //     if (property == null) return false;
    //     property.SetValue(rUI, rData);
    //     return true;
    // }

    private bool TrySetData(UIBase rUI, UIData rData)
    {
        if (rUI == null) return false;
        rUI.DataReference = rData;
        return true;
    }
    
    private UILayerAttribute GetLayer(Type rType)
    {
        if (rType == null) return null;
        if (!mTypeLayerDict.TryGetValue(rType, out UILayerAttribute layer))
        {
            layer = rType.GetCustomAttributes(typeof(UILayerAttribute), false).FirstOrDefault() as UILayerAttribute;
            mTypeLayerDict[rType] = layer;
        }
        return layer;
    }

    
    #region UIBase
    
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private async UniTask DoCreate(UIBase rUIBase)
    {
        OnCreate?.Invoke(rUIBase);
        rUIBase.Status = UIStatus.Creating;
        await rUIBase.InnerOnCreate();
    }
    
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private async UniTask DoRefresh(UIBase rUIBase)
    {
        OnRefresh?.Invoke(rUIBase);
        await rUIBase.InnerOnRefresh();
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void DoBind(UIBase rUIBase)
    {
        OnBind?.Invoke(rUIBase);
        rUIBase.InnerOnBind();
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void DoUnbind(UIBase rUIBase)
    {
        OnUnbind?.Invoke(rUIBase);
        rUIBase.InnerOnUnbind();
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void DoShow(UIBase rUIBase)
    {
        OnShow?.Invoke(rUIBase);
        rUIBase.InnerOnShow();
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void DoHide(UIBase rUIBase)
    {
        OnHide?.Invoke(rUIBase);
        rUIBase.InnerOnHide();
    }
    
    
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private void Destroy(GameObject instance)
    {
        UIBase uiBase = instance.GetComponent<UIBase>();
        OnDied?.Invoke(uiBase);
        uiBase.InnerOnDied();
        GameObject.Destroy(instance);
    }
    
    
    #endregion
    
    

   
    // public void OpenStuck()
    // {
    //     Stuck.SetActive(true);
    // }
    //
    // public void HideStuck()
    // {
    //     Stuck.SetActive(false);
    // }
}
