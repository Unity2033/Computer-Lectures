using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SpeedManager : MonoBehaviour
{
    [SerializeField] UnityEvent callback;

    [SerializeField] static float speed;
    [SerializeField] float limitSpeed = 60.0f;

    public static float Speed
    {  
        get { return speed; } 
    }

    private void Awake()
    {
        speed = 30.0f;

        StartCoroutine(Increase());
    }

    IEnumerator Increase()
    {
        while(GameManager.Instance.State && speed < limitSpeed)
        {
            yield return CoroutineCache.WaitForSecond(TimeManager.Instance.IncreaseTime);

            if (callback != null)
            {
                callback.Invoke();
            }

            speed += 2;
        }
    }

}
