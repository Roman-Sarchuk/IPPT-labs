using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroGirl : MonoBehaviour
{
    Rigidbody2D rb;
    bool facingRight = true;
    public bool active = true;

    [Header("Player Movement Settings")]
    [Range(0, 10f)] public float horizontalSpeed = 0.1f;
    [Range(0, 15f)] public float jumpForce = 10f;
    float speedX;
    float lastSpeedX;

    [Header("Player Animation Settings")]
    public Animator animator;

    [Header("Ground Checker Settings")]
    public bool isGround = false;
    [Range(-5f, 5f)] public float checkGroundOffsetY = -1.8f;
    [Range(0, 5f)] public float checkGroundRadius = 0.3f;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        if (active is true)
        {
            CheckGround();

            if (Input.GetKey(KeyCode.LeftArrow))
            {
                speedX = -horizontalSpeed;
                animator.SetBool("isLeft", true);
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                speedX = horizontalSpeed;
                animator.SetBool("isLeft", false);
            }
            if (isGround && Input.GetKey(KeyCode.UpArrow) && Mathf.Abs(rb.velocity.y) < 0.05f)
                rb.AddForce(new Vector2(0, jumpForce), ForceMode2D.Impulse);

            animator.SetFloat("HorizontalMove", Mathf.Abs(speedX));
            transform.Translate(speedX, 0, 0);

            speedX = 0;
        }
    }

    void Flip()
    {
        facingRight = !facingRight;
        Vector3 Scaler = transform.localScale;
        Scaler.x *= -1;
        transform.localScale = Scaler;
    }

    private void CheckGround()
    {
        Collider2D[] collider = Physics2D.OverlapCircleAll
            (new Vector2(transform.position.x, transform.position.y + checkGroundOffsetY), checkGroundRadius);
        if (collider.Length > 1)
            isGround = true;
        else
            isGround = false;
    }
}
