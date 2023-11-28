using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using static UnityEngine.AddressableAssets.Addressables;

public class HotUpdateManager : MonoBehaviour
{
    List<string> updateKeys;
    List<IResourceLocator> updateCatlogKeys;
    List<long> updateContentSize;
    long needDownloadSize;

    private static HotUpdateManager instance;
    public static HotUpdateManager Instance
    {
        get
        {
            if (instance == null)
                instance = FindObjectOfType<HotUpdateManager>();
            return instance;
        }
    }

    public event Action OnHotUpdateFinished;
    public event Action ENeedDownHotUpdateAssets;
    public event Action<float, long> EDownloadProgress;

    private void Awake()
    {

    }


    // Start is called before the first frame update
    void Start()
    {
        HotUpdate();
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    private async void HotUpdate()
    {
        // init
        Debug.Log($"HotUpdate --- init");
        AsyncOperationHandle<IResourceLocator> initOp = Addressables.InitializeAsync(false);
        await initOp.Task;
        if(initOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new System.Exception($"Addressables.InitializeAsync Failed : {initOp.Status}");
        }
        Addressables.Release(initOp);


        // check res update
        Debug.Log($"HotUpdate --- check res update");
        AsyncOperationHandle<List<string>> catlogUpdatesOp = Addressables.CheckForCatalogUpdates(false);
        await catlogUpdatesOp.Task;
        if (catlogUpdatesOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new System.Exception($"Addressables.CheckForCatalogUpdates Failed : {catlogUpdatesOp.Status}");
        }
        updateKeys = catlogUpdatesOp.Result;


        if (updateKeys.Count <= 0)
        {
            HotUpdateFinished();
            return;
        }
        Addressables.Release(catlogUpdatesOp);

        // check res update size
        Debug.Log($"HotUpdate --- check res update size");
        AsyncOperationHandle<List<IResourceLocator>> updateCatlogsOp = Addressables.UpdateCatalogs(true, updateKeys, false);
        await updateCatlogsOp.Task;
        if (updateCatlogsOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new System.Exception($"Addressables.UpdateCatalogs Failed : {initOp.Status}");
        }
        updateCatlogKeys = updateCatlogsOp.Result;
        Addressables.Release(updateCatlogsOp);


        // total size
        updateContentSize = new List<long>();

        Debug.Log($"HotUpdate --- total size");
        long downloadAssetSize = 0;
        foreach (IResourceLocator item in updateCatlogKeys)
        {
            AsyncOperationHandle<long> downloadAsstesSizeaAsync = Addressables.GetDownloadSizeAsync(item.Keys);
            await downloadAsstesSizeaAsync.Task;
            downloadAssetSize += downloadAsstesSizeaAsync.Result;
            updateContentSize.Add(downloadAsstesSizeaAsync.Result);
            Addressables.Release(downloadAsstesSizeaAsync);
        }
        Debug.Log($"下载更新大小为: {downloadAssetSize / 1024f }kB");

        if(downloadAssetSize <= 0)
        {
            HotUpdateFinished();
            return;
        }
        needDownloadSize = downloadAssetSize;

        ENeedDownHotUpdateAssets?.Invoke();
    }


    public async void DownloadAsset()
    {
        // downloadAsset
        Debug.Log($"HotUpdate --- downloadAsset");
        Debug.Log($"updateCatlogKeys Count: {updateCatlogKeys[0].Keys.Count()}");
        for(int i = 0; i < updateCatlogKeys.Count; i++)
        {
            var item = updateCatlogKeys[i];
            var size = updateContentSize[i];
            AsyncOperationHandle asyncOperationHandle = Addressables.DownloadDependenciesAsync(item.Keys, MergeMode.Union, false);
            while (!asyncOperationHandle.IsDone)
            {
                float percentage = asyncOperationHandle.GetDownloadStatus().Percent;
                EDownloadProgress?.Invoke(percentage, size);
                await Task.Yield();
            }
            Addressables.Release(asyncOperationHandle);

        }

        Debug.Log("资源下载完成");
        HotUpdateFinished();
    }



    private void HotUpdateFinished()
    {
        Debug.Log("HotUpdateFinished");
        HotUpdateCodesLoad();
        OnHotUpdateFinished?.Invoke();
    }

    /// <summary>
    /// 加载热更新程序集
    /// </summary>
    private async void HotUpdateCodesLoad()
    {
#if !UNITY_EDITOR
        //Assembly hotUpdates = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));

        var loadDllOp = Addressables.LoadAssetAsync<TextAsset>("Codes/HotUpdate.dll.bytes");
        await loadDllOp.Task;
        if(loadDllOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new Exception($"HotUpdateCodesLoad: {loadDllOp.Status}");
        }
        Assembly hotUpdate = Assembly.Load(loadDllOp.Result.bytes);
        await Task.Yield();
#else
        Assembly hotUpdates = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
        await Task.Yield();
        //Type type = hotUpdates.GetType("DBug.Print");
        //type.GetMethod("RunGame").Invoke(null, null);
#endif
        //#if !UNITY_EDITOR
        //        Assembly hotUpdates = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/HotUpdate.dll.bytes"));
        //#else
        //        Assembly hotUpdates = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
        //#endif

    }

}
