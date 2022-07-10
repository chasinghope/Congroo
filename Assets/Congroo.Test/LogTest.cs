using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
public class LogTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        LogManager.Log(LogCustomEnum.CongrooEditor, "≤‚ ‘1");
        LogManager.Log(LogCustomEnum.Normal, "≤‚ ‘2");
        LogManager.Log(LogCustomEnum.Congroo, "≤‚ ‘3");
        LogManager.Log(LogCustomEnum.CongrooEditor, "≤‚ ‘4");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
