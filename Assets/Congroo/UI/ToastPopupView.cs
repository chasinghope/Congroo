using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;

public class ToastPopupView : UIPopupBase
{
    protected override void OnInit()
    {
        base.OnInit();
        Toast.parent = transform;
    }
}
