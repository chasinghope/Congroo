using Congroo.Core;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


namespace Congroo.UITest
{
    public class UIMainData : UIData
    {
        public string TipContent;
    }
    
    [UILayer(EUILayer.Panel)]
    public class UIMain : UIComponent<UIMainData>
    {
        [SerializeField] private Button mOkButton;
        [SerializeField] private Button mCancelButton;
        [SerializeField] private TextMeshProUGUI mTipText;
        protected override UniTask OnCreate()
        {
            return UniTask.CompletedTask;
        }

        protected override UniTask OnRefresh()
        {
            if (Data != null)
            {
                mTipText.text = Data.TipContent;
            }
            return UniTask.CompletedTask;
        }

        protected override void OnBind()
        {
            mOkButton.onClick.AddListener(OkButton_OnClick);
            mCancelButton.onClick.AddListener(CancelButton_OnClick);
        }




        protected override void OnUnbind()
        {
            mOkButton.onClick.RemoveListener(OkButton_OnClick);
            mCancelButton.onClick.RemoveListener(CancelButton_OnClick);
        }

        protected override void OnShow()
        {
        }

        protected override void OnHide()
        {
        }

        protected override void OnDied()
        {
        }
        
        private void OkButton_OnClick()
        {
            Debug.Log("Ok button clicked");
        }
        
        private void CancelButton_OnClick()
        {
            Debug.Log("Cancel button clicked");
        }


        [Event(TestEvents.TestEvent001)]
        private void TestEvent_OnHandler(EventArg rEventArg)
        {
            Debug.Log("TestEvent_OnHandler: " + rEventArg.Get<int>(0)  + rEventArg.Get<string>(1)
            + rEventArg.Get<Dog>(2).IsMale);
        }
    }
}