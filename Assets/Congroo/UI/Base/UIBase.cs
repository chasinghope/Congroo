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

    protected List<EventWrapper> mEventWrappers; 

    public void Init()
    {
        IsNeedCache = true;
        this.gameObject.SetActive(false);

        mEventWrappers = EventCenter.GetTypeEvents(this);
    }

    public void Open()
    {
        if (UIStatus == UIStatus.Open)
            return;
        UIStatus = UIStatus.Open;


        this.OnOpen();
        this.gameObject.SetActive(true);
        EventCenter.Instance.BindEventWrappers(mEventWrappers);
    }

    public void Close()
    {
        if (UIStatus == UIStatus.Close)
            return;
        UIStatus = UIStatus.Close;

        this.OnClose();
        this.gameObject.SetActive(false);
        EventCenter.Instance.UnbindEventWrappers(mEventWrappers);
    }

    protected virtual void OnOpen()
    {

    }

    protected virtual void OnClose()
    {

    }
}