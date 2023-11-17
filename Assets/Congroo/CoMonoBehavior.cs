using UnityEngine;
using System;
using System.Collections.Generic;
using System.Reflection;

namespace Congroo.Core
{
    public class CoMonoBehavior : MonoBehaviour
    {
        protected List<EventWrapper> mEventWrappers;

        #region Unity Mono

        public virtual void Awake()
        {
            mEventWrappers = EventCenter.GetTypeEvents(this);
        }

        public virtual void OnEnable()
        {
            EventCenter.Instance.BindEventWrappers(mEventWrappers);
        }

        public virtual void OnDisable()
        {
            EventCenter.Instance.UnbindEventWrappers(mEventWrappers);
        }

        #endregion

        [Event(TestEvents.TestEvent001)]
        private void TestEventHandler(EventArg rEventArg)
        {
            int intValue = rEventArg.Get<int>(0);
            string stringValue = rEventArg.Get<string>(1);
            Dog dogValue = rEventArg.Get<Dog>(2);
            CLog.L(LType.Temp, $"SS {intValue}     {stringValue}       {dogValue.IsMale}");
        }
    }
}

