using Newtonsoft.Json;

namespace Congroo.Core
{

    public enum EWebNetCode
    {
        /// <summary>
        /// ����Sockt�ɹ�S->C
        /// </summary>
        S_C_ConnectSucc = 20001,

        /// <summary>
        /// ��¼����C->S
        /// </summary>
        C_S_Login = 2,

        /// <summary>
        /// ��¼�ɹ�S->C
        /// </summary>
        S_C_Login = 20002,

        /// <summary>
        /// ����C->S
        /// </summary>
        C_S_HeartBeat = 1,

        /// <summary>
        /// ����S->C
        /// </summary>
        S_C_HeartBeat = 200,
    }

    public abstract class AbsJsonToString
    {
        public override string ToString()
        {
            return JsonConvert.SerializeObject(this);
        }
    }

    /// <summary>
    /// ������Ϣ���ݰ������
    /// </summary>

    public sealed class WebSocketBody : AbsJsonToString
    {
        public int err_code;
        public string err_msg;
        public string data;
    }

    /// <summary>
    /// �ͻ�������������
    /// </summary>
    public abstract class AbsWebBodyC_S : AbsJsonToString
    {
    }

    /// <summary>
    /// �������ذ�����
    /// </summary>
    public abstract class AbsWebBodyS_C : AbsJsonToString
    {
    }


    /// <summary>
    /// ������
    /// </summary>
    public class C_S_HeartBeat : AbsWebBodyC_S
    {
    }

}