using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;
using UnityEditor;
namespace Congroo.Core.Editor
{
    public class CLogEditor : EditorWindow
    {
        [MenuItem("Congroo/Log¹ýÂË", false, 0)]
        private static void ShowWindow()
        {
            var window = EditorWindow.GetWindow<CLogEditor>("Log¹ýÂË");
            window.Show();
        }

        private List<CLogGUI> cLogGUIs = new List<CLogGUI>();

        public void OnEnable()
        {
            foreach (var item in CLog.LogCusomtConfigDict)
            {
                cLogGUIs.Add(new CLogGUI(item.Value));
            }
        }

        private void OnGUI()
        {
            EditorGUILayout.BeginVertical();
            foreach (var item in cLogGUIs)
            {
                item.DrawGUI();
            }

            EditorGUILayout.EndVertical();
        }

    }

    public class CLogGUI
    {
        LogCustomData logCustomData;
        public CLogGUI(LogCustomData logCustomData)
        {
            this.logCustomData = logCustomData;
        }

        public void DrawGUI()
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUIUtility.labelWidth = 16;
            EditorGUILayout.LabelField(logCustomData.Tag, GUILayout.Width(100), GUILayout.Height(30));
            logCustomData.Color = EditorGUILayout.ColorField(logCustomData.Color, GUILayout.Width(50), GUILayout.Height(30));
            logCustomData.IsFilter = EditorGUILayout.Toggle(logCustomData.IsFilter, GUILayout.Width(15), GUILayout.Height(15));
            EditorGUILayout.EndHorizontal();
        }

    }


}
