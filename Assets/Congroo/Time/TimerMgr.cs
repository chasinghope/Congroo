using Congroo.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace Congroo.Core
{
    public sealed class TimerMgr : Singleton<TimerMgr>
    {
        private IDGenerator timerIdGenerator = new IDGenerator();
        private Dictionary<long, Coroutine> timerCoroutines = new Dictionary<long, Coroutine>();

        private TimerMgr() { }

        /// <summary>
        /// 启动计时器
        /// </summary>
        /// <param name="cancellationToken"></param>
        /// <param name="callBack">计时器事件</param>
        /// <param name="delay">调用延迟</param>
        /// <param name="doTimes">调用次数，-1表示无限循环</param>
        /// <param name="repeatInterva">调用间隔</param>
        /// <returns>Timer Id</returns>
        public long StartTimer(CancellationToken cancellationToken, Action callBack, float delay = 0f, int doTimes = 1,
            float repeatInterva = 1f, Action finishCb = null)
        {
            long timerId = timerIdGenerator.Next;
            var coroutine = CoroutineManager.Instance.StartCoroutine(TimeCoroutine(timerId, callBack, delay, doTimes, repeatInterva, finishCb), cancellationToken);
            timerCoroutines.Add(timerId, coroutine);
            return timerId;
        }

        /// <summary>
        /// 手动结束计时器
        /// </summary>
        /// <param name="timerId"></param>
        public void EndTimer(long timerId)
        {
            if (timerCoroutines.TryGetValue(timerId, out var coroutine))
            {
                CoroutineManager.Instance.StopCoroutine(coroutine);
                timerCoroutines.Remove(timerId);
            }
        }

        private IEnumerator TimeCoroutine(long timerId, Action callBack, float delay = 0f, int doTimes = 1,
            float repeatInterval = 1f, Action finishCb = null)
        {
            float timeTick = repeatInterval;
            int finishCount = 0;
            bool isLoop = doTimes == -1;
            yield return new WaitForSeconds(delay);

            if (isLoop)
            {
                while (true)
                {
                    if (timeTick >= repeatInterval)
                    {
                        callBack?.Invoke();
                        timeTick = 0f;
                    }

                    timeTick += Time.deltaTime;
                    yield return null;
                }
            }
            else
            {
                while (finishCount < doTimes)
                {
                    if (timeTick >= repeatInterval)
                    {
                        callBack?.Invoke();
                        timeTick = 0f;
                        finishCount++;
                    }

                    timeTick += Time.deltaTime;
                    yield return null;
                }
            }

            EndTimer(timerId);
            finishCb?.Invoke();
        }
    }
}
