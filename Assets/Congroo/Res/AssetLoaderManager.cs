using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public class AssetLoaderManager
    {
        public static IAssetLoader Instance;
    }


    public interface IAssetLoader
    {
        void Initialize();
        
        //AssetBundle.L
    }


    public class AssetLoaderTest
    {
        public void Test()
        {
            
        }
    }
}