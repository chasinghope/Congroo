using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public class ObjectPool<T> where T : IObjectUnit, new()
    {
        Stack<T> mUseStack = new Stack<T>();
        Stack<T> mFreeStack = new Stack<T>();


        public ObjectPool()
        {

        }

        public ObjectPool(int nCount)
        {
            for (int i = 0; i < nCount; i++)
            {
                mFreeStack.Push(new T());
            }
        }

        public T Allocate()
        {
            T obj = mFreeStack.Count > 0 ? mFreeStack.Pop() : new T();
            mUseStack.Push(obj);
            obj.Enable();
            return obj;
        }

        public void ResetFrame()
        {
            while (mUseStack.Count > 0)
            {
                T obj = mUseStack.Pop();
                obj.Disable();
                mFreeStack.Push(obj);
            }
        }

        public void Clear()
        {
            foreach (var obj in mUseStack)
            {
                obj.Disable();
            }
            mUseStack.Clear();
            mFreeStack.Clear();
        }

    }


}
