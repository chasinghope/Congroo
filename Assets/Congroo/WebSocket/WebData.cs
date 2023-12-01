using Newtonsoft.Json;

namespace Congroo.Core
{

    public enum EWebNetCode
    {
        /// <summary>
        /// 连接Sockt成功S->C
        /// </summary>
        S_C_ConnectSucc = 20001,

        /// <summary>
        /// 登录请求C->S
        /// </summary>
        C_S_Login = 2,

        /// <summary>
        /// 登录成功S->C
        /// </summary>
        S_C_Login = 20002,

        /// <summary>
        /// 心跳C->S
        /// </summary>
        C_S_HeartBeat = 1,

        /// <summary>
        /// 心跳S->C
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
    /// 网络消息数据包体基类
    /// </summary>

    public sealed class WebSocketBody : AbsJsonToString
    {
        public int err_code;
        public string err_msg;
        public string data;
    }

    /// <summary>
    /// 客户端网络封包基类
    /// </summary>
    public abstract class AbsWebBodyC_S : AbsJsonToString
    {
    }

    /// <summary>
    /// 服务器回包基类
    /// </summary>
    public abstract class AbsWebBodyS_C : AbsJsonToString
    {
    }


    /// <summary>
    /// 心跳包
    /// </summary>
    public class C_S_HeartBeat : AbsWebBodyC_S
    {
    }

}