using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaPatrol : MonoBehaviour
{
    public float speed;

    private float waitTime;
    public float startWaitTime;

    public bool inSpot = false;
    public Transform[] moveSpot;
    private int indexSpot;
    private int oldIndexSpot;

    void Start()
    {
        indexSpot = 0;
        waitTime = startWaitTime;
    }

    void Update()
    {
        transform.position = Vector3.MoveTowards(transform.position, moveSpot[indexSpot].position, speed * Time.deltaTime);
        Flip();

        if (Vector2.Distance(transform.position, moveSpot[indexSpot].position) < 0.2f)
        {
            inSpot = true;
            if (waitTime <= 0)
            {
                SetIndexSpot(moveSpot.Length);
                waitTime = startWaitTime;
            }
            else
                waitTime -= Time.deltaTime;
        }
    }

    private void SetIndexSpot(int max)
    {
        oldIndexSpot = indexSpot;
        if (indexSpot < --max)
            indexSpot++;
        else
            indexSpot = 0;
    }

    private void Flip()
    {
       if (inSpot)
        {
            if (transform.position.x < moveSpot[oldIndexSpot].position.x)
                transform.eulerAngles = new Vector3(0, 180, 0);
            else if (transform.position.x > moveSpot[oldIndexSpot].position.x)
                transform.eulerAngles = new Vector3(0, 0, 0);
            inSpot = false;
        }        
    }
}
