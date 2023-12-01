using System.Text;
using System;
using UnityWebSocket;
using Newtonsoft.Json;
using System.Threading;
using System.Runtime.CompilerServices;

namespace Congroo.Core
{
    public class WebSocketMgr : BaseWebSocketMgr
    {
		/// <summary>
		/// 心跳超时时间
		/// </summary>
		private const int TIME_OUT = 10;

		/// <summary>
		/// 心跳包发送间隔
		/// </summary>
		private const int SEND_INTERVAL = 2;

		/// <summary>
		/// 心跳包时间
		/// </summary>
		private long mHeartBeatTick = 0;

		private long mHandle = -1;

		public event Action<EWebNetCode, string> OnReceiveData;

		public CancellationTokenSource TokenSource { get; private set; } = new CancellationTokenSource();

		public override void OnOpenHandle(object sender, OpenEventArgs e)
        {
			mHeartBeatTick = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
		}

		public override void OnMsgHandle(object sender, MessageEventArgs e)
		{
			byte[] data = e.RawData;
			var code = (EWebNetCode)BitConverter.ToInt32(data, 0);
			int msgCode = (int)code;
			string msgBody = data.Length > 4 ? Encoding.UTF8.GetString(data, 4, data.Length - 4) : string.Empty;
			if (msgCode == (int)EWebNetCode.S_C_HeartBeat)
            {
				OnReceiveData?.Invoke(code, string.Empty);
				return;
			}
			CLog.W(LType.WebSocket, $"S--********-->C msgcode:{code}->{msgCode}\tmsgBody:{msgBody}");

			//网络回包包体
			var s_cBody = UnityEngine.JsonUtility.FromJson<WebSocketBody>(msgBody);
			if (s_cBody.err_code != 200)
			{
				CLog.W(LType.WebSocket, s_cBody.err_msg);
                return;
            }

			OnReceiveData?.Invoke(code, s_cBody.data);
		}

		public override void OnErrorHandle(object sender, ErrorEventArgs e)
		{
			CLog.E(LType.WebSocket, e.ToString());
			if (State == WebSocketState.Closing || State == WebSocketState.Closed)
			{
				return;
			}
			Disconnect();
		}

		public override void OnCloseHandle(object sender, CloseEventArgs e)
		{
			CLog.W(LType.WebSocket, "手动关闭Socket返回...");
		}

		//public void OnInit()
		//{
		//	RegisterWebNetMsg(EWebNetCode.S_C_ConnectSucc, OnConnectSucc, TokenSource.Token);
		//	RegisterWebNetMsg(EWebNetCode.S_C_HeartBeat, OnHeartBeat, TokenSource.Token);
		//}

		//private void OnConnectSucc(string obj)
		//{
		//	CLog.LW(LType.WebSocket, "Socket连接成功！！！！");

		//	LTGL.Ins.LogicEvent.Notify(EL_NetEvent.OnSocketConnectSuccess);

		//	StartHeartBeat();
		//	CLog.LW(LType.WebSocket, "发送断线重连***********************");
		//	SendMsg(EWebNetCode.C_S_Reconnect, new C_S_Reconnect { game_id = GameConst.AppID, platform = GameConst.Platform, room_id = GameStartInfos.GAME_ROOMID });
		//}

		private void OnHeartBeat(string body)
		{
			mHeartBeatTick = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
			//LTLog.L("收到心跳回包时间:" + curTimeTick);
		}


		private void StartHeartBeat()
		{
			if (mHandle != -1)
			{
				TimerMgr.Instance.EndTimer(mHandle);
			}
			mHeartBeatTick = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
			mHandle = TimerMgr.Instance.StartTimer(TokenSource.Token, () =>
			{
				SendHeartBeat();
			}, 0, -1, SEND_INTERVAL);
		}


		private void SendHeartBeat()
		{
			if (State != WebSocketState.Open)
				return;
			long curTime = DateTimeOffset.UtcNow.ToUnixTimeSeconds();
			if ((curTime - mHeartBeatTick) > TIME_OUT)
			{
				Disconnect();
				return;
			}
			SendMsg(EWebNetCode.C_S_HeartBeat, new C_S_HeartBeat { });
		}


		public void SendMsg(EWebNetCode code, AbsWebBodyC_S body)
		{
			ValueType v = code;
			int msgCode = (int)v;
			byte[] codeBytes = BitConverter.GetBytes(msgCode);
			string msgBody = JsonConvert.SerializeObject(body);
			byte[] msgBodyBytes = Encoding.UTF8.GetBytes(msgBody);
			byte[] sendBuffer = new byte[codeBytes.Length + msgBodyBytes.Length];
			Buffer.BlockCopy(codeBytes, 0, sendBuffer, 0, codeBytes.Length);
			Buffer.BlockCopy(msgBodyBytes, 0, sendBuffer, 4, msgBodyBytes.Length);
			if (msgCode != 1)
			{
				CLog.W(LType.WebSocket, $"C--->S msgcode:{code}->{msgCode}\tmsgBody:{msgBody}");
			}
			SendMsg(sendBuffer);
		}
	}
}