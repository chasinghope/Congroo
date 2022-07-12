using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public class ObjectPool<T> where T : IObjectUnit, new()
    {
        List<T> mUseList = new List<T>();
        Stack<T> mFreeStack = new Stack<T>();

        private Action<T> mAllocateAction;
        private Action<T> mFreeAction;

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


        public void RegisterCallback(Action<T> rAllocateAction, Action<T> rFreeAction)
        {
            mAllocateAction = rAllocateAction;
            mFreeAction = rFreeAction;
        }

        public T Allocate()
        {
            T obj = mFreeStack.Count > 0 ? mFreeStack.Pop() : new T();
            obj.IsUsed = true;
            mUseList.Add(obj);
            mAllocateAction?.Invoke(obj);
            return obj;
        }


        public void Free(T rObjectUnit)
        {
            if (!rObjectUnit.IsUsed) return;
            mUseList.Remove(rObjectUnit);
        }



        public void ResetFrame()
        {
            foreach (var obj in mUseList)
            {
                mFreeAction?.Invoke(obj);
                obj.IsUsed = false;
                mFreeStack.Push(obj);
            }
        }

        public void ClearAll()
        {
            foreach (var obj in mUseList)
            {
                mFreeAction?.Invoke(obj);
                obj.IsUsed = false;
            }
            mUseList.Clear();
            mFreeStack.Clear();
        }

    }


}
