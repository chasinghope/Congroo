using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

namespace Congroo.UITest
{
    public class UITipData : UIData
    {
        
    }
    
    [UILayer(EUILayer.Panel)]
    public class UITip : UIComponent<UITipData>
    {
        [SerializeField] private Button mOkButton;
        [SerializeField] private Button mCancelButton;
        
        protected override UniTask OnCreate()
        {
            return UniTask.CompletedTask;
        }

        protected override UniTask OnRefresh()
        {
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
    }
}