using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public enum LogCustomEnum
    {
        Normal,
        Congroo,
        CongrooEditor,
        Temp,
    }

    internal class LogCustomData
    {
        public bool IsFilter = false;
        public LogCustomEnum Type;
        public string Tag = "Temp";
        public Color Color = Color.white;

        public LogCustomData(bool bIsFilter, LogCustomEnum rType, string rTag, Color rColor)
        {
            IsFilter = bIsFilter;
            Type = rType;
            Tag = rTag;
            Color = rColor;
        }

        public override string ToString()
        {
            return $"<color=#{ColorUtility.ToHtmlStringRGB(Color)}>[{Tag}]</color>";
        }
    }
}

