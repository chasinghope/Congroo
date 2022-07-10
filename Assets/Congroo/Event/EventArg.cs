using System.Collections.Generic;

namespace Congroo.Core
{
    public class EventArg
    {
        private List<object> mArgs;

        public EventArg(object mArg1)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
        }

        public EventArg(object mArg1, object mArg2)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
        }

        public EventArg(object mArg1, object mArg2, object mArg3)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
        }

        public EventArg(object mArg1, object mArg2, object mArg3, object mArg4)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
            mArgs.Add(mArg4);
        }

        public EventArg(object mArg1, object mArg2, object mArg3, object mArg4, object mArg5)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
            mArgs.Add(mArg4);
            mArgs.Add(mArg5);
        }

        public EventArg(object mArg1, object mArg2, object mArg3, object mArg4, object mArg5, object mArg6)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
            mArgs.Add(mArg4);
            mArgs.Add(mArg5);
            mArgs.Add(mArg6);
        }

        public EventArg(object mArg1, object mArg2, object mArg3, object mArg4, object mArg5, object mArg6, object mArg7)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
            mArgs.Add(mArg4);
            mArgs.Add(mArg5);
            mArgs.Add(mArg6);
            mArgs.Add(mArg7);
        }

        public EventArg(object mArg1, object mArg2, object mArg3, object mArg4, object mArg5, object mArg6, object mArg7, object mArg8)
        {
            mArgs = new List<object>();
            mArgs.Add(mArg1);
            mArgs.Add(mArg2);
            mArgs.Add(mArg3);
            mArgs.Add(mArg4);
            mArgs.Add(mArg5);
            mArgs.Add(mArg6);
            mArgs.Add(mArg7);
            mArgs.Add(mArg8);
        }

        public T Get<T>(int nIndex)
        {
            if (mArgs != null && mArgs.Count > nIndex && mArgs[nIndex] != null)
                return (T)mArgs[nIndex];
            return default(T);
        }

        public void Clear()
        {
            mArgs.Clear();
        }
    }
}
