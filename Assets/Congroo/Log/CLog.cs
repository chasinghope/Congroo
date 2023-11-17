using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public static class CLog
    {
        private static Dictionary<LType, LogCustomData> LogCusomtConfigDict = new Dictionary<LType, LogCustomData>()
        {
            { LType.Normal,         new LogCustomData(false, LType.Normal,          "Normal",           Color.white) },
            { LType.Congroo,        new LogCustomData(false, LType.Congroo,         "Congroo",          Color.green) },
            { LType.CongrooEditor,  new LogCustomData(false, LType.CongrooEditor,   "CongrooEditor",    Color.yellow)},
            { LType.Diagnost,       new LogCustomData(false, LType.Diagnost,   "Diagnost",    new Color(1f, 165/255f, 0f))},
            { LType.Temp,           new LogCustomData(false, LType.Temp,            "Test",             new Color(176/255f, 224/255f, 230/255f))},
        };

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void L(LType rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  {rObj}");   
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LW(LType rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  {rObj}");
        }

        [System.Diagnostics.Conditional("UNITY_EDITOR")]
        public static void LE(LType rType, object rObj)
        {
            if (LogCusomtConfigDict[rType].IsFilter) return;
            Debug.Log($"{LogCusomtConfigDict[rType]}  {rObj}");
        }
    }
}