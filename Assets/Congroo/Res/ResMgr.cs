using Cysharp.Threading.Tasks;
using System;
using System.Threading;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Congroo.Core
{
    /// <summary>
    /// 资源加载管理器
    /// </summary>
    public sealed class ResMgr : Singleton<ResMgr>
    {
        private ResMgr()
        {
            
        }


        #region Resource

        public T LoadFromResources<T>(string resName) where T : UnityEngine.Object
        {
            return Resources.Load<T>(resName);
        }

        public async UniTask LoadAsyncFromResources<T>(string resName, Action<T> cb = null) where T : UnityEngine.Object
        {
            await Resources.LoadAsync(resName);
        }


        #endregion


        #region Addressable

        public T LoadAsset<T>(string key, CancellationToken cancellationToken = default) where T : UnityEngine.Object
        {
            AsyncOperationHandle<T> op = Addressables.LoadAssetAsync<T>(key);
            cancellationToken.Register(() => 
            {
                Relase(op);
            });
            op.WaitForCompletion();
            return op.Result;
        }

        public AsyncOperationHandle<T> LoadAssetAsync<T>(string key) where T : UnityEngine.Object
        {
            AsyncOperationHandle<T> op = Addressables.LoadAssetAsync<T>(key);
            return op;
        }

        public void ReleaseAsset<T>(T obj)
        {
            Addressables.Release(obj);
        }


        public void Relase<T>(AsyncOperationHandle<T> handle)
        {
            Addressables.Release(handle);
        }


        #endregion

    }
}