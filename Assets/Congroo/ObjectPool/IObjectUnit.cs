namespace Congroo.Core
{
    public interface IObjectUnit
    {

        /// <summary>
        /// 是否启用
        /// </summary>
        bool IsUsed { get; set; }

        /// <summary>
        /// 分配对象
        /// </summary>
        void Enable();

        /// <summary>
        /// 回收对象
        /// </summary>
        void Disable();
    }
}