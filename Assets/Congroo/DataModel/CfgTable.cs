
using Bright.Serialization;
using cfg;
using SimpleJSON;
using System.Reflection;
using Unity.VisualScripting.Antlr3.Runtime;
using UnityEngine;

namespace Congroo.Core 
{
    public class CfgTable : Singleton<CfgTable>
    {
        private Tables tables;
        public Tables Tables { get { return tables; } }
        /// <summary>
        /// 已经加载的配置表总数
        /// </summary>
        private int m_HasLoadedCfgCount = 0;


        private CfgTable()
        {
                
        }

        public void Initialize()
        {
            var tablesCtor = typeof(Tables).GetConstructors()[0];
            var loaderReturnType = tablesCtor.GetParameters()[0].ParameterType.GetGenericArguments()[1];
            // 根据cfg.Tables的构造函数的Loader的返回值类型决定使用json还是ByteBuf Loader
            System.Delegate loader = loaderReturnType == typeof(ByteBuf) ?
                new System.Func<string, ByteBuf>(LoadByteBuf)
                : (System.Delegate)new System.Func<string, JSONNode>(LoadJson);
            tables = (cfg.Tables)tablesCtor.Invoke(new object[] { loader });
        }

        private JSONNode LoadJson(string file)
        {
            var cfg = ResMgr.Instance.LoadAsset<TextAsset>($"cfgs/jsons/{file}.json");
            CfgLoadEvent();
            return JSON.Parse(cfg.text);
        }

        private ByteBuf LoadByteBuf(string file)
        {
            var cfg = ResMgr.Instance.LoadAsset<TextAsset>($"cfgs/bytes/{file}.bytes");
            CfgLoadEvent();
            return new ByteBuf(cfg.bytes);
        }


        private void CfgLoadEvent()
        {
            m_HasLoadedCfgCount++;
            //Debug.Log($"总数:{m_CfgSumCount}\t当前个数:{m_HasLoadedCfgCount}");
        }
    }
}
