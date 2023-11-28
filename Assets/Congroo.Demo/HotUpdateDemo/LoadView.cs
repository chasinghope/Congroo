using UnityEngine;
using UnityEngine.UI;
using Congroo.Core;
using Cysharp.Threading.Tasks;

public class LoadView : MonoBehaviour
{
    [SerializeField] HotUpdateManager hotUpdateManager;
    [SerializeField] Slider slider;
    [SerializeField] GameObject loadPanel;
    [SerializeField] Button btn_download;
    [SerializeField] Button btn_enterGame;
    [SerializeField] Text tx_sizeInfo;

    private void Awake()
    {
        btn_download.onClick.AddListener(BtnDownload_OnClick);
        btn_enterGame.onClick.AddListener(Btn_EnterGame_OnClick);

        slider.gameObject.SetActive(false);
        tx_sizeInfo.gameObject.SetActive(false);
        btn_download.gameObject.SetActive(false);
        btn_enterGame.gameObject.SetActive(false);
    }


    private void OnEnable()
    {
        hotUpdateManager.EDownloadProgress += EDownloadProgress;
        hotUpdateManager.OnHotUpdateFinished += OnHotUpdateFinished;
        hotUpdateManager.ENeedDownHotUpdateAssets += OnENeedDownHotUpdateAssets;
    }


    private void OnDisable()
    {
        if(hotUpdateManager != null)
        {
            hotUpdateManager.EDownloadProgress -= EDownloadProgress;
            hotUpdateManager.OnHotUpdateFinished -= OnHotUpdateFinished;
            hotUpdateManager.ENeedDownHotUpdateAssets -= OnENeedDownHotUpdateAssets;
        }
    }

    private void OnHotUpdateFinished()
    {
        btn_enterGame.gameObject.SetActive(true);
        btn_download.gameObject.SetActive(false);

    }

    private void EDownloadProgress(float value, long size)
    {
        slider.normalizedValue = value;
        tx_sizeInfo.text = $"{value * (float)size} / {size} B";

    }


    private void OnENeedDownHotUpdateAssets()
    {
        slider.gameObject.SetActive(true);
        tx_sizeInfo.gameObject.SetActive(true);
        btn_download.gameObject.SetActive(true);
    }


    private void Btn_EnterGame_OnClick()
    {
        loadPanel.SetActive(false);
        //StartCoroutine(StartGame());
        _ = StartGame();
    }

    private void BtnDownload_OnClick()
    {
        btn_download.gameObject.SetActive(false);
        hotUpdateManager.DownloadAsset();
    }


    private async UniTask StartGame()
    {
        CLog.L(LType.HotUpdate, $"StartGame");
        await UniTask.Yield();
        GameObject go = await ResMgr.Instance.LoadAssetAsync<GameObject>("Prefabs/Bee_01.prefab");
        Instantiate(go);
    }
}