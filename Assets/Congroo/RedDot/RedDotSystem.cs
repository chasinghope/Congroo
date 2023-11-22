using System.Collections.Generic;

namespace Congroo.Core.RedDot
{
    public enum RedDotType
    {
        /// <summary>
        /// 只显示红点
        /// </summary>
        Normal,

        /// <summary>
        /// 节点数字红点， 子节点有几个红点就显示几个数字
        /// </summary>
        RedDotNodeNum,

        /// <summary>
        /// 红点数据个数， 根据数据的个数显示红点
        /// </summary>
        RedDotDataNum,
    }


    /// <summary>
    /// 前缀树实现
    /// </summary>
    public class RedDotSystem : Singleton<RedDotSystem>
    {
        RedDotSystem() { }

        Dictionary<RedDotDefine, RedDotTreeNode> mRedDotLogicDict = new Dictionary<RedDotDefine, RedDotTreeNode>();

        public void InitlizationRedDotTree(List<RedDotTreeNode> nodeList)
        {
            foreach (RedDotTreeNode node in nodeList)
            {
                //mRedDotLogicDict.Add()
            }
        }
    }
}