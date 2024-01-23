using UnityEngine;


namespace Congroo.Core
{
    public class SingletonMono<T> : MonoBehaviour where T : SingletonMono<T>
    {
        private static T mInstance;
        public static T Instance
        {
            get
            {
                if (mInstance == null)
                {
                    mInstance = FindObjectOfType<T>();
                    if (mInstance == null)
                    {
                        GameObject obj = new GameObject();
                        obj.name = typeof(T).Name;
                        mInstance = obj.AddComponent<T>();
                    }
                }

                return mInstance;
            }
        }

        protected virtual void Awake()
        {
            if (mInstance == null)
            {
                mInstance = this as T;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }


    }
}
