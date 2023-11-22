namespace Congroo.Core.RedDot
{
    public class RedDotTreeNode
    {
        /// <summary>
        /// �������
        /// </summary>
        public RedDotType redDotType;
        /// <summary>
        /// ���ڵ�
        /// </summary>
        public RedDotDefine parentNode;
        /// <summary>
        /// ��ǰ�ڵ�
        /// </summary>
        public RedDotDefine node;
        /// <summary>
        /// �����ʾ״̬
        /// </summary>
        public bool redDotActive;
        /// <summary>
        /// ���Ҫ��ʾ�ĸ���
        /// </summary>
        public int redDotCount;

        /// <summary>
        /// ����߼�������
        /// </summary>
        public event System.Action<RedDotTreeNode> logicHandler;
        /// <summary>
        /// ���״̬�ı��¼�
        /// </summary>
        public event System.Action<RedDotType, bool, int> OnRedDotActiveChanged;

        public virtual bool RefreshRedDotState()
        {
            redDotCount = 0;
            if(redDotType == RedDotType.RedDotDataNum)
            {

            }
            else
            {
                redDotCount = RefreshRedDotCount();
            }
            logicHandler?.Invoke(this);


            if (redDotType == RedDotType.RedDotDataNum)
                redDotActive = redDotCount > 0;

            OnRedDotActiveChanged?.Invoke(redDotType, redDotActive, redDotCount);


            return redDotActive;
        }


        public virtual int RefreshRedDotCount()
        {
            return 1;
        }
    }
}