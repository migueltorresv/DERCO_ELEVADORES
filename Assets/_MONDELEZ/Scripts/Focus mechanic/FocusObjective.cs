using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
public class FocusObjective : MonoBehaviour
{
    public Image focusCicle;
    public float maxTime = 3;
    public float currentTime = 0;
    public bool completed;
    public bool isFocus;
    public UnityAction OnComplete;

    // Update is called once per frame
    void Update()
    {
        if (!completed && isFocus)
        {
            if (currentTime < maxTime)
            {
                currentTime += Time.deltaTime;

                focusCicle.fillAmount = (currentTime / maxTime);
            }
            else
            {
                StartCoroutine(CompleteCoroutine());
            }
        }
    }

    private IEnumerator CompleteCoroutine()
    {
        focusCicle.fillAmount = 1;
        completed = true;
        focusCicle.color = Color.green;
        yield return new WaitForSeconds(1);
        OnComplete?.Invoke();
    }

    public void Restart()
    {
        if (!completed)
        {
            isFocus = false;
            completed = false;
            currentTime = 0;
            focusCicle.fillAmount = 0;
            focusCicle.color = Color.cyan;
        }
    }

    public void ForceReset()
    {
        isFocus = false;
        completed = false;
        currentTime = 0;
        focusCicle.fillAmount = 0;
        focusCicle.color = Color.cyan;
    }

    public void FocusState(bool state)
    {
        if (!completed)
            isFocus = state;
    }
}
