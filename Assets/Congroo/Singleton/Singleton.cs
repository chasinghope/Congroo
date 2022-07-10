using System;
using System.Reflection;

namespace Congroo.Core
{
    public class Singleton<T> where T : Singleton<T>
    {
        private static object LockObject = new object();
        private static T mInstance;

        public static readonly Type[] EmptyTypes = new Type[0];

        public static T Instance
        {
            get
            {
                if (mInstance == null)
                {
                    lock (LockObject)
                    {
                        if (mInstance == null)
                        {
                            ConstructorInfo ci = typeof(T).GetConstructor(BindingFlags.NonPublic | BindingFlags.Instance, null, EmptyTypes, null);
                            if (ci == null) { throw new InvalidOperationException($"{typeof(T)} class must contain a private or protected constructor"); }
                            mInstance = (T)ci.Invoke(null);
                            mInstance.InstanceCreated();
                        }
                    }
                }
                return mInstance;
            }
        }


        protected virtual void InstanceCreated()
        {

        }
    }
}