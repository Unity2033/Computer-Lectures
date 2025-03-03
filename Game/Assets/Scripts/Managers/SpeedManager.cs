using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedManager : MonoBehaviour
{
    [SerializeField] static float speed;
    [SerializeField] float limitSpeed = 50.0f;

    WaitForSeconds waitForSeconds = new WaitForSeconds(2.5f);

    public static float Speed
    {  
        get { return speed; } 
    }

    private void Awake()
    {
        speed = 20.0f;

        StartCoroutine(Increase());
    }

    IEnumerator Increase()
    {
        while(GameManager.Instance.State && speed < limitSpeed)
        {
            yield return waitForSeconds;

            speed += 2;
        }
    }

}
