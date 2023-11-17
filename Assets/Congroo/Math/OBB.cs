using UnityEngine;

namespace Congroo.Core
{
    public class OBB
    {
        public Vector3 Center;
        public Vector3 Extends;

        public Vector3 XAxis;
        public Vector3 YAxis;
        public Vector3 ZAxis;

        public OBB()
        {
        }

        public OBB(Vector3 rCenter, Vector3 rExtends, Vector3 rXAxis, Vector3 rYAxis, Vector3 rZAxis)
        {
            this.Center = rCenter;
            this.Extends = rExtends;

            this.XAxis = rXAxis;
            this.YAxis = rYAxis;
            this.ZAxis = rZAxis;
        }

        public bool ContainPoint(Vector3 rPoint)
        {
            Vector3 rVecDir = rPoint - Center;

            float fXAxisProj = Vector3.Dot(rVecDir, XAxis);
            if (fXAxisProj > Extends.x || fXAxisProj < Extends.x)
                return false;

            float fYAxisProj = Vector3.Dot(rVecDir, YAxis);
            if (fYAxisProj > Extends.y || fYAxisProj < Extends.y)
                return false;

            float fZAxisProj = Vector3.Dot(rVecDir, ZAxis);
            if (fZAxisProj > Extends.z || fZAxisProj < Extends.z)
                return false;

            return true;
        }
    }
}
