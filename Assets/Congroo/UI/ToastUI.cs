using UnityEngine ;
using System.Collections ;
using UnityEngine.UI ;
using UnityEditor.Timeline;
using DG.Tweening;

/* -------------------------------
   Created by : Hamza Herbou
   hamza95herbou@gmail.com
---------------------------------- */

namespace Congroo.Core
{

   public class ToastUI : MonoBehaviour 
    {
        [Header ("UI References :")]
        [SerializeField] private CanvasGroup uiCanvasGroup ;
        [SerializeField] private RectTransform uiRectTransform ;
        [SerializeField] private VerticalLayoutGroup uiContentVerticalLayoutGroup ;
        [SerializeField] private Image uiImage ;
        [SerializeField] private Text uiText ;
        
        [Header ("Toast Colors :")]
        [SerializeField] private Color[] colors ;
        
        [Header ("Toast Fade In/Out Duration :")]
        [Range (.1f, .8f)]
        [SerializeField] private float fadeDuration = .3f ;
        
        
        private int maxTextLength = 300 ;


        private Vector3 originPos;

        private void Awake()
        {
            this.originPos = transform.localPosition;
        }


        public void Init (string text, float duration, ToastColor color, ToastPosition position) 
        {
            transform.SetParent(Toast.parent);
            transform.SetAsLastSibling();
            transform.localPosition = this.originPos;
            transform.gameObject.SetActive(true);
            uiCanvasGroup.alpha = 0f;
            Show (text, duration, colors [ (int)color ], position) ;
        }
        
        public void Init (string text, float duration, Color color, ToastPosition position) 
        {
            transform.SetParent(Toast.parent);
            transform.SetAsLastSibling();
            transform.localPosition = this.originPos;
            transform.gameObject.SetActive(true);
            uiCanvasGroup.alpha = 0f;
            Show (text, duration, color, position) ;
        }
        
        private void Show (string text, float duration, Color color, ToastPosition position) 
        {
            uiText.text = (text.Length > maxTextLength) ? text.Substring (0, maxTextLength) + "..." : text ;
            uiImage.color = color ;
            
            uiContentVerticalLayoutGroup.childAlignment = (TextAnchor)((int)position) ;


            //Dismiss();
            //StartCoroutine (FadeInOut (duration, fadeDuration)) ;
            TweenFadeInOut(duration, fadeDuration);
        }


        public void TweenFadeInOut(float toastDuration, float fadeDuration)
        {
            Sequence sequence = DOTween.Sequence();
            sequence.Append(uiCanvasGroup.DOFade(1f, fadeDuration));
            sequence.AppendInterval(toastDuration);
            sequence.Append(uiCanvasGroup.DOFade(0f, fadeDuration *2));
            sequence.Insert(fadeDuration + toastDuration, transform.DOLocalMoveY(transform.localPosition.y + 30f, fadeDuration *2));
            sequence.onComplete  = ()=> {
                transform.gameObject.SetActive(false);
                Toast.Recycle(this);
            };
        }

        
        private IEnumerator FadeInOut (float toastDuration, float fadeDuration) 
        {
            yield return null ;
            uiContentVerticalLayoutGroup.CalculateLayoutInputHorizontal () ;
            uiContentVerticalLayoutGroup.CalculateLayoutInputVertical () ;
            uiContentVerticalLayoutGroup.SetLayoutHorizontal () ;
            uiContentVerticalLayoutGroup.SetLayoutVertical () ;
            yield return null ;
            // Anim start
            yield return Fade (uiCanvasGroup, 0f, 1f, fadeDuration) ;
            yield return new WaitForSeconds (toastDuration) ;
            yield return Fade (uiCanvasGroup, 1f, 0f, fadeDuration) ;
            // Anim end

            transform.gameObject.SetActive(false);
            Toast.Recycle(this);
        }
        
        private IEnumerator Fade (CanvasGroup cGroup, float startAlpha, float endAlpha, float fadeDuration) 
        {
            float startTime = Time.time ;
            float alpha = startAlpha ;
            
            if (fadeDuration > 0f) 
            {
               //Anim start
                while (alpha != endAlpha) 
                {
                    alpha = Mathf.Lerp (startAlpha, endAlpha, (Time.time - startTime) / fadeDuration) ;
                    cGroup.alpha = alpha ;
            
                    yield return null ;
                }
            }
            
            cGroup.alpha = endAlpha ;
        }
        
        public void Dismiss () 
        {
            StopAllCoroutines () ;
            uiCanvasGroup.alpha = 0f ;
        }
   }

}
