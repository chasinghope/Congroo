using System.Collections.Generic;

namespace Congroo.Core
{
    public class EventArg
    {
        private List<object> mArgs;

        public EventArg(params object[] rArgs)
        {
            this.mArgs = new List<object>(rArgs);
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
    }
}
