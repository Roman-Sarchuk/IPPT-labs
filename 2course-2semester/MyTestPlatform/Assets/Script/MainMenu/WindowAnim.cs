using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WindowAnim : MonoBehaviour
{
    Animator anim;
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    public void CallAnime(string name)
    {
        if (anim.GetBool(name) is true)
            anim.SetBool(name, false);
        else if (anim.GetBool(name) is false)
            anim.SetBool(name, true);
    }

}
