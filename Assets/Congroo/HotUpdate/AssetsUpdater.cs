using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.AddressableAssets.ResourceLocators;

namespace Congroo.Core
{
    /// <summary>
    /// ������Դ����
    /// </summary>
    public class ChangedAsset
    {
        public IEnumerable<object> assets { get; private set; }
        public long totalSize { get; private set; }

        public ChangedAsset(IEnumerable<object> assets, long totalSize)
        {
            this.assets = assets;
            this.totalSize = totalSize;
        }
    }

    /// <summary>
    /// ��Դ���¹�����
    /// </summary>
    public class AssetsUpdater
    {
        public IEnumerable<object> assets { get; private set; }
        public int count { get; private set; }
        public long totalSize { get; private set; }
        public long downloadedSize { get; private set; }
        public static float progress { get; private set; }
        public bool needUpdate => totalSize > 0 && progress < 1;


        private Action<bool> onCompleted;
        private Action<float> onProgress;
        private Action<long, long> onSize;

        public void Init(IEnumerable<object> assets, long totalSize)
        {
            this.assets = assets;
            this.totalSize = totalSize;
            count = assets.Count();
        }

        public void Init(ChangedAsset changedAsset)
        {
            if (changedAsset == null) return;
            assets = changedAsset.assets;
            totalSize = changedAsset.totalSize;
            count = assets.Count();
        }

        /// <summary>
        /// �����ļ�
        /// </summary>
        public async Task Update()
        {
            if (!needUpdate) return;
            var clearCacheHandle = Addressables.ClearDependencyCacheAsync(assets, true);
            await clearCacheHandle.Task;
            onProgress?.Invoke(progress);
            onSize?.Invoke(downloadedSize, totalSize);
            AsyncOperationHandle downloadHandle =
                Addressables.DownloadDependenciesAsync(assets, Addressables.MergeMode.Union, false);
            DownloadStatus downloadStatus;
            while (downloadHandle.Status == AsyncOperationStatus.None)
            {
                downloadStatus = downloadHandle.GetDownloadStatus();
                if (downloadStatus.Percent > progress * 1.1) // Report at most every 10% or so
                {
                    progress = downloadStatus.Percent; // More accurate %
                    onProgress?.Invoke(progress);
                    downloadedSize = downloadStatus.DownloadedBytes;
                    onSize?.Invoke(downloadedSize, totalSize);
                }
                await Task.Delay(100);
            }
            onCompleted?.Invoke(downloadHandle.Status == AsyncOperationStatus.Succeeded);
            Addressables.Release(downloadHandle);
        }

        public AssetsUpdater OnCompleted(Action<bool> onCompleted)
        {
            this.onCompleted = onCompleted;
            return this;
        }

        public AssetsUpdater OnProgress(Action<float> onProgress)
        {
            this.onProgress = onProgress;
            return this;
        }

        public AssetsUpdater OnSize(Action<long, long> onSize)
        {
            this.onSize = onSize;
            return this;
        }
    }

    /// <summary>
    /// Addressable������
    /// </summary>
    public class AAManager
    {
        private static bool isInited = false;

        static AAManager()
        {
            isInited = false;
        }

        public static async Task Init()
        {
            await Addressables.InitializeAsync().Task;
            isInited = true;
        }

        /// <summary>
        /// ��ȡ���п�Ѱַ��Դ
        /// </summary>
        /// <returns></returns>
        public static async Task<IEnumerable<object>> GetAssets()
        {
            if (!isInited) await Init();
            await CheckCatalogAndUpdate();

            IEnumerable<IResourceLocator> locators = Addressables.ResourceLocators;
            //����µ��ļ��б�
            List<object> updateObjList = new List<object>();
            //��������Ŀ¼����ȡ��ÿ��Ŀ¼�е������ļ���Ϣ����������б�
            foreach (var locator in locators) updateObjList.AddRange(locator.Keys);
            return updateObjList;
        }

        /// <summary>
        /// �õ����б仯�˵���Դ
        /// </summary>
        public static async Task<ChangedAsset> GetChangedAssets()
        {
            List<object> changedAssets = new List<object>();
            IEnumerable<object> assets = await GetAssets();
            if (assets == null || assets.Count() == 0) return null;
            long size;
            long totalSize = 0;
            foreach (var asset in assets)
            {
                var sizeHandle = Addressables.GetDownloadSizeAsync(asset);
                size = await sizeHandle.Task;
                if (size > 0)
                {
                    changedAssets.Add(asset);
                    totalSize += size;
                }
                Addressables.Release(sizeHandle);
            }
            if (totalSize == 0) return null;
            return new ChangedAsset(changedAssets, totalSize);
        }

        /// <summary>
        /// ���Ŀ¼�仯�����±仯��Ŀ¼
        /// </summary>
        public static async Task CheckCatalogAndUpdate()
        {
            //���ɸ���Ŀ¼
            AsyncOperationHandle<List<string>> catalogs = Addressables.CheckForCatalogUpdates(false);
            await catalogs.Task;
            int catalogCount = catalogs.Result.Count;
            if (catalogCount == 0)
            {
                Addressables.Release(catalogs);
                return;
            }
            //���¿ɸ���Ŀ¼
            AsyncOperationHandle<List<IResourceLocator>> newCatalogs =
                Addressables.UpdateCatalogs(catalogs.Result, false);
            await newCatalogs.Task;
            Addressables.Release(catalogs);
            Addressables.Release(newCatalogs);
        }

        /// <summary>
        /// ��ȡ�ɸ����ļ���С
        /// </summary>
        /// <param name="updateObjs">���пɸ����ļ�</param>
        /// <returns></returns>
        public static async Task<long> GetUpdateSize(IEnumerable<object> updateObjs)
        {
            var sizeHandle = Addressables.GetDownloadSizeAsync(updateObjs);
            await sizeHandle.Task;
            long updateSize = sizeHandle.Result;
            Addressables.Release(sizeHandle);
            return updateSize;
        }

        /// <summary>
        /// ��ȡ��Դ����������
        /// </summary>
        /// <returns></returns>
        public static async Task<AssetsUpdater> GetAssetsUpdater()
        {
            AssetsUpdater assetsUpdater = new AssetsUpdater();
            ChangedAsset changedAsset = await GetChangedAssets();
            assetsUpdater.Init(changedAsset);
            return assetsUpdater;
        }
    }
}
