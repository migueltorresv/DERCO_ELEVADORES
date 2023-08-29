using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorDosPAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnOpenUpAnimStarted;
    [SerializeField] private UnityEvent OnOpenUpAnimFinished;

    public void OpenUpAnimationStart()
    {
        OnOpenUpAnimStarted?.Invoke();
    }

    public void OpenUpAnimationExit()
    {
        OnOpenUpAnimFinished?.Invoke();
    }
    
}
