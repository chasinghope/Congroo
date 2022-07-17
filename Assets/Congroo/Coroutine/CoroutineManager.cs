//======================================================================
//        Copyright (C) 2015-2020 Winddy He. All rights reserved
//        Email: hgplan@126.com
//======================================================================
using UnityEngine;
using System.Collections;
using System;

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

        public CoroutineHandler StartHandler(IEnumerator rIEnum)
        {
            CoroutineHandler rHandler = new CoroutineHandler(rIEnum);
            this.mCoroutineMono.StartCoroutine(rIEnum);
            return rHandler;
        }

        public Coroutine Start(IEnumerator rIEnum)
        {
            return this.mCoroutineMono.StartCoroutine(rIEnum);
        }

        public void Stop(CoroutineHandler rCoroutineHandler)
        {
            if (rCoroutineHandler != null)
                this.mCoroutineMono.StopCoroutine(rCoroutineHandler.IEnum);
        }
        public void Stop(Coroutine rCoroutine)
        {
            this.mCoroutineMono.StopCoroutine(rCoroutine);
        }
    }
}

