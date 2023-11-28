using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using Congroo.Core;
public class HotUpdateManager : SingletonMono<HotUpdateManager>
{
    List<string> updateKeys;
    List<IResourceLocator> updateCatlogKeys;
    List<long> updateContentSize;
    long needDownloadSize;

    public event Action OnHotUpdateFinished;
    public event Action ENeedDownHotUpdateAssets;
    public event Action<float, long> EDownloadProgress;

    void Start()
    {
        HotUpdate();
    }

    private async void HotUpdate()
    {
        // init
        CLog.L(LType.HotUpdate, $"HotUpdate --- init");
        AsyncOperationHandle<IResourceLocator> initOp = Addressables.InitializeAsync(false);
        await initOp.Task;
        if(initOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new System.Exception($"Addressables.InitializeAsync Failed : {initOp.Status}");
        }
        Addressables.Release(initOp);


        // check res update
        CLog.L(LType.HotUpdate, $"HotUpdate --- check res update");
        AsyncOperationHandle<List<string>> catlogUpdatesOp = Addressables.CheckForCatalogUpdates(false);
        await catlogUpdatesOp.Task;
        if (catlogUpdatesOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new System.Exception($"Addressables.CheckForCatalogUpdates Failed : {catlogUpdatesOp.Status}");
        }
        updateKeys = catlogUpdatesOp.Result;
        Addressables.Release(catlogUpdatesOp);

        CLog.L(LType.HotUpdate, $"HotUpdate --- updateKeys count : {updateKeys.Count}");
        if (updateKeys.Count <= 0)
        {
            HotUpdateFinished();
            return;
        }


        // check res update size
        CLog.L(LType.HotUpdate, $"HotUpdate --- check res update size");
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

        CLog.L(LType.HotUpdate, $"HotUpdate --- total size");
        long downloadAssetSize = 0;
        foreach (IResourceLocator item in updateCatlogKeys)
        {
            AsyncOperationHandle<long> downloadAsstesSizeaAsync = Addressables.GetDownloadSizeAsync(item.Keys);
            await downloadAsstesSizeaAsync.Task;
            downloadAssetSize += downloadAsstesSizeaAsync.Result;
            updateContentSize.Add(downloadAsstesSizeaAsync.Result);
            Addressables.Release(downloadAsstesSizeaAsync);
        }
        CLog.L(LType.HotUpdate, $"下载更新大小为: {downloadAssetSize / 1024f }kB");

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
        CLog.L(LType.HotUpdate, $"HotUpdate --- downloadAsset");
        CLog.L(LType.HotUpdate, $"updateCatlogKeys Count: {updateCatlogKeys[0].Keys.Count()}");
        for(int i = 0; i < updateCatlogKeys.Count; i++)
        {
            var item = updateCatlogKeys[i];
            var size = updateContentSize[i];
            AsyncOperationHandle asyncOperationHandle = Addressables.DownloadDependenciesAsync(item.Keys, Addressables.MergeMode.Union, false);
            while (!asyncOperationHandle.IsDone)
            {
                float percentage = asyncOperationHandle.GetDownloadStatus().Percent;
                EDownloadProgress?.Invoke(percentage, size);
                await Task.Yield();
            }
            Addressables.Release(asyncOperationHandle);

        }

        CLog.L(LType.HotUpdate, "资源下载完成");
        HotUpdateFinished();
    }



    private void HotUpdateFinished()
    {
        CLog.L(LType.HotUpdate, "HotUpdateFinished");
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

        var loadDllOp = Addressables.LoadAssetAsync<TextAsset>("Assets/Res/BundleRes/Codes/HotUpdate.dll.bytes");
        await loadDllOp.Task;
        if(loadDllOp.Status != AsyncOperationStatus.Succeeded)
        {
            throw new Exception($"HotUpdateCodesLoad: {loadDllOp.Status}");
        }
        Assembly hotUpdate = Assembly.Load(loadDllOp.Result.bytes);
        await UniTask.Yield();
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
