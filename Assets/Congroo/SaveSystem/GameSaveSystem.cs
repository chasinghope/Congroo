using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System;
using System.IO;
using System.Threading.Tasks;

namespace Congroo.Core
{

    #region Base

    public class GameSaveSystem : Singleton<GameSaveSystem>
    {
        private string mUserName;
        private int mUserSlot;
        private GameSaveData mGameSaveData;

        private string mSaveFilePath => Path.Combine(Application.persistentDataPath, $"{mGameSaveData.GameName}{mGameSaveData.GameVersion}.json");


        public UserData UserData => this.mGameSaveData.UserDataDict[this.mUserName];

        public UserSlotData UserSlotData => this.UserData.UserSlotDataDict[this.mUserSlot];

        private GameSaveSystem()
        {

        }

        /// <summary>
        /// 设置玩家用户名
        /// </summary>
        /// <param name="rUserName"></param>
        public void SetUserName(string rUserName = "Default_UserName")
        {
            mUserName = rUserName;
            // 新用户—— 为新用户创建存档
            mGameSaveData.AddNewUser(rUserName);
        }


        public void SetUserSlotId(int nSlotId = 0)
        {
            this.mUserSlot = nSlotId;
        }

        

        public async Task Save()
        {
            await WriteToDisk();
        }

        public async Task Load()
        {
            await ReadArchivesFromDisk();
        }

        private void CreateNewGameData()
        {
            mGameSaveData = new GameSaveData();
        }


        private async Task ReadArchivesFromDisk()
        {
            this.CreateNewGameData();
            if (File.Exists(mSaveFilePath))
            {
                Task<string> gameSaveDataTask = File.ReadAllTextAsync(mSaveFilePath);
                await gameSaveDataTask;
                mGameSaveData = JsonConvert.DeserializeObject<GameSaveData>(gameSaveDataTask.Result);
            }
        }


        private async Task WriteToDisk()
        {
            string gameSaveData = JsonConvert.SerializeObject(mGameSaveData);
            if (File.Exists(mSaveFilePath))
            {
                File.Delete(mSaveFilePath);
            }
            await File.WriteAllTextAsync(mSaveFilePath, gameSaveData);
        }


        public void Debug()
        {
            CLog.L(LType.Congroo, mSaveFilePath);
            CLog.L(LType.Congroo, JsonConvert.SerializeObject(mGameSaveData));
        }

    }



    public class GameSaveData
    {
        /// <summary>
        /// 游戏名字
        /// </summary>
        public string GameName;
        /// <summary>
        /// 游戏版本
        /// </summary>
        public string GameVersion;
        /// <summary>
        /// 玩家集合数据
        /// </summary>
        public Dictionary<string, UserData> UserDataDict;

        public GameSaveData()
        {
            this.GameName = "消失的世界";
            this.GameVersion = "V0-0";
            this.UserDataDict = new Dictionary<string, UserData>();
            UserData userData = new UserData();
            this.UserDataDict.Add(userData.UserName, userData);
        }

        public GameSaveData(GameSaveData rOther)
        {
            this.GameName = rOther.GameName;
            this.GameVersion = rOther.GameVersion;
            this.UserDataDict = new Dictionary<string, UserData>();
            foreach (var item in rOther.UserDataDict)
            {
                this.UserDataDict.Add(item.Key, item.Value);
            }
        }

        public bool AddNewUser(string rUserName)
        {
            if (!UserDataDict.ContainsKey(rUserName))
            {
                UserData userData = new UserData();
                userData.UserName = rUserName;
                UserDataDict.Add(userData.UserName, userData);
                return true;
            }
            return false;
        }

        public bool RemoveOldUser(string rUserName)
        {
            if (UserDataDict.ContainsKey(rUserName))
            {
                UserDataDict.Remove(rUserName);
                return true;
            }
            return false;
        }
    }



    public class UserData
    {
        public string UserName;
        public UserSettingData UserSettingData;
        public Dictionary<int, UserSlotData> UserSlotDataDict;

        public UserData()
        {
            this.UserName = "Default_UserName";
            this.UserSettingData = new UserSettingData();
            this.UserSlotDataDict = new Dictionary<int, UserSlotData>();
            UserSlotData userSlotData = new UserSlotData();
            this.UserSlotDataDict.Add(userSlotData.SlotID, userSlotData);
        }

        public UserData(UserData rOther)
        {
            this.UserName = rOther.UserName;
            this.UserSettingData = new UserSettingData(rOther.UserSettingData);
            this.UserSlotDataDict = new Dictionary<int, UserSlotData>();

            foreach (var item in rOther.UserSlotDataDict)
            {
                this.UserSlotDataDict.Add(item.Key, item.Value);
            }
        }
    }


    public class UserSlotData
    {
        public int SlotID;

        public PlayerGlobalData PlayerGlobalData;
        public Dictionary<int, LevelData> LevelDataDict;

        public UserSlotData()
        {
            this.SlotID = 0;
            this.PlayerGlobalData = new PlayerGlobalData();
            this.LevelDataDict = new Dictionary<int, LevelData>();
        }

        public UserSlotData(UserSlotData rOther)
        {
            this.SlotID = rOther.SlotID;
            this.PlayerGlobalData = new PlayerGlobalData(rOther.PlayerGlobalData);
            this.LevelDataDict = new Dictionary<int, LevelData>();
            foreach (var item in rOther.LevelDataDict)
            {
                this.LevelDataDict.Add(item.Key, item.Value);
            }
        }
    }


    #endregion



    public class UserSettingData
    {
        public int Setting1;

        public UserSettingData()
        {
            this.Setting1 = 0;
        }

        public UserSettingData(UserSettingData rOther)
        {
            this.Setting1 = rOther.Setting1;
        }
    }

    public class PlayerGlobalData
    {
        public string PlayerName;


        public PlayerGlobalData()
        {
            this.PlayerName = "DefaultPlayer";
        }

        public PlayerGlobalData(PlayerGlobalData rOther)
        {
            this.PlayerName = rOther.PlayerName;
        }


    }

    public class LevelData
    {
        public int LevelID;
        public string LevelName;

        public LevelData()
        {
            this.LevelID = 1;
            this.LevelName = "第1关";
        }

        public LevelData(LevelData rOther)
        {
            this.LevelID = rOther.LevelID;
            this.LevelName = rOther.LevelName;
        }
    }

}