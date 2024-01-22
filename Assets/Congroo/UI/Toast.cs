using UnityEngine ;
using UnityEngine.AddressableAssets;
using System.Collections.Generic;
using UnityEngine.WSA;

/* -------------------------------
   Created by : Hamza Herbou
   hamza95herbou@gmail.com
---------------------------------- */

namespace Congroo.Core
{

    public enum ToastColor 
    {
        Black,
        Red,
        Purple,
        Magenta,
        Blue,
        Green,
        Yellow,
        Orange
    }
    
    public enum ToastPosition 
    {
        TopLeft,
        TopCenter,
        TopRight,
        MiddleLeft,
        MiddleCenter,
        MiddleRight,
        BottomLeft,
        BottomCenter,
        BottomRight
    }

    /// <summary>
    /// 池化Toast
    /// </summary>
    public static class Toast 
    {
        public static bool isLoaded = false;
        private static GameObject toastUIPrefab;
        private static Stack<ToastUI> pool;
        public static Transform parent;
        private static void Prepare() 
        {
            if (!isLoaded) 
            {
                var op = Addressables.LoadAssetAsync<GameObject>("Prefabs/UI/ToastUI.prefab");
                op.WaitForCompletion();
                toastUIPrefab = op.Result as GameObject;
                pool = new Stack<ToastUI>();
                isLoaded = true ;
            }
        }

        public static ToastUI Get()
        {
            if (pool.Count > 0)
            {
                return pool.Pop();
            }
            else
            {
                GameObject instance = GameObject.Instantiate(toastUIPrefab);
                instance.name = "[ TOAST UI ]";
                instance.SetActive(false);
                var toastUI = instance.GetComponent<ToastUI>();
                return toastUI;
            }
        }

        public static void Recycle(ToastUI toastUI)
        {
            pool.Push(toastUI);
        }


        public static void ShowWaitBuid()
        {
            Toast.Show("功能未开发", 1f);
        }

        public static void Show (string text) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, 2F, ToastColor.Black, ToastPosition.BottomCenter);
        }


        public static void Show (string text, float duration) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, ToastColor.Black, ToastPosition.BottomCenter) ;
        }

        public static void Show (string text, float duration, ToastPosition position) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, ToastColor.Black, position) ;
        }

        public static void Show (string text, ToastColor color) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, 2F, color, ToastPosition.BottomCenter) ;
        }

        public static void Show (string text, ToastColor color, ToastPosition position) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, 2F, color, position) ;
        }

        public static void Show (string text, Color color) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, 2F, color, ToastPosition.BottomCenter) ;
        }

        public static void Show (string text, Color color, ToastPosition position) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, 2F, color, position) ;
        }

        public static void Show (string text, float duration, ToastColor color) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, color, ToastPosition.BottomCenter) ;
        }

        public static void Show (string text, float duration, ToastColor color, ToastPosition position) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, color, position) ;
        }

        public static void Show (string text, float duration, Color color) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, color, ToastPosition.BottomCenter) ;
        }

        public static void Show (string text, float duration, Color color, ToastPosition position) 
        {
            Prepare();
            var toastUI = Get();
            toastUI.Init (text, duration, color, position) ;
        }

        //public static void Dismiss () {
        //             toastUI.Dismiss () ; 
        //          }

    }

}
