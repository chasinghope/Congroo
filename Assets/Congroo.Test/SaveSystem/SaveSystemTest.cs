using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;

public class SaveSystemTest : MonoBehaviour
{
    private async void Start()
    {
        await GameSaveSystem.Instance.Load();
        GameSaveSystem.Instance.SetUserName();
        GameSaveSystem.Instance.SetUserSlotId();
        GameSaveSystem.Instance.UserSlotData.PlayerGlobalData.PlayerName = "Andy";
        await GameSaveSystem.Instance.Save();
        GameSaveSystem.Instance.Debug();
    }
}
