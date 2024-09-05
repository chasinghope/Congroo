using Congroo.UITest;
using Cysharp.Threading.Tasks.Triggers;
using Sirenix.OdinInspector;
using UnityEditor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using Sirenix.OdinInspector.Editor;
using UnityEngine;


public class GameDebugWindows : OdinEditorWindow
{
    private static GameDebugWindows window;

    [MenuItem("Congroo/调试窗口")]
    public static void ShowWindow()
    {
        window = GetWindow<GameDebugWindows>();
        window.name = "调试窗口";
        window.position = GUIHelper.GetEditorWindowRect().AlignCenter(700, 700);
    }
    
    [TabGroup("UITest")]
    public UITestEditor uiTestEditor = new UITestEditor();
    
}

[System.Serializable, HideLabel]
public class UITestEditor
{
    [Button]
    private void UIInit()
    {
        UIManager.Ins.Initialize();
    }
    
    [HorizontalGroup("H1"),Button]
    private void UIMain()
    {
        UIManager.Ins.Open<UIMain>();
    }
    
    [HorizontalGroup("H1"),Button]
    private void UIEquip()
    {
        UIManager.Ins.Open<UIEquip>();
    }
    
        
    [HorizontalGroup("H1"),Button]
    private void UISetting()
    {
        UIManager.Ins.Open<UISetting>();
    }

    [HorizontalGroup("H1"),Button]
    private void UITip()
    {
        UIManager.Ins.Open<UITip>();
    }
    
    
    [HorizontalGroup("H2"),Button]
    private void UISettingClose()
    {
        UIManager.Ins.Hide<UISetting>();
    }

    [HorizontalGroup("H2"),Button]
    private void UITipClose()
    {
        UIManager.Ins.Hide<UITip>();
    }

    [HorizontalGroup("H3"),Button]
    private void Back()
    {
        UIManager.Ins.Back();
    }


    [HorizontalGroup("H4"), Button]
    private void RefreshMainUI()
    {
        UIManager.Ins.Refresh<UIMain>(new UIMainData() { TipContent = "Unity UIMain Text, bobjiang1045@163.com" });
    }

    [HorizontalGroup("H4"), Button]
    private void IsOpenUIMain()
    {
        Debug.Log(UIManager.Ins.IsOpened("UIMain"));
    }
    
    [HorizontalGroup("H4"), Button]
    private void IsOpenUISetting()
    {
        Debug.Log(UIManager.Ins.IsOpened("UISetting"));
    }
    
    [HorizontalGroup("H5"), Button]
    private void PrintNameOf()
    {
        Debug.Log(nameof(Congroo.UITest.UIMain));
        Debug.Log(nameof(Congroo.UITest.UISetting));
    }
}



