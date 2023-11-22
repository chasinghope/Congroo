using System.Collections.Generic;

namespace Congroo.Core.RedDot
{
    public enum RedDotType
    {
        /// <summary>
        /// ֻ��ʾ���
        /// </summary>
        Normal,

        /// <summary>
        /// �ڵ����ֺ�㣬 �ӽڵ��м���������ʾ��������
        /// </summary>
        RedDotNodeNum,

        /// <summary>
        /// ������ݸ����� �������ݵĸ�����ʾ���
        /// </summary>
        RedDotDataNum,
    }


    /// <summary>
    /// ǰ׺��ʵ��
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