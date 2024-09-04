using UnityEngine;
using Cysharp.Threading.Tasks;

public enum UIStatus
{
    None,
    Creating,
    Showing,
    Hiding,
    Destroying,
}

[RequireComponent(typeof(RequireComponent))]
[DisallowMultipleComponent]
public abstract class UIBase : MonoBehaviour
{
    /// <summary>
    /// 是否自动销毁
    /// </summary>
    public bool AutoDestroy = true;
    public UIStatus Status = UIStatus.None;
    
    public UIData DataReference;
    
    protected internal UniTask InnerOnCreate() => OnCreate();
    protected internal UniTask InnerOnRefresh() => OnRefresh();
    protected internal void InnerOnBind() => OnBind();
    protected internal void InnerOnUnbind() => OnUnbind();
    protected internal void InnerOnShow() => OnShow();
    protected internal void InnerOnHide() => OnHide();
    protected internal void InnerOnDied() => OnDied();
    
    
    /// <summary>
    /// 创建时调用，生命周期内只执行一次
    /// </summary>
    protected virtual UniTask OnCreate() => UniTask.CompletedTask;

    /// <summary>
    /// 刷新时调用
    /// </summary>
    protected virtual UniTask OnRefresh() => UniTask.CompletedTask;

    /// <summary>
    /// 绑定事件
    /// </summary>
    protected virtual void OnBind() { }

    /// <summary>
    /// 解绑事件
    /// </summary>
    protected virtual void OnUnbind() { }

    /// <summary>
    /// 显示时调用
    /// </summary>
    protected virtual void OnShow() { }

    /// <summary>
    /// 隐藏时调用
    /// </summary>
    protected virtual void OnHide() { }

    /// <summary>
    /// 销毁时调用，生命周期内只执行一次
    /// </summary>
    protected virtual void OnDied() { }
}
