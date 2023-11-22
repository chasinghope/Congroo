namespace Congroo.Core.RedDot
{
    public class RedDotTreeNode
    {
        /// <summary>
        /// 红点类型
        /// </summary>
        public RedDotType redDotType;
        /// <summary>
        /// 父节点
        /// </summary>
        public RedDotDefine parentNode;
        /// <summary>
        /// 当前节点
        /// </summary>
        public RedDotDefine node;
        /// <summary>
        /// 红点显示状态
        /// </summary>
        public bool redDotActive;
        /// <summary>
        /// 红点要显示的个数
        /// </summary>
        public int redDotCount;

        /// <summary>
        /// 红点逻辑处理器
        /// </summary>
        public event System.Action<RedDotTreeNode> logicHandler;
        /// <summary>
        /// 红点状态改变事件
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