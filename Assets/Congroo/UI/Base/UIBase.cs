using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
using NaughtyAttributes;

public enum UIStatus
{
    Open,
    Close,
}


public abstract class UIBase : MonoBehaviour
{
    public virtual bool IsNeedCache { get; protected set; } = false;
    public virtual UIType UType { get; protected set; }

    [ReadOnly] public string UName;

    [ReadOnly] public UIStatus UIStatus = UIStatus.Close;

    public virtual void OnPreLoad()
    {
        IsNeedCache = true;
        this.gameObject.SetActive(false);
    }

    public virtual void Open()
    {
        if (UIStatus == UIStatus.Open)
            return;
        UIStatus = UIStatus.Open;


        this.OnOpen();
        this.gameObject.SetActive(true);
    }

    public virtual void Close()
    {
        if (UIStatus == UIStatus.Close)
            return;
        UIStatus = UIStatus.Close;

        this.OnClose();
        this.gameObject.SetActive(false);
    }

    public virtual void OnRelease()
    {

    }


    protected virtual void OnOpen()
    {

    }

    protected virtual void OnClose()
    {

    }
}