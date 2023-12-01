using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.IO;
using System.Linq;

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
                CLog.E(LType.Congroo, $"��ɫ��ʽ���� {hexFormat}");
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

        public static void String2Vector3(out Vector3 p, string value)
        {
            string[] separators = new string[] { nameof(Vector3), "(", ")", "," };
            var strs = value.Split(separators, StringSplitOptions.RemoveEmptyEntries);
            var vector = new Vector3(float.Parse(strs[0]), float.Parse(strs[1]), float.Parse(strs[2]));
            p = vector;
        }

        public static void String2Quaternion(out Quaternion p, string value)
        {
            string[] separators = new string[] { nameof(Quaternion), "(", ")", "," };
            var strs = value.Split(separators, StringSplitOptions.RemoveEmptyEntries);
            var vector = new Quaternion(float.Parse(strs[0]), float.Parse(strs[1]), float.Parse(strs[2]), float.Parse(strs[3]));
            p = vector;
        }

        /// <summary>
        /// ������ƥ���ַ����Ƿ������·����
        /// </summary>
        /// <param name="path"></param>
        /// <param name="matchParams"></param>
        /// <returns></returns>
        public static bool StringIsMatchIn(string path, params string[] matchParams)
        {
            bool ret = true;
            foreach (var item in matchParams)
            {
                if (!path.Contains(item))
                {
                    ret = false;
                    break;
                }
            }
            return ret;
        }

        /// <summary>
        /// ������·�����Ƿ����ָ�����ļ���
        /// </summary>
        /// <param name="path"></param>
        /// <param name="vs"></param>
        /// <returns></returns>
        public static bool DirectoryIsMatchInPath(string path, params string[] matchParams)
        {
            var directorys = path.Split(new string[] { "/" }, StringSplitOptions.RemoveEmptyEntries);
            var bb = from e in directorys where matchParams.Contains(e) select e;
            return bb.Count() == matchParams.Length;
        }

        /// <summary>
        /// �ű��Ƿ�����Editor�ļ�����
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static bool IsEditorScript(string path)
        {
            return DirectoryIsMatchInPath(path, "Editor");
        }

        /// <summary>
        /// ����һ�����Ƿ���ָ��λ�����ɵ����η�Χ��
        /// </summary>
        public static bool PointIsInVisualRange(Vector3 point, Transform cricleTrans, float visualAngle, float cricleRadius)
        {
            //����Բ�ĵ����������߽緽��
            Quaternion originRot = cricleTrans.rotation;
            Quaternion leftRot = Quaternion.AngleAxis(-visualAngle * 0.5f, cricleTrans.up);
            cricleTrans.rotation = leftRot * cricleTrans.rotation;
            Vector3 leftDir = cricleTrans.forward;
            leftDir.Set(leftDir.x, 0, leftDir.z);
            cricleTrans.rotation = originRot;

            Quaternion rightRot = Quaternion.AngleAxis(visualAngle * 0.5f, cricleTrans.up);
            cricleTrans.rotation = rightRot * cricleTrans.rotation;
            Vector3 rightDir = cricleTrans.forward;
            rightDir.Set(rightDir.x, 0, rightDir.z);
            cricleTrans.rotation = originRot;

            point.Set(point.x, 0, point.z);
            Vector3 criclePos = cricleTrans.position;
            criclePos.Set(criclePos.x, 0, criclePos.z);

            //�����жϸõ��Ƿ��ڽǶȷ�Χ��
            Vector3 pointDir = point - criclePos;
            float leftAngle = Vector3.Angle(pointDir, leftDir);
            float rightAngle = VerctorAngle(pointDir, rightDir, cricleTrans.forward);
            bool ret = false;
            //�������ڣ����ε������߽粻����
            if (leftAngle < visualAngle && rightAngle < visualAngle)
            {
                //�ж��Ƿ���Բ��,ԭ�߽粻����
                if (pointDir.magnitude < cricleRadius)
                {
                    ret = true;
                }
            }
            return ret;
        }

        public static float VerctorAngle(Vector3 vector1, Vector3 vector2, Vector3 forward)
        {
            //�����ж������������ڵ�����
            float v1 = Vector3.Dot(vector1, forward);
            float angle = Vector3.Angle(vector1, vector2);
            if (v1 < 0)//�ڵ���������
            {
                angle = 360f - angle;
            }
            return angle;
        }

        /// <summary>
        /// ��ȡUnixʱ���
        /// </summary>
        /// <returns></returns>
        public static long GetCurUnixTimeTick()
        {
            return DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        }
        public static long GetCurUnixTimeMillisecondsTick()
        {
            return DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
        }
    }
}