using System;
using System.Collections.Generic;
using System.Threading;

namespace Congroo.Core
{
    public class DataModelBase
    {
        protected List<EventWrapper> mEventWrappers;
        protected CancellationTokenSource CancelTokenSource;

        public virtual void Initialize()
        {
            CancelTokenSource = new CancellationTokenSource();
            EventCenter.Instance.BindEventWrappers(mEventWrappers);
        }


        public virtual void Release()
        {
            CancelTokenSource.Cancel();
            EventCenter.Instance.UnbindEventWrappers(mEventWrappers);
        }

    }
}
