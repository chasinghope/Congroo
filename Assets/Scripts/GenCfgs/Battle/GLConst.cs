//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;


namespace cfg.Battle
{
public sealed partial class GLConst :  Bright.Config.BeanBase 
{
    public GLConst(ByteBuf _buf) 
    {
        MaxPlayerCount = _buf.ReadInt();
        SheepNormalSpeed = _buf.ReadFloat();
        SheepUpSpeed = _buf.ReadFloat();
        SheepFlySpeed = _buf.ReadFloat();
        WhiteCloudSpeed = _buf.ReadFloat();
        RainCloudSpeed = _buf.ReadFloat();
        ThunderCloudSpeed = _buf.ReadFloat();
        FlashIntervalTime = _buf.ReadFloat();
        SuperGift1Count = _buf.ReadInt();
        SuperGift2Count = _buf.ReadInt();
        SuperGift3Count = _buf.ReadInt();
        SuperGift4Count = _buf.ReadInt();
        SuperGift5Count = _buf.ReadInt();
        SuperGift6Count = _buf.ReadInt();
        PerMaxLittleSheepCount = _buf.ReadInt();
        VertigoBossTime = _buf.ReadFloat();
        VertigoSheepTime = _buf.ReadFloat();
        PostInit();
    }

    public static GLConst DeserializeGLConst(ByteBuf _buf)
    {
        return new Battle.GLConst(_buf);
    }

    /// <summary>
    /// 最大玩家数量
    /// </summary>
    public int MaxPlayerCount { get; private set; }
    /// <summary>
    /// 未点赞羊群速度
    /// </summary>
    public float SheepNormalSpeed { get; private set; }
    /// <summary>
    /// 点赞羊群速度
    /// </summary>
    public float SheepUpSpeed { get; private set; }
    /// <summary>
    /// 飞天羊群
    /// </summary>
    public float SheepFlySpeed { get; private set; }
    /// <summary>
    /// 白云速度
    /// </summary>
    public float WhiteCloudSpeed { get; private set; }
    /// <summary>
    /// 雨云速度
    /// </summary>
    public float RainCloudSpeed { get; private set; }
    /// <summary>
    /// 雷雨云速度
    /// </summary>
    public float ThunderCloudSpeed { get; private set; }
    /// <summary>
    /// 打雷间隔时间
    /// </summary>
    public float FlashIntervalTime { get; private set; }
    /// <summary>
    /// 大礼物1数量
    /// </summary>
    public int SuperGift1Count { get; private set; }
    /// <summary>
    /// 大礼物2数量
    /// </summary>
    public int SuperGift2Count { get; private set; }
    /// <summary>
    /// 大礼物3数量
    /// </summary>
    public int SuperGift3Count { get; private set; }
    /// <summary>
    /// 大礼物4数量
    /// </summary>
    public int SuperGift4Count { get; private set; }
    /// <summary>
    /// 大礼物5数量
    /// </summary>
    public int SuperGift5Count { get; private set; }
    /// <summary>
    /// 大礼物6数量
    /// </summary>
    public int SuperGift6Count { get; private set; }
    /// <summary>
    /// 单位最大小羊个数
    /// </summary>
    public int PerMaxLittleSheepCount { get; private set; }
    /// <summary>
    /// 眩晕boss时间/秒
    /// </summary>
    public float VertigoBossTime { get; private set; }
    /// <summary>
    /// 眩晕羊时间/秒
    /// </summary>
    public float VertigoSheepTime { get; private set; }

    public const int __ID__ = -120325528;
    public override int GetTypeId() => __ID__;

    public  void Resolve(Dictionary<string, object> _tables)
    {
        PostResolve();
    }

    public  void TranslateText(System.Func<string, string, string> translator)
    {
    }

    public override string ToString()
    {
        return "{ "
        + "MaxPlayerCount:" + MaxPlayerCount + ","
        + "SheepNormalSpeed:" + SheepNormalSpeed + ","
        + "SheepUpSpeed:" + SheepUpSpeed + ","
        + "SheepFlySpeed:" + SheepFlySpeed + ","
        + "WhiteCloudSpeed:" + WhiteCloudSpeed + ","
        + "RainCloudSpeed:" + RainCloudSpeed + ","
        + "ThunderCloudSpeed:" + ThunderCloudSpeed + ","
        + "FlashIntervalTime:" + FlashIntervalTime + ","
        + "SuperGift1Count:" + SuperGift1Count + ","
        + "SuperGift2Count:" + SuperGift2Count + ","
        + "SuperGift3Count:" + SuperGift3Count + ","
        + "SuperGift4Count:" + SuperGift4Count + ","
        + "SuperGift5Count:" + SuperGift5Count + ","
        + "SuperGift6Count:" + SuperGift6Count + ","
        + "PerMaxLittleSheepCount:" + PerMaxLittleSheepCount + ","
        + "VertigoBossTime:" + VertigoBossTime + ","
        + "VertigoSheepTime:" + VertigoSheepTime + ","
        + "}";
    }
    
    partial void PostInit();
    partial void PostResolve();
}

}