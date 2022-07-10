using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using Congroo.Core;

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
            LogManager.Log(LogCustomEnum.CongrooEditor, "≤‚ ‘1");
            LogManager.Log(LogCustomEnum.Normal, "≤‚ ‘2");
            LogManager.Log(LogCustomEnum.Congroo, "≤‚ ‘3");
            LogManager.Log(LogCustomEnum.CongrooEditor, "≤‚ ‘4");
        }
    }
}
