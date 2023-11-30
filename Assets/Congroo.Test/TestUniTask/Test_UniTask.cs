using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using Congroo.Core;
using System.Text;
using System.Threading;

public class Test_UniTask : MonoBehaviour
{
    private CancellationTokenSource cts = new CancellationTokenSource();
    private void Awake()
    {
        Application.targetFrameRate = 60;
    }
    // Start is called before the first frame update
    private void Start()
    {
        //LongWork().AttachExternalCancellation(cts.Token);

        //CLog.L(LType.Temp, $"{Time.realtimeSinceStartup}    下载开始");
        //await UniTask.Delay( 1000 );
        //var op = await UnityWebRequest.Get("https://www.163.com").SendWebRequest().WithCancellation(cts.Token);
        //CLog.L(LType.Temp, op.downloadHandler.text);
        //CLog.L(LType.Temp, $"{Time.realtimeSinceStartup}    下载结束");


    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            cts.Cancel();
            CLog.L(LType.Temp, $"{Time.realtimeSinceStartup}    下载取消");
        }
    }


    private async UniTask LongWork()
    {
        CLog.L(LType.Temp, $"{Time.realtimeSinceStartup}    开始工作");
        await UniTask.Delay(1000 * 5);

        CLog.L(LType.Temp, $"{Time.realtimeSinceStartup}    工作结束");
    }


    private async UniTask DemoAysnc()
    {
        CLog.L(LType.Temp, Time.realtimeSinceStartup);
        await UniTask.Delay(1000 * 10);
        CLog.L(LType.Temp, Time.realtimeSinceStartup);

    }


    private async UniTask DemoRequestWeb()
    {
        var task1 = GetTextAsync(UnityWebRequest.Get("https://www.baidu.com"));
        var task2 = GetTextAsync(UnityWebRequest.Get("https://www.163.com"));
        var task3 = GetTextAsync(UnityWebRequest.Get("https://fanyi.baidu.com"));
        var (google, bing, yahoo) = await UniTask.WhenAll(task1, task2, task3);
        StringBuilder content = new StringBuilder();
        content.Append(google);
        content.Append(bing);
        content.Append(yahoo);
        CLog.L(LType.Temp, content);
    }

    async UniTask<string> GetTextAsync(UnityWebRequest req)
    {
        var op = await req.SendWebRequest();
        return op.downloadHandler.text;
    }



    //    async UniTask<string> DemoAsync()
    //    {
    //        // You can await Unity's AsyncObject
    //        var asset = await Resources.LoadAsync<TextAsset>("foo");
    //        var txt = (await UnityWebRequest.Get("https://...").SendWebRequest()).downloadHandler.text;
    //        await SceneManager.LoadSceneAsync("scene2");

    //        // .WithCancellation enables Cancel, GetCancellationTokenOnDestroy synchornizes with lifetime of GameObject
    //        var asset2 = await Resources.LoadAsync<TextAsset>("bar").WithCancellation(this.GetCancellationTokenOnDestroy());

    //        // .ToUniTask accepts progress callback(and all options), Progress.Create is a lightweight alternative of IProgress<T>
    //        var asset3 = await Resources.LoadAsync<TextAsset>("baz").ToUniTask(Progress.Create<float>(x => Debug.Log(x)));

    //        // await frame-based operation like a coroutine
    //        await UniTask.DelayFrame(100);

    //        // replacement of yield return new WaitForSeconds/WaitForSecondsRealtime
    //        await UniTask.Delay(TimeSpan.FromSeconds(10), ignoreTimeScale: false);

    //        // yield any playerloop timing(PreUpdate, Update, LateUpdate, etc...)
    //        await UniTask.Yield(PlayerLoopTiming.PreLateUpdate);

    //        // replacement of yield return null
    //        await UniTask.Yield();
    //        await UniTask.NextFrame();

    //        // replacement of WaitForEndOfFrame
    //#if UNITY_2023_1_OR_NEWER
    //    await UniTask.WaitForEndOfFrame();
    //#else
    //        // requires MonoBehaviour(CoroutineRunner))
    //        await UniTask.WaitForEndOfFrame(this); // this is MonoBehaviour
    //#endif

    //        // replacement of yield return new WaitForFixedUpdate(same as UniTask.Yield(PlayerLoopTiming.FixedUpdate))
    //        await UniTask.WaitForFixedUpdate();

    //        // replacement of yield return WaitUntil
    //        await UniTask.WaitUntil(() => isActive == false);

    //        // special helper of WaitUntil
    //        await UniTask.WaitUntilValueChanged(this, x => x.isActive);

    //        // You can await IEnumerator coroutines
    //        await FooCoroutineEnumerator();

    //        // You can await a standard task
    //        await Task.Run(() => 100);

    //        // Multithreading, run on ThreadPool under this code
    //        await UniTask.SwitchToThreadPool();

    //        /* work on ThreadPool */

    //        // return to MainThread(same as `ObserveOnMainThread` in UniRx)
    //        await UniTask.SwitchToMainThread();

    //        // get async webrequest
    //        async UniTask<string> GetTextAsync(UnityWebRequest req)
    //        {
    //            var op = await req.SendWebRequest();
    //            return op.downloadHandler.text;
    //        }

    //        var task1 = GetTextAsync(UnityWebRequest.Get("http://google.com"));
    //        var task2 = GetTextAsync(UnityWebRequest.Get("http://bing.com"));
    //        var task3 = GetTextAsync(UnityWebRequest.Get("http://yahoo.com"));

    //        // concurrent async-wait and get results easily by tuple syntax
    //        var (google, bing, yahoo) = await UniTask.WhenAll(task1, task2, task3);

    //        // shorthand of WhenAll, tuple can await directly
    //        var (google2, bing2, yahoo2) = await (task1, task2, task3);

    //        // return async-value.(or you can use `UniTask`(no result), `UniTaskVoid`(fire and forget)).
    //        return (asset as TextAsset)?.text ?? throw new InvalidOperationException("Asset not found");
    //    }

}