using System.Diagnostics;

namespace Congroo.Core
{
    public class CustomTimer : System.IDisposable
    {
        private string mTimerName;
        private int mNumTests;
        private Stopwatch mWatch;

        public CustomTimer(string timerName, int numTests)
        {
            mTimerName = timerName;
            mNumTests = numTests;
            if (mNumTests <= 0)
                numTests = 1;
            mWatch = Stopwatch.StartNew();
        }

        public void Dispose()
        {
            mWatch.Stop();
            float ms = mWatch.ElapsedMilliseconds;
            string output = string.Format("{0} finished: {1: 0.00} milliseconds total, {2: 0.000000} millisecods per-test for {3} tests.", mTimerName, ms, ms / mNumTests, mNumTests);
            LogManager.Log(LogCustomEnum.Diagnost, output);
        }
    }

}