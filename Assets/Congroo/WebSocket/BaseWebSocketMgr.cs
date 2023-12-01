using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using UnityWebSocket;

namespace Congroo.Core
{
    public abstract class BaseWebSocketMgr : MonoBehaviour
    {
        WebSocket mSocket;

        public WebSocketState State
        {
            get
            {
                return mSocket == null ? WebSocketState.Closed : mSocket.ReadyState;
            }
        }

        public void Connnet(string host)
        {
            if(State == WebSocketState.Closed)
            {
                // 填充请求头
                //Dictionary<string, string> tmp = new Dictionary<string, string>();
                StringBuilder sb = new StringBuilder();
                string timestamp = $"{(DateTime.Now.ToUniversalTime().Ticks - 621355968000000000) / 10000000}";
                string noncestr = GetRandomCharacters(6);
                string secret = string.Empty; // AppID, Platform, appSecret....
                //tmp.Add("gameid", string.Empty);
                //tmp.Add("platform", Application.platform.ToString());
                //tmp.Add("timestamp", timestamp);
                //tmp.Add("noncestr", noncestr);
                //tmp.Add("signature", HmacSHA256(secret));

                sb.Append($"{"gameid"}:{string.Empty}");
                sb.Append($"{"platform"}:{Application.platform}");
                sb.Append($"{"timestamp"}:{timestamp}");
                sb.Append($"{"noncestr"}:{noncestr}");
                sb.Append($"{"signature"}:{HmacSHA256(secret)}");


                mSocket = new WebSocket(host, sb.ToString());
                mSocket.OnOpen += OnOpen;
                mSocket.OnMessage += OnMsg;
                mSocket.OnClose += OnClose;
                mSocket.OnError += OnError;
                mSocket.ConnectAsync();
                CLog.W(LType.WebSocket, "WebSocket on connecting...");
            }
        }

        public void Disconnect()
        {
            CLog.L(LType.WebSocket, "Disconnect...");
            mSocket?.CloseAsync();
            mSocket = null;
        }

        protected void SendMsg(byte[] datas)
        {
            mSocket?.SendAsync(datas);
        }

        private void OnError(object sender, ErrorEventArgs e)
        {
            CLog.E(LType.WebSocket, $"错误\t原因:{e.Message}");
            OnErrorHandle(sender, e);
        }

        private void OnClose(object sender, CloseEventArgs e)
        {
            CLog.W(LType.WebSocket, $"关闭连接\tcode:{e.Code}\t原因:{e.Reason}");
            OnCloseHandle(sender, e);
        }

        private void OnMsg(object sender, MessageEventArgs e)
        {
            OnMsgHandle(sender, e);
        }

        private void OnOpen(object sender, OpenEventArgs e)
        {
            CLog.W(LType.WebSocket, "连接成功!!!");
            OnOpenHandle(sender, e);
        }

        public abstract void OnErrorHandle(object sender, ErrorEventArgs e);

        public abstract void OnCloseHandle(object sender, CloseEventArgs e);

        public abstract void OnMsgHandle(object sender, MessageEventArgs e);

        public abstract void OnOpenHandle(object sender, OpenEventArgs e);




        /// <summary>
        /// v生成随机字母字符串(数字字母混和)
        /// </summary>
        /// <param name="n"></param>
        /// <param name="Number"></param>
        /// <param name="Lowercase"></param>
        /// <param name="Capital"></param>
        /// <returns></returns>
        public static string GetRandomCharacters(int n = 10, bool Number = true, bool Lowercase = false, bool Capital = false)
        {
            StringBuilder tmp = new StringBuilder();
            System.Random rand = new System.Random();
            string characters = (Capital ? "ABCDEFGHIJKLMNOPQRSTUVWXYZ" : null) + (Number ? "0123456789" : null) + (Lowercase ? "abcdefghijklmnopqrstuvwxyz" : null);
            if (characters.Length < 1)
            {
                return (null);
            }
            for (int i = 0; i < n; i++)
            {
                tmp.Append(characters[rand.Next(0, characters.Length)].ToString());
            }
            return (tmp.ToString());
        }


        public static string HmacSHA256(string message)
        {
            byte[] keyByte = Encoding.GetEncoding("utf-8").GetBytes(Application.productName);
            byte[] messageBytes = Encoding.GetEncoding("utf-8").GetBytes(message);
            using (var hmacsha256 = new HMACSHA256(keyByte))
            {
                byte[] hashmessage = hmacsha256.ComputeHash(messageBytes);
                return Convert.ToBase64String(hashmessage);
            }
        }

    }
}