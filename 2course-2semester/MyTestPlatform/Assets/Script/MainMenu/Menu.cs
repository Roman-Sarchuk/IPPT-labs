using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Menu : MonoBehaviour
{
    private AudioSource aud;
    void Start()
    {
        aud = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    public void ClickButton()
    {
        aud.Play();
    }

    public void StartGame(float WaitTime)
    {
        Invoke(nameof(OpenSceneDelay), WaitTime);
    }

    private void OpenSceneDelay()
    {
        Application.LoadLevel(1);
    }

    public void ExitGame()
    {
        Debug.Log("!GAME CLOSE!");
        Application.Quit();
    }

}
