using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class CatHouse : MonoBehaviour
{
    public PlayableDirector playable;
    public float waitTime = 10;
    private Animator anim;

    private void Start()
    {
        anim = GetComponentInChildren<Animator>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        playable.Play();
        anim.SetBool("isEnd", true);
        Invoke(nameof(ReturnToMenu), waitTime);
    }

    private void ReturnToMenu()
    {
        Application.LoadLevel(0);
    }
}
