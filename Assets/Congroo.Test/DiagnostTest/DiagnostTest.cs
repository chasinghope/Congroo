using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;

public class DiagnostTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        LogManager.Log(LogCustomEnum.Temp, "Diagnost Start");
        using (new CustomTimer("My Test", 1000))
        {
            for (int i = 0; i < 100; i++)
            {

            }
        }
        LogManager.Log(LogCustomEnum.Temp, "Diagnost End");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
