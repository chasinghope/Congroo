using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;
using System.IO;
//using HybridCLR.Editor.Settings;
//public class HybirdCLRExEditor
//{
//    [MenuItem("Congroo/Move HotUpdate Dll To Build Path")]
//    public static void MoveHotDllToBuildPath()
//    {
//        Debug.Log("Start move hotUpdate");
//        string parentDirectory = Directory.GetParent(Application.dataPath).FullName;
//        string targetPath = Path.Combine(parentDirectory, $"HybridCLRData/HotUpdateDlls/{EditorUserBuildSettings.activeBuildTarget}");

//        for (int i = 0; i < HybridCLRSettings.Instance.hotUpdateAssemblyDefinitions.Length; i++)
//        {
//            string fileName = HybridCLRSettings.Instance.hotUpdateAssemblyDefinitions[i].name;
//            string targetFile = Path.Combine(Application.dataPath, $"Res/BundleRes/Codes/{fileName}.dll.bytes");

//            if(File.Exists(targetFile))
//            {
//                File.Delete(targetFile);
//            }

//            File.Copy(Path.Combine(targetPath, $"{fileName}.dll"), targetFile);

//        }
 
//        AssetDatabase.Refresh();
//    }



//}



