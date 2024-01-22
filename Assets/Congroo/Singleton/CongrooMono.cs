using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace Congroo.Core
{
    public class CongrooMono<T> : MonoBehaviour where T : CongrooMono<T>
    {
        private static T mInstance;
        public static T Instance => mInstance;

        protected List<EventWrapper> mEventWrappers;
        protected CancellationTokenSource CancelTokenSource;

        protected virtual void Awake()
        {
            if (mInstance == null)
                mInstance = gameObject.GetComponent<T>();

            mEventWrappers = EventCenter.GetTypeEvents(this);
        }

        public virtual void OnEnable()
        {
            CancelTokenSource = new CancellationTokenSource();
            EventCenter.Instance.BindEventWrappers(mEventWrappers);
        }


        public virtual void OnDisable()
        {
            CancelTokenSource.Cancel();
            EventCenter.Instance.UnbindEventWrappers(mEventWrappers);
        }


        protected virtual void OnApplicationQuit()
        {
            Release();
        }


        public void Release()
        {
            if (mInstance != null)
            {
                Destroy(gameObject);
                mInstance = null;
            }
        }
    }
}