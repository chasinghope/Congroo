using System;
using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public class GameObjectPool
    {
        List<GameObject> mUseList = new List<GameObject>();
        Stack<GameObject> mFreeStack = new Stack<GameObject>();

        private Action<GameObject> mAllocateAction;
        private Action<GameObject> mFreeAction;

        private Transform mParent;
        private GameObject mPrefab;

        public GameObjectPool(GameObject mPrefab, Transform mParent)
        {
            this.mPrefab = mPrefab;
            this.mParent = mParent;
        }

        public GameObjectPool(GameObject mPrefab, Transform mParent, int nCount)
        {
            this.mPrefab = mPrefab;
            this.mParent = mParent;
            for (int i = 0; i < nCount; i++)
            {
                GameObject gameObj = CreateGameObject();
                gameObj.SetActive(false);
                mFreeStack.Push(gameObj);
            }
        }


        public GameObject Allocate()
        {
            GameObject obj = mFreeStack.Count > 0 ? mFreeStack.Pop() : CreateGameObject();
            obj.SetActive(true);
            mUseList.Add(obj);
            mAllocateAction?.Invoke(obj);
            return obj;
        }


        public T Allocate<T>() where T : MonoBehaviour
        {
            return Allocate().GetComponent<T>();
        }


        public void Free(GameObject rObjectUnit)
        {
            rObjectUnit.SetActive(false);
            mUseList.Remove(rObjectUnit);
            mFreeStack.Push(rObjectUnit);
        }

        public void ResetFrame()
        {
            foreach (var obj in mUseList)
            {
                obj.SetActive(false);
                mFreeAction?.Invoke(obj);
                mFreeStack.Push(obj);
            }
        }

        public void ClearAll()
        {
            foreach (var obj in mUseList)
            {
                mFreeAction?.Invoke(obj);
                GameObject.Destroy(obj);
            }
            mUseList.Clear();
            mFreeStack.Clear();
        }

        private GameObject CreateGameObject()
        {
            GameObject gameObj = GameObject.Instantiate(mPrefab);
            gameObj.transform.SetParent(this.mParent, false);
            return gameObj;
        }
    }


    public class GameObjectPool<T> where T : MonoBehaviour
    {
        List<T> mUseList = new List<T>();
        Stack<T> mFreeStack = new Stack<T>();

        private Action<T> mAllocateAction;
        private Action<T> mFreeAction;

        private Transform mParent;
        private T mPrefab;

        public GameObjectPool(T mPrefab, Transform mParent)
        {
            this.mPrefab = mPrefab;
            this.mParent = mParent;
        }

        public GameObjectPool(T mPrefab, Transform mParent, int nCount)
        {
            this.mPrefab = mPrefab;
            this.mParent = mParent;
            for (int i = 0; i < nCount; i++)
            {
                T gameObj = CreateGameObject();
                gameObj.gameObject.SetActive(false);
                mFreeStack.Push(gameObj);
            }
        }

        public void RegisterAction(Action<T> allocateAction, Action<T> freeAction)
        {
            mAllocateAction = allocateAction; mFreeAction = freeAction;
        }


        public T Allocate()
        {
            T obj = mFreeStack.Count > 0 ? mFreeStack.Pop() : CreateGameObject();
            obj.gameObject.SetActive(true);
            mUseList.Add(obj);
            mAllocateAction?.Invoke(obj);
            return obj;
        }

        public void Free(T rObjectUnit)
        {
            rObjectUnit.gameObject.SetActive(false);
            mUseList.Remove(rObjectUnit);
            mFreeStack.Push(rObjectUnit);
        }

        public void ResetFrame()
        {
            foreach (var obj in mUseList)
            {
                obj.gameObject.SetActive(false);
                mFreeAction?.Invoke(obj);
                mFreeStack.Push(obj);
            }
        }

        public void DestoryAll()
        {
            foreach (var obj in mUseList)
            {
                mFreeAction?.Invoke(obj);
                GameObject.Destroy(obj.gameObject);
            }
            mUseList.Clear();
            mFreeStack.Clear();
        }



        private T CreateGameObject()
        {
            GameObject gameObj = GameObject.Instantiate(mPrefab.gameObject);
            gameObj.transform.SetParent(this.mParent, false);
            return gameObj.GetComponent<T>();
        }


    }
}
