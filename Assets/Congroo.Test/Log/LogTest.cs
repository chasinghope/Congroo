using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
public class LogTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        CLog.L(LType.CongrooEditor, "≤‚ ‘1");
        CLog.L(LType.Temp, "≤‚ ‘4");
        CLog.L(LType.Normal, "≤‚ ‘2");
        CLog.L(LType.Congroo, "≤‚ ‘3");
        CLog.L(LType.CongrooEditor, "≤‚ ‘4");
        CLog.L(LType.Temp, "≤‚ ‘4");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
