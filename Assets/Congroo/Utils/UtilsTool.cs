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
        /// 利用序列化创建对象的深拷贝
        /// </summary>
        /// <param name="original"></param>
        /// <returns></returns>
        public static System.Object DeepClone(System.Object original)
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


        /// <summary>
        /// hex 字符串转 Color
        /// eg. #9bddff     7个      6  
        /// eg. #9bddffff   9个      8
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
                CLog.E(LType.Congroo, $"颜色格式错误 {hexFormat}");
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
        /// 给定的匹配字符串是否包含在路径中
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
        /// 给定的路径中是否包含指定的文件夹
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
        /// 脚本是否是在Editor文件夹中
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static bool IsEditorScript(string path)
        {
            return DirectoryIsMatchInPath(path, "Editor");
        }

        /// <summary>
        /// 计算一个点是否在指定位置所成的扇形范围内
        /// </summary>
        public static bool PointIsInVisualRange(Vector3 point, Transform cricleTrans, float visualAngle, float cricleRadius)
        {
            //计算圆心点左右两个边界方向
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

            //首先判断该点是否在角度范围内
            Vector3 pointDir = point - criclePos;
            float leftAngle = Vector3.Angle(pointDir, leftDir);
            float rightAngle = VerctorAngle(pointDir, rightDir, cricleTrans.forward);
            bool ret = false;
            //在扇形内，扇形的两个边界不考虑
            if (leftAngle < visualAngle && rightAngle < visualAngle)
            {
                //判断是否在圆内,原边界不考虑
                if (pointDir.magnitude < cricleRadius)
                {
                    ret = true;
                }
            }
            return ret;
        }

        public static float VerctorAngle(Vector3 vector1, Vector3 vector2, Vector3 forward)
        {
            //首先判断两个向量所在的象限
            float v1 = Vector3.Dot(vector1, forward);
            float angle = Vector3.Angle(vector1, vector2);
            if (v1 < 0)//在第三四象限
            {
                angle = 360f - angle;
            }
            return angle;
        }

        /// <summary>
        /// 获取Unix时间戳
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