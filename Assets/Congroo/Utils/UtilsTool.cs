using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;

namespace Congroo.Core
{
    public class Utils
    {

        /// <summary>
        /// 利用序列化创建对象的深拷贝
        /// </summary>
        /// <param name="original"></param>
        /// <returns></returns>
        private static System.Object DeepClone(System.Object original)
        {
            //构造临时内存流
            using (MemoryStream stream = new MemoryStream())
            {
                //构造序列化格式化器来执行所有实际的工作
                BinaryFormatter formatter = new BinaryFormatter();
                formatter.Context = new StreamingContext(StreamingContextStates.Clone);
                //将对象图序列化到内存流中
                formatter.Serialize(stream, original);
                //反序列化前，定位到内存流的起始位置
                stream.Position = 0;
                //将对象图反序列化成一组新对象，
                //向调用这返回对象图（深拷贝）的根
                return formatter.Deserialize(stream);
            }
        }
    }
}