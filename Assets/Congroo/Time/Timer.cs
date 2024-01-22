using UnityEngine;
using UnityHFSM;

namespace Congroo.Core
{
    public class Timer
    {
        public float startTime;
        public float Elapsed => Time.time - startTime;

        public Timer()
        {
            startTime = Time.time;
        }

        public void Reset()
        {
            startTime = Time.time;
        }

        public void Pause(bool pause)
        {

        }


        public static bool operator >(Timer timer, float duration)
            => timer.Elapsed > duration;

        public static bool operator <(Timer timer, float duration)
            => timer.Elapsed < duration;

        public static bool operator >=(Timer timer, float duration)
            => timer.Elapsed >= duration;

        public static bool operator <=(Timer timer, float duration)
            => timer.Elapsed <= duration;
    }
}