using System;
using System.Collections.Generic;

namespace Congroo.Core
{
    public class EventArg : IObjectUnit
    {
        private List<object> mArgs;


        #region Implementation IObjectUnit interface

        public bool IsUsed { get; set; }

        #endregion

        public EventArg()
        {
            this.mArgs = new List<object>();
        }
        
        public T Get<T>(int nIndex)
        {
            if (mArgs != null || nIndex < 0 || mArgs.Count > nIndex || mArgs[nIndex] != null)
                return (T)mArgs[nIndex];
            return default(T);
        }

        public void Clear()
        {
            mArgs.Clear();
        }

        public void SetParams(object rArg1)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
        }
        public void SetParams(object rArg1, object rArg2)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
        }

        public void SetParams(object rArg1, object rArg2, object rArg3)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
        }

        public void SetParams(object rArg1, object rArg2, object rArg3, object rArg4)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
            this.mArgs.Add(rArg4);
        }
        public void SetParams(object rArg1, object rArg2, object rArg3, object rArg4, object rArg5)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
            this.mArgs.Add(rArg4);
            this.mArgs.Add(rArg5);
        }
        public void SetParams(object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
            this.mArgs.Add(rArg4);
            this.mArgs.Add(rArg5);
            this.mArgs.Add(rArg6);
        }

        public void SetParams(object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
            this.mArgs.Add(rArg4);
            this.mArgs.Add(rArg5);
            this.mArgs.Add(rArg6);
            this.mArgs.Add(rArg7);
        }

        public void SetParams(object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7, object rArg8)
        {
            this.mArgs.Clear();
            this.mArgs.Add(rArg1);
            this.mArgs.Add(rArg2);
            this.mArgs.Add(rArg3);
            this.mArgs.Add(rArg4);
            this.mArgs.Add(rArg5);
            this.mArgs.Add(rArg6);
            this.mArgs.Add(rArg7);
            this.mArgs.Add(rArg8);
        }
    }

    public class EventWrapper
    {
        public uint EventCode;
        public Action<EventArg> EventHandler;
    }
}
