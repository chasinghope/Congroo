using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Congroo.Core;
using System.IO;

public class EditorTestWindow : EditorWindow
{
    [MenuItem("Congroo/TestWindows")]
    private static void  OpenWindow()
    {
        EditorTestWindow myWindow = EditorWindow.GetWindow<EditorTestWindow>(false, "CongrooTestWindow", true);
        myWindow.Show();
    }

    public void OnGUI()
    {
        if (GUILayout.Button("≤‚ ‘Log"))
        {
            //CLog.L(LType.CongrooEditor, "≤‚ ‘1");
            //CLog.L(LType.Temp, "≤‚ ‘4");
            //CLog.L(LType.Normal, "≤‚ ‘2");
            //CLog.L(LType.Congroo, "≤‚ ‘3");
            //CLog.L(LType.CongrooEditor, "≤‚ ‘4");
            //CLog.L(LType.Temp, "≤‚ ‘4");
        }
    }


    [MenuItem("Congroo/¥Úø™≈‰÷√ƒø¬º")]
    private static void OpenDataTableForlder()
    {
        string projectRootFolder = new DirectoryInfo(Application.dataPath).Parent.FullName;
        string path = Path.Combine(projectRootFolder, "LuBan/cfgs", "Datas");
        Application.OpenURL(path);
    }

}
