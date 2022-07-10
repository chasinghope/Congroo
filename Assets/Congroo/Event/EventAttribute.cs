namespace Congroo.Core
{
    
    public class EventAttribute : System.Attribute
    {
        public ulong EventId;
        public EventAttribute(ulong nEventId)
        {
            EventId = nEventId;
        }
    }
}