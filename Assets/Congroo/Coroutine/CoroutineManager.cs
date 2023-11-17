using UnityEngine;
using System.Collections;
using System;
using System.Threading;

namespace Congroo.Core
{
    /// <summary>
    /// 协程管理器
    /// </summary>
    public class CoroutineManager : Singleton<CoroutineManager>
    {
        private CoroutineMono mCoroutineMono;

        private CoroutineManager() { }

        public void Initialize()
        {
            GameObject coroutineRootObj = new GameObject("___CoroutineRoot");
            coroutineRootObj.transform.position = Vector3.zero;
            this.mCoroutineMono = coroutineRootObj.AddComponent<CoroutineMono>();

            if (Application.isPlaying)
            {
                GameObject.DontDestroyOnLoad(coroutineRootObj);
            }
        }



        public Coroutine Start(IEnumerator rIEnum)
        {
            return this.mCoroutineMono.StartCoroutine(rIEnum);
        }


        public void Stop(Coroutine rCoroutine)
        {
            this.mCoroutineMono.StopCoroutine(rCoroutine);
        }


        public Coroutine StartCoroutine(IEnumerator enumerator, CancellationToken cancellationToken)
        {
            Coroutine ret = null;
            if (enumerator != null && cancellationToken != null)
            {
                ret = mCoroutineMono.StartCoroutine(enumerator);
                cancellationToken.Register(() =>
                {
                    StopCoroutine(ret);
                });
            }
            return ret;
        }

        public void StopCoroutine(Coroutine coroutine)
        {
            if (coroutine != null && mCoroutineMono != null)
            {
                mCoroutineMono.StopCoroutine(coroutine);
            }
        }


        public void WaitFrameCallBack(Action action, CancellationToken cancellationToken, int frameCount = 1)
        {
            StartCoroutine(_WaitFrameCallBack(action, frameCount), cancellationToken);
        }


        private IEnumerator _WaitFrameCallBack(Action action, int frameCount)
        {
            yield return frameCount;
            action?.Invoke();
        }
    }
}

