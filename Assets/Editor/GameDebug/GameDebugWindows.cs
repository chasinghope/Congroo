using Congroo.UITest;
using Cysharp.Threading.Tasks.Triggers;
using Sirenix.OdinInspector;
using UnityEditor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using Sirenix.OdinInspector.Editor;


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
    
    [Button]
    private void OpenMainUI()
    {
        UIManager.Ins.Open<UIMain>();
    }
}



