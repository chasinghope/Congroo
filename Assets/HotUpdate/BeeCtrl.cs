using UnityEngine;
using UnityEngine.UIElements;

public class BeeCtrl : MonoBehaviour
{
    [SerializeField] float speed;

    public void Update()
    {
        transform.Translate(new Vector3(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"), 0) * Time.deltaTime * speed);
    }
}