using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace Congroo.Core
{
    public class CoroutineManager : Singleton<CoroutineManager>
    {
        private CoroutineMono mCoroutineMono;

        private CoroutineManager()
        {

        }

        protected override void InstanceCreated()
        {
            GameObject go = new GameObject("CoroutineManager");
            mCoroutineMono = go.AddComponent<CoroutineMono>();
            //DontDestroyOnLoad(go);
        }


        public CoroutineHandler Start(IEnumerator rIEnumerator)
        {
            Coroutine cor = mCoroutineMono.StartCoroutine(rIEnumerator);
            return new CoroutineHandler();
        }
    }

}