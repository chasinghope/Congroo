using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
using System;

public class Dog
{
    public bool IsMale;
}


public class ListenerTest : MonoBehaviour
{
    // Start is called before the first frame update

    private void OnEnable()
    {
        EventManager.Instance.Binding(TestEvents.TestEvent001, TestEvent001_OnHandler);

    }

    private void TestEvent001_OnHandler(EventArg obj)
    {
        int intValue = obj.Get<int>(0);
        string stringValue = obj.Get<string>(1);
        Dog dogValue = obj.Get<Dog>(2);
        LogManager.Log(LogCustomEnum.Temp, $"{intValue}     {stringValue}       {dogValue.IsMale}");
    }

    private void OnDisable()
    {
        EventManager.Instance.Unbinding(TestEvents.TestEvent001, TestEvent001_OnHandler);
    }
}

public static class TestEvents
{
    public const uint TestEvent001 = 10000;
}