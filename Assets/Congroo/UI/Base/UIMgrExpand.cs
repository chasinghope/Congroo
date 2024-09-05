using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using Congroo.Core;

namespace Congroo.UI
{
    public static class UIMgrExpand
    {
        public static readonly Dictionary<UIBase, List<EventWrapper>> EventWrapperDict = new ();

        public static void OnCreate(UIBase uiBase)
        {
            if (!EventWrapperDict.TryGetValue(uiBase, out List<EventWrapper> eventWrappers))
            {
                eventWrappers = EventCenter.GetTypeEvents(uiBase);
                EventWrapperDict[uiBase] = eventWrappers;
            }
        }

        public static void OnBind(UIBase uiBase)
        {
            EventCenter.Ins.BindEventWrappers(EventWrapperDict[uiBase]);
        }
        
        
        public static void OnUnBind(UIBase uiBase)
        {
            EventCenter.Ins.UnbindEventWrappers(EventWrapperDict[uiBase]);
        }
    }
}