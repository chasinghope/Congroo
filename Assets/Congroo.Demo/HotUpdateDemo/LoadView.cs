using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

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
        HotUpdateManager.Instance.EDownloadProgress += EDownloadProgress;
        HotUpdateManager.Instance.OnHotUpdateFinished += OnHotUpdateFinished;
        HotUpdateManager.Instance.ENeedDownHotUpdateAssets += OnENeedDownHotUpdateAssets;
    }


    private void OnDisable()
    {
        if(HotUpdateManager.Instance != null)
        {

            HotUpdateManager.Instance.EDownloadProgress -= EDownloadProgress;
            HotUpdateManager.Instance.OnHotUpdateFinished -= OnHotUpdateFinished;
            HotUpdateManager.Instance.ENeedDownHotUpdateAssets -= OnENeedDownHotUpdateAssets;
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

    }

    private void BtnDownload_OnClick()
    {
        btn_download.gameObject.SetActive(false);
        hotUpdateManager.DownloadAsset();
    }


    private IEnumerator StartGame()
    {
        yield return null;
        yield return null;
        yield return null;
        yield return null;
        yield return null;

    }
}