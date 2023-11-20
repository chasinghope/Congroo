using System.Collections.Generic;
using System;
using System.Reflection;
using Unity.VisualScripting;

namespace Congroo.Core
{
    public class EventCenter : Singleton<EventCenter>
    {
        public class Event
        {
            public uint MsgCode;
            public List<Action<EventArg>> ListenerActions;

            public Event(uint msgCode, List<Action<EventArg>> listenerActions)
            {
                MsgCode = msgCode;
                ListenerActions = listenerActions;
            }
        }

        public Dictionary<uint, Event> Events;
        private ObjectPool<EventArg> mEventArgPool;

        private EventCenter()
        {

        }

        protected override void InstanceCreated()
        {
            base.InstanceCreated();
            Initialize();
        }

        public void Initialize()
        {
            Events = new Dictionary<uint, Event>();
            mEventArgPool = new ObjectPool<EventArg>();
        }


        /// <summary>
        /// 绑定事件
        /// </summary>
        /// <param name="nMsgCode"></param>
        /// <param name="rListenerCallback"></param>
        public void Binding(uint nMsgCode, Action<EventArg> rListenerCallback)
        {
            if (Events.TryGetValue(nMsgCode, out Event evt))
            {
                if (evt.ListenerActions == null)
                    evt.ListenerActions = new List<Action<EventArg>>();

                if (!evt.ListenerActions.Contains(rListenerCallback))
                    evt.ListenerActions.Add(rListenerCallback);
            }
            else
            {
                Events.Add(nMsgCode, new Event(nMsgCode, new List<Action<EventArg>>() { rListenerCallback }));
            }
        }


        /// <summary>
        /// 解除事件绑定
        /// </summary>
        /// <param name="nMsgCode"></param>
        /// <param name="rEventCallback"></param>
        public void Unbinding(uint nMsgCode, Action<EventArg> rEventCallback)
        {
            if (Events.TryGetValue(nMsgCode, out Event evt))
            {
                if (evt.ListenerActions != null)
                    evt.ListenerActions.Remove(rEventCallback);
            }
        }

        public void Trigger(uint nMsgCode, object rArg1)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6, rArg7);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(uint nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7, object rArg8)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6, rArg7, rArg8);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }


        public void TriggerArg(uint nMsgCode, EventArg rEventArg)
        {
            if (Events.TryGetValue(nMsgCode, out Event evt))
            {
                if (evt.ListenerActions != null)
                {
                    foreach (var item in evt.ListenerActions)
                    {
                        item?.Invoke(rEventArg);
                    }
                }
            }
        }


        public bool Contains(uint nMsgCode)
        {
            return Events.ContainsKey(nMsgCode);
        }


        public void BindEventWrappers(List<EventWrapper> eventWrappers)
        {
            if (eventWrappers != null)
            {
                foreach (EventWrapper eWrapper in eventWrappers)
                {
                    Binding(eWrapper.EventCode, eWrapper.EventHandler);
                }
            }
        }


        public void UnbindEventWrappers(List<EventWrapper> eventWrappers)
        {
            if (eventWrappers != null)
            {
                foreach (EventWrapper eWrapper in eventWrappers)
                {
                    Unbinding(eWrapper.EventCode, eWrapper.EventHandler);
                }
                
            }
        }

        /// <summary>
        /// 获取类型的所有方法有EventAttribute，存入到返回值
        /// </summary>
        /// <param name="instance">类型实例</param>
        /// <returns></returns>
        public static List<EventWrapper> GetTypeEvents(object instance)
        {
            Type type = instance.GetType();
            List<EventWrapper> eventWrappers = null;
            BindingFlags bindingFlags = BindingFlags.InvokeMethod | BindingFlags.Public | BindingFlags.Instance | BindingFlags.NonPublic;
            MethodInfo[] methodInfos = type.GetMethods(bindingFlags);
            foreach (MethodInfo methodInfo in methodInfos)
            {
                object[] items = methodInfo.GetCustomAttributes(typeof(EventAttribute), false);
                if (items != null && items.Length > 0)
                {
                    EventAttribute eventAttr = (EventAttribute)items[0];
                    if (eventAttr != null)
                    {
                        Action<EventArg> rActionDelegate = (args) => { methodInfo.Invoke(instance, new object[] { args }); };
                        EventWrapper eWrapper = new EventWrapper()
                        {
                            EventCode = eventAttr.EventId,
                            EventHandler = rActionDelegate
                        };

                        if (eventWrappers == null)
                        {
                            eventWrappers = new List<EventWrapper>();
                        }
                        eventWrappers.Add(eWrapper);
                    }
                }
            }
            return eventWrappers;
        }

    }
}
