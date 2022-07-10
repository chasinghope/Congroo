using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace Congroo.UI
{
    public class ShowFPS : MonoBehaviour
    {
        public enum ShowMode
        {
            FPSNumber,   // FPS: 60
            ms           // 60ms
        }

        public Text FPSText;
        public ShowMode FPSShowMode = ShowMode.ms;
        public float UpdateInterval = 0.5F;

        private double LastInterval;
        private int Frames = 0;
        private float FPS;

        void Start()
        {
            this.LastInterval = Time.realtimeSinceStartup;
            this.Frames = 0;
        }

        private StringBuilder mTempBuilder = new StringBuilder();

        private void Update()
        {
            if (this.FPSText == null) return;

            ++this.Frames;
            float fTimeNow = Time.realtimeSinceStartup;
            if (fTimeNow > this.LastInterval + this.UpdateInterval)
            {
                this.FPS = (float)(this.Frames / (fTimeNow - this.LastInterval));
                this.Frames = 0;
                this.LastInterval = fTimeNow;

                this.mTempBuilder.Clear();
                this.mTempBuilder.Append(this.FPS.ToString("F2"));
                this.mTempBuilder.Append(", ");
                this.mTempBuilder.Append((1000.0f / this.FPS).ToString("F2"));
                this.mTempBuilder.Append("ms");

                switch (this.FPSShowMode)
                {
                    case ShowMode.FPSNumber:
                        this.FPSText.text = $"FPS:{Mathf.CeilToInt(this.FPS)}";
                        break;
                    case ShowMode.ms:
                        this.FPSText.text = this.mTempBuilder.ToString();
                        break;
                    default:
                        break;
                }
            }
        }
    }
}