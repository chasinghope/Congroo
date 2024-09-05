using Congroo.Core;
using UnityEngine;


public class GameManager : MonoBehaviour
{
    private void Start()
    {
        CfgTable.Ins.Initialize();
        Debug.Log(CfgTable.Ins.Tables.TBGLConst.DataList[0].SheepUpSpeed);
    }
}