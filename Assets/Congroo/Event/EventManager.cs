using System.Collections.Generic;
using System;

namespace Congroo.Core
{
    public class EventManager : Singleton<EventManager>
    {
        public class Event
        {
            public int MsgCode;
            public List<Action<EventArg>> ListenerActions;

            public Event(int msgCode, List<Action<EventArg>> listenerActions)
            {
                MsgCode = msgCode;
                ListenerActions = listenerActions;
            }
        }

        public Dictionary<int, Event> Events;
        private ObjectPool<EventArg> mEventArgPool;

        private EventManager()
        {

        }

        protected override void InstanceCreated()
        {
            base.InstanceCreated();
            Initialize();
        }

        public void Initialize()
        {
            Events = new Dictionary<int, Event>();
            mEventArgPool = new ObjectPool<EventArg>();
        }


        /// <summary>
        /// 绑定事件
        /// </summary>
        /// <param name="nMsgCode"></param>
        /// <param name="rListenerCallback"></param>
        public void Binding(int nMsgCode, Action<EventArg> rListenerCallback)
        {
            if(Events.TryGetValue(nMsgCode, out Event evt))
            {
                if(evt.ListenerActions == null)
                    evt.ListenerActions = new List<Action<EventArg>>();

                if(!evt.ListenerActions.Contains(rListenerCallback))
                    evt.ListenerActions.Add(rListenerCallback);
            }
            else
            {
                Events.Add(nMsgCode, new Event(nMsgCode, new List<Action<EventArg>>() { rListenerCallback } ));
            }
        }


        /// <summary>
        /// 解除事件绑定
        /// </summary>
        /// <param name="nMsgCode"></param>
        /// <param name="rEventCallback"></param>
        public void Unbinding(int nMsgCode, Action<EventArg> rEventCallback)
        {
            if( Events.TryGetValue(nMsgCode, out Event evt))
            {
                if (evt.ListenerActions != null)
                    evt.ListenerActions.Remove(rEventCallback);
            }
        }



        public void Trigger(int nMsgCode, object rArg1)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6, rArg7);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }

        public void Trigger(int nMsgCode, object rArg1, object rArg2, object rArg3, object rArg4, object rArg5, object rArg6, object rArg7, object rArg8)
        {
            EventArg rEventArg = mEventArgPool.Allocate();
            rEventArg.SetParams(rArg1, rArg2, rArg3, rArg4, rArg5, rArg6, rArg7, rArg8);
            TriggerArg(nMsgCode, rEventArg);
            mEventArgPool.Free(rEventArg);
        }


        public void TriggerArg(int nMsgCode, EventArg rEventArg)
        {
            if(Events.TryGetValue(nMsgCode, out Event evt))
            {
                if(evt.ListenerActions != null)
                {
                    foreach (var item in evt.ListenerActions)
                    {
                        item?.Invoke(rEventArg);
                    }
                }
            }
        }


        public bool Contains(int nMsgCode)
        {
            return Events.ContainsKey(nMsgCode);
        }
    }
}
