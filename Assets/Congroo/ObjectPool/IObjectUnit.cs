namespace Congroo.Core
{
    public interface IObjectUnit
    {

        /// <summary>
        /// �Ƿ�����
        /// </summary>
        bool IsUsed { get; set; }

        /// <summary>
        /// �������
        /// </summary>
        void Enable();

        /// <summary>
        /// ���ն���
        /// </summary>
        void Disable();
    }
}