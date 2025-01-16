using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Keyboard : MonoBehaviour
{
    public float speed = 5.0f;
    private Vector3 direction;

    void Start()
    {
        
    }

    void Update()
    {
        // Time.deltaTime��?
        // ������ �������� �Ϸ�� �� ����� �ð��Դϴ�.

        direction.x = Input.GetAxisRaw("Horizontal");
        direction.z = Input.GetAxisRaw("Vertical");

        // ������ ����ȭ
        direction.Normalize();

        transform.position = transform.position + direction * speed * Time.deltaTime;
    }
}
