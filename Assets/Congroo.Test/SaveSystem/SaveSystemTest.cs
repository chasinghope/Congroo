using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Congroo.Core;

public class SaveSystemTest : MonoBehaviour
{
    private async void Start()
    {
        await GameSaveSystem.Ins.Load();
        GameSaveSystem.Ins.SetUserName();
        GameSaveSystem.Ins.SetUserSlotId();
        GameSaveSystem.Ins.UserSlotData.PlayerGlobalData.PlayerName = "Andy";
        await GameSaveSystem.Ins.Save();
        GameSaveSystem.Ins.Debug();
    }
}
