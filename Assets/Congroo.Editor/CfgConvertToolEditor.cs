using System.Diagnostics;
using System.IO;
using UnityEditor;
using UnityEngine;


namespace Congroo.Core.Editor
{
    public class CfgConvertToolEditor
    {
        [MenuItem("CfgTool/Convert-Json", priority = 1)]
        private static void CfgToJson()
        {
            ExcuteConvert(EConvertPattern.Json);
        }

        [MenuItem("CfgTool/Convert-Bytes", priority = 2)]
        private static void CfgToBytes()
        {
            ExcuteConvert(EConvertPattern.Bytes);
        }

        [MenuItem("CfgTool/OpenFolder", priority = 3)]
        private static void OpenConfigFloder()
        {
            string projectRootFolder = new DirectoryInfo(Application.dataPath).Parent.FullName;
            string path = Path.Combine(projectRootFolder, "LuBan/cfgs", "Datas");
            Application.OpenURL(path);
        }

        private enum EConvertPattern
        {
            Json,
            Bytes
        }

        private static void ExcuteConvert(EConvertPattern pattern)
        {
            string dirInfo = Path.Combine(Directory.GetParent(Application.dataPath).FullName, "LuBan");
            string processSuffix;
#if UNITY_EDITOR_WIN
            processSuffix = ".bat";
#else
            processSuffix = ".sh";
#endif
            string scriptName = string.Empty;
            switch (pattern)
            {
                case EConvertPattern.Json:
                    scriptName = "gen_code_json";
                    break;

                case EConvertPattern.Bytes:
                    scriptName = "gen_code_bin";
                    break;
            }
            lock (syncState)
            {
                canExcute = false;
                EditorApplication.update += OnEditorUpdate;
            }
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.FileName = scriptName + processSuffix;
            startInfo.WorkingDirectory = dirInfo;
            var process = Process.Start(startInfo);
            process.EnableRaisingEvents = true;
            process.Exited += Process_Exited;
        }

        private static void OnEditorUpdate()
        {
            lock (syncState)
            {
                if (canExcute)
                {
                    canExcute = false;
                    AssetDatabase.Refresh();
                    EditorApplication.update -= OnEditorUpdate;
                }
            }
        }

        private static bool canExcute = false;
        private static object syncState = new object();

        private static void Process_Exited(object sender, System.EventArgs e)
        {
            lock (syncState)
            {
                canExcute = true;
            }
        }
    }
}
