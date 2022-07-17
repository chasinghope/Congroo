using System;
using UnityEngine;
using System.Threading.Tasks;

namespace Congroo.Core
{
    public class WaitForTask : CustomYieldInstruction
    {
        public override bool keepWaiting => this.mRuning;
        private bool mRuning = true;

        public static WaitForTask Run(Action action)
        {
            return new WaitForTask(action);
        }

        public WaitForTask(Action action)
        {
            Task.Run(() =>
            {
                action?.Invoke();
                this.mRuning = false;
            });
        }
    }
}

