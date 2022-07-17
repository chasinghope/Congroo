using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public static class LogManager
    {
        private static Dictionary<LogCustomEnum, LogCustomData> LogCusomtConfigDict = new Dictionary<LogCustomEnum, LogCustomData>()
        {
            { LogCustomEnum.Normal,         new LogCustomData(false, LogCustomEnum.Normal,          "Normal",           Color.white) },
            { LogCustomEnum.Congroo,        new LogCustomData(false, LogCustomEnum.Congroo,         "Congroo",          Color.green) },
            { LogCustomEnum.CongrooEditor,  new LogCustomData(false, LogCustomEnum.CongrooEditor,   "CongrooEditor",    Color.yellow)},
            { LogCustomEnum.Diagnost,       new LogCustomData(false, LogCustomEnum.Diagnost,   "Diagnost",    new Color(1f, 165/255f, 0f))},
            { LogCustomEnum.Temp,           new LogCustomData(false, LogCustomEnum.Temp,            "Test",             new Color(176/255f, 224/255f, 230/255f))},
        };

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void Log(LogCustomEnum rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");   
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LogWarning(LogCustomEnum rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LogError(LogCustomEnum rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");
        }
    }
}