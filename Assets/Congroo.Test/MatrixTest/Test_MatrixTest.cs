using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NaughtyAttributes;

public class Test_MatrixTest : MonoBehaviour
{
    [Button("Àı∑≈æÿ’Û * 2")]
    private void TestBtn_Scale_m2()
    {
        Matrix4x4 origin = transform.localToWorldMatrix;
        Debug.Log(origin);
        Matrix4x4 m = new Matrix4x4();
        m.m00 = 2F; m.m01 = 0F; m.m02 = 0F; m.m03 = 0F;
        m.m10 = 0F; m.m11 = 2F; m.m12 = 0F; m.m13 = 0F;
        m.m20 = 0F; m.m21 = 0F; m.m22 = 2F; m.m23 = 0F;
        m.m30 = 0F; m.m31 = 0F; m.m32 = 0F; m.m33 = 1F;
        Matrix4x4 result = m * origin;
        transform.position = result.GetPosition();
        transform.rotation = result.rotation;
        transform.localScale = result.lossyScale;
        Debug.Log(result);
    }

    [Button("Àı∑≈æÿ’Û * 0.5")]
    private void TestBtn_Scale_m05()
    {
        Matrix4x4 origin = transform.localToWorldMatrix;
        Debug.Log(origin);
        Matrix4x4 m = new Matrix4x4();
        m.m00 = 0.5F; m.m01 = 0F; m.m02 = 0F; m.m03 = 0F;
        m.m10 = 0F; m.m11 = 0.5F; m.m12 = 0F; m.m13 = 0F;
        m.m20 = 0F; m.m21 = 0F; m.m22 = 0.5F; m.m23 = 0F;
        m.m30 = 0F; m.m31 = 0F; m.m32 = 0F; m.m33 = 1F;
        Matrix4x4 result = m * origin;
        transform.position = result.GetPosition();
        transform.rotation = result.rotation;
        transform.localScale = result.lossyScale;
        Debug.Log(result);
    }

    [Button("∆Ω“∆æÿ’Û + 1")]
    private void TestBtn_Move_m05()
    {
        Matrix4x4 origin = transform.localToWorldMatrix;
        Debug.Log(origin);
        Matrix4x4 m = new Matrix4x4();
        m.m00 = 1F; m.m01 = 0F; m.m02 = 0F; m.m03 = 1F;
        m.m10 = 0F; m.m11 = 1F; m.m12 = 0F; m.m13 = 1F;
        m.m20 = 0F; m.m21 = 0F; m.m22 = 1F; m.m23 = 1F;
        m.m30 = 0F; m.m31 = 0F; m.m32 = 0F; m.m33 = 1F;
        Matrix4x4 result = m * origin;
        transform.position = result.GetPosition();
        transform.rotation = result.rotation;
        transform.localScale = result.lossyScale;
        Debug.Log(result);
    }


    [Button("∆Ω“∆æÿ’Û  -1")]
    private void TestBtn_Move_m15()
    {
        Matrix4x4 origin = transform.localToWorldMatrix;
        Debug.Log(origin);
        Matrix4x4 m = new Matrix4x4();
        m.m00 = 1F; m.m01 = 0F; m.m02 = 0F; m.m03 = -1F;
        m.m10 = 0F; m.m11 = 1F; m.m12 = 0F; m.m13 = -1F;
        m.m20 = 0F; m.m21 = 0F; m.m22 = 1F; m.m23 = -1F;
        m.m30 = 0F; m.m31 = 0F; m.m32 = 0F; m.m33 = 1F;
        Matrix4x4 result = m * origin;
        transform.position = result.GetPosition();
        transform.rotation = result.rotation;
        transform.localScale = result.lossyScale;
        Debug.Log(result);
    }
}
