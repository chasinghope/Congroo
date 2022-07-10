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

        protected override void InstanceCreated()
        {
            base.InstanceCreated();
            Initialize();
        }

        public void Initialize()
        {
            Events = new Dictionary<int, Event>();
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


        /// <summary>
        /// 事件出发
        /// </summary>
        /// <param name="nMsgCode"></param>
        /// <param name="rEventArg"></param>
        public void Trigger(int nMsgCode, params object[] rEventArgs)
        {
            EventArg rEventArg = new EventArg(rEventArgs);
            TriggerArg(nMsgCode, rEventArg);
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
