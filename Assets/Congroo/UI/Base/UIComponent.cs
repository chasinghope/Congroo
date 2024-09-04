using System;


public class UIData
{
    public Type Sender { get; set; }
}

public abstract class UIComponent<T> : UIBase where T : UIData
{
    public T Data => DataReference as T;
}