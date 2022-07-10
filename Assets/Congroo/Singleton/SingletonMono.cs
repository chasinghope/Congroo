using UnityEngine;


namespace Congroo.Core
{
    public class SingletonMono<T> : MonoBehaviour where T : SingletonMono<T>
    {
        private static T mInstance;
        public static T Instance;

        protected virtual void Awake()
        {
            if (mInstance == null)
                mInstance = this as T;
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
