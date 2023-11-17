using Congroo.Core;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class CoroutineTest : MonoBehaviour
{
    // Start is called before the first frame update
    async void Start()
    {
        LogManager.Log(LogCustomEnum.Temp, "Start");
        string taskResult = await Dosomething();
        LogManager.Log(LogCustomEnum.Temp, "End " + taskResult);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private async Task<string>  Dosomething()
    {
        await Task.Yield();
        return "Dog";
    } 

}
