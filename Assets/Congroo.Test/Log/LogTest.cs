using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
using NaughtyAttributes;
public class LogTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [Button]
    public void Test()
    {

        CLog.L(LType.Diagnost, "≤‚ ‘1");
        CLog.L(LType.Normal, "≤‚ ‘2");
        CLog.L(LType.Congroo, "≤‚ ‘3");
        CLog.L(LType.CongrooEditor, "≤‚ ‘4");
        CLog.L(LType.Temp, "≤‚ ‘5");
        CLog.L(LType.WebSocket, "≤‚ ‘6");
        CLog.L(LType.HotUpdate, "≤‚ ‘7");
    }
}
