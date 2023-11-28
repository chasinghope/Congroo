using UnityEngine;
using System;
using System.Runtime.CompilerServices;

public static class ExpandClass
{
    public static T Get<T>(this ITuple tuple, int index)
    {
        return (T)tuple[index];
    }
}