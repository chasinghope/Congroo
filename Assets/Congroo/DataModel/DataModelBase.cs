using System;
using System.Collections.Generic;

namespace Congroo.Core
{
    public class DataModelBase
    {
        protected List<EventWrapper> mEventWrappers;

        public virtual void Initialize()
        {
            EventCenter.Instance.BindEventWrappers(mEventWrappers);
        }


        public virtual void Dispose()
        {
            EventCenter.Instance.UnbindEventWrappers(mEventWrappers);
        }

    }
}