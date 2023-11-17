using System;

namespace Congroo.Core
{
    [AttributeUsage(AttributeTargets.Method)]
    public class EventAttribute : System.Attribute
    {
        public uint EventId;
        public EventAttribute(uint nEventId)
        {
            EventId = nEventId;
        }
    }
}