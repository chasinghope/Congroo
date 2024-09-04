using System;

public enum EUILayer
{
    Panel,
    Popup,
}

[AttributeUsage(AttributeTargets.Class)]
public class UILayerAttribute : Attribute
{
    public EUILayer Layer;

    public UILayerAttribute(EUILayer rLayer)
    {
        Layer = rLayer;
    }
}