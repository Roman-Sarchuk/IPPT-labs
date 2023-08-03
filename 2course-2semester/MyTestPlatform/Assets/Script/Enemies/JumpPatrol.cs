using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpPatrol : MonoBehaviour
{
    [Header("Patrol Settings")]
    public Collider2D groundCollider;
    [Range(0, 10f)] public float startWaitTime = 3f;
    private float waitTime;
    public Transform groundDetection;
    [Range(5f, 10f)] public float distance = 8f;
    Rigidbody2D rb;

    [Header("Movement Settings")]
    [Range(0, 5f)] public float speed = 0.1f;
    [Range(0, 2f)] public float jumpForce = 0.5f;
    public bool facingRight = true;

    [Header("Ground Checker Settings")]
    public bool onGround = false;
    [Range(-5f, 5f)] public float checkGroundOffsetY = -0.5f;
    [Range(0, 5f)] public float checkGroundRadius = 0.5f;

    [Header("Animation Settings")]
    public Animator animator;

    void Start()
    {
        waitTime = startWaitTime;
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        if (animator != null)
            animator.SetBool("onGround", onGround);
        RaycastHit2D groundInfo = Physics2D.Raycast(groundDetection.position, Vector2.down, distance);
        groundCollider = groundInfo.collider;
        if (!groundCollider)
        {
            if (waitTime <= 0)
            {
                if (facingRight)
                {
                    transform.eulerAngles = new Vector3(0, 180, 0);
                    facingRight = false;
                }
                else
                {
                    transform.eulerAngles = new Vector3(0, 0, 0);
                    facingRight = true;
                }
                waitTime = startWaitTime;
            }
            else
                waitTime -= Time.deltaTime;
        }
        else
        {
            CheckGround();
            if (onGround)
                rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
            else
                transform.Translate(Vector3.right * speed * Time.deltaTime);
        }
    }

    private void CheckGround()
    {
        Collider2D[] collider = Physics2D.OverlapCircleAll
            (new Vector2(transform.position.x, transform.position.y + checkGroundOffsetY), checkGroundRadius);
        if (collider.Length > 1)
            onGround = true;
        else
            onGround = false;
    }
}