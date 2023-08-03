using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AllDead : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (GameObject.Find("HeroBoy") == null && GameObject.Find("HeroGirl") == null)
            Application.LoadLevel(0);
    }
}
