using Cinemachine;
using Congroo.Core;
using System.Collections;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using UnityEngine;

public class CameraShaker : SingletonMono<CameraShaker>
{
    private CinemachineVirtualCamera cinemachineVirtualCamera;
    [SerializeField] private float shakeIntensity = 1f;
    [SerializeField] private float shakeTime = 0.2f;

    private float timer;
    private CinemachineBasicMultiChannelPerlin _cbmcp;



    protected override void Awake()
    {
        base.Awake();
        cinemachineVirtualCamera = GetComponent<CinemachineVirtualCamera>();
        _cbmcp = cinemachineVirtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
    }

    private void Start()
    {
        StopShake();
    }

    public void ShakeCamera()
    {
        _cbmcp.m_AmplitudeGain = shakeIntensity;
        timer = shakeTime;
    }

    public void StopShake()
    {
        _cbmcp.m_AmplitudeGain = 0f;
        timer = 0f;
    }

    private void Update()
    {
        //if(Input.GetKeyDown(KeyCode.Space))
        //{
        //    ShakeCamera();
        //}

        if (timer > 0)
        {
            timer -= Time.deltaTime;
            if (timer <= 0)
            {
                StopShake();
            }
        }
    }




}
