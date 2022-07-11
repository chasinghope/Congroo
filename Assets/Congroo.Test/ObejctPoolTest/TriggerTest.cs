using Congroo.Core;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            EventManager.Instance.Trigger(TestEvents.TestEvent001, 10, "dog", new Dog() { IsMale = true });
            LogManager.Log(LogCustomEnum.Temp, $"{TestEvents.TestEvent001}  事件出发啦");
        }
    }
}
