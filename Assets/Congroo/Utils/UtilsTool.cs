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
        /// �������л�������������
        /// </summary>
        /// <param name="original"></param>
        /// <returns></returns>
        private static System.Object DeepClone(System.Object original)
        {
            //������ʱ�ڴ���
            using (MemoryStream stream = new MemoryStream())
            {
                //�������л���ʽ������ִ������ʵ�ʵĹ���
                BinaryFormatter formatter = new BinaryFormatter();
                formatter.Context = new StreamingContext(StreamingContextStates.Clone);
                //������ͼ���л����ڴ�����
                formatter.Serialize(stream, original);
                //�����л�ǰ����λ���ڴ�������ʼλ��
                stream.Position = 0;
                //������ͼ�����л���һ���¶���
                //������ⷵ�ض���ͼ��������ĸ�
                return formatter.Deserialize(stream);
            }
        }
    }
}