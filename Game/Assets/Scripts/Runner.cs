using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoadLine
{
    LEFT = -1,
    MIDDLE = 0,
    RIGHT = 1
}

public class Runner : MonoBehaviour
{
    [SerializeField] float speed = 25.0f;
    [SerializeField] float positionX = 4.0f;

    [SerializeField] RoadLine roadLine;
    [SerializeField] Animator animator;
    [SerializeField] Rigidbody rigidBody;

    private void OnEnable()
    {
        InputManager.Instance.action += OnKeyUpdate;
    }

    void Start()
    {
        roadLine = RoadLine.MIDDLE;

        animator = GetComponent<Animator>();
        rigidBody = GetComponent<Rigidbody>();
    }

    private void FixedUpdate()
    {
        if (GameManager.Instance.State == false) return;

        Move();
    }

    public void OnKeyUpdate()
    {
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (roadLine != RoadLine.LEFT)
            {
                roadLine--;

                animator.Play("Left Avoid");
            }
        }

        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (roadLine != RoadLine.RIGHT)
            {
                roadLine++;

                animator.Play("Right Avoid");
            }
        }
    }

    public void Move()
    {
        // 선형 보간법
        // 직선에 두 점이 주어졌을 때 그 사이에 위치한 값을 추정하기
        // 위하여 직선 거리에 따라 선형적으로 계산하는 방법입니다.

        rigidBody.position = Vector3.Lerp
        (
             rigidBody.position,
             new Vector3(positionX * (int)roadLine, 0, 0),
             speed * Time.deltaTime
        );
    }

    public void Die()
    {
        GameManager.Instance.Finish();

        animator.Play("Die");
    }

    public void Synchoronization()
    {
        animator.speed = SpeedManager.Speed / 30;
    }

    private void OnDisable()
    {
        InputManager.Instance.action -= OnKeyUpdate;
    }

    private void OnTriggerEnter(Collider other)
    {
        Obstacle obstacle = other.GetComponent<Obstacle>();

        if(obstacle != null)
        {
            Die();
        }
    }
}
