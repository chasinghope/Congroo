using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[RequireComponent(typeof(Button))]
public class UISound : MonoBehaviour
{
    public SEType SoundEffectType = SEType.Button;
    private Button mButton;
    public void Awake()
    {
        this.mButton = this.GetComponent<Button>();
        this.mButton.onClick.AddListener(this.UIButton_OnClick);
    }



    public void OnDestroy()
    {
        this.mButton.onClick.RemoveListener(this.UIButton_OnClick);
    }

    private void UIButton_OnClick()
    {
        AudioManager.Instance.PlaySoundEffect(this.SoundEffectType);
    }
}
