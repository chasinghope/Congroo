using Congroo.Core;
using UnityEngine;


public class GameManager : MonoBehaviour
{
    private void Start()
    {
        CfgTable.Instance.Initialize();
        Debug.Log(CfgTable.Instance.Tables.TBGLConst.DataList[0].SheepUpSpeed);
    }
}