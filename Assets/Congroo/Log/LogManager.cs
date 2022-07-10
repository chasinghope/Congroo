using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public static class LogManager
    {
        private readonly static Dictionary<LogCustomEnum, LogCustomData> LogCusomtConfigDict = new Dictionary<LogCustomEnum, LogCustomData>()
        {
            { LogCustomEnum.Normal, new LogCustomData(false, LogCustomEnum.Normal, "Normal", Color.white) },
            { LogCustomEnum.Congroo, new LogCustomData(false, LogCustomEnum.Congroo, "Congroo", Color.green) },
            { LogCustomEnum.CongrooEditor, new LogCustomData(false, LogCustomEnum.CongrooEditor, "Normal", Color.yellow)},
        };


        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void Log(LogCustomEnum rType, object rObj)
        {
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LogWarning(LogCustomEnum rType, object rObj)
        {
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LogError(LogCustomEnum rType, object rObj)
        {
            Debug.Log($"{LogCusomtConfigDict[rType]}  -{rObj}");
        }
    }
}