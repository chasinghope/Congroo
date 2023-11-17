using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;

namespace Congroo.Core
{
    public static class Utils
    {

        /// <summary>
        /// �������л�������������
        /// </summary>
        /// <param name="original"></param>
        /// <returns></returns>
        public static System.Object DeepClone(System.Object original)
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


        /// <summary>
        /// hex �ַ���ת Color
        /// eg. #9bddff     7��      6  
        /// eg. #9bddffff   9��      8
        /// </summary>
        /// <param name="hexFormat"></param>
        /// <returns></returns>
        public static Color HexToColorRGB(string hexFormat)
        {
            if(hexFormat != null && hexFormat.StartsWith("#") && (hexFormat.Length == 7 || hexFormat.Length == 9))
            {
                hexFormat = hexFormat.Substring(1);
                int r, g, b, a;
                string hexPart;

                hexPart = hexFormat.Substring(0, 2);
                r = Get0XValue(hexPart[0]) * 16 + Get0XValue(hexPart[1]);

                hexPart = hexFormat.Substring(2, 2);
                g = Get0XValue(hexPart[0]) * 16 + Get0XValue(hexPart[1]);

                hexPart = hexFormat.Substring(4, 2);
                b = Get0XValue(hexPart[0]) * 16 + Get0XValue(hexPart[1]);

                a = 255;

                if(hexFormat.Length == 8)
                {
                    hexPart = hexFormat.Substring(6, 2);
                    a = Get0XValue(hexPart[0]) * 16 + Get0XValue(hexPart[1]);
                }
                return ToColor(r, g, b, a);
            }
            else
            {
                CLog.LE(LType.Congroo, $"��ɫ��ʽ���� {hexFormat}");
                return Color.white;
            }
        }

        public static int Get0XValue(char rChar)
        {
            if (rChar >= '0' && rChar <= '9')
            {
                return rChar - '0';
            }
            else if (rChar >= 'A' && rChar <= 'F')
            {
                return rChar - 'A' + 10;
            }
            return 0;
        }

        public static Color ToColor(int r, int g, int b, int a = 255)
        {
            return new Color(r / 255f, g / 255f, b / 255f, a / 255f);
        }

    }
}