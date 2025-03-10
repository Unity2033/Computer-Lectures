using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Select : MonoBehaviour
{
    [SerializeField] Text buttonText;
    [SerializeField] AudioClip audioClip;
    
    private void Awake()
    {
        buttonText = GetComponentInChildren<Text>();
    }

    public void OnEnter()
    {
        buttonText.fontSize = 90;

        AudioManager.Instance.Listen(audioClip);
    }

    public void OnLeave()
    {
        buttonText.fontSize = 75;
    }

    public void OnSelect()
    {
        buttonText.fontSize = 50;
    }
}
