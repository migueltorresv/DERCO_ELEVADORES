using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorDosPAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnOpenUpAnimStarted;
    [SerializeField] private UnityEvent OnOpenUpAnimFinished;
    [SerializeField] private UnityEvent OnOpenUpShortAnimStarted;
    [SerializeField] private UnityEvent OnOpenUpShortAnimFinished;
    [SerializeField] private UnityEvent OnDownShortAnimStarted;
    [SerializeField] private UnityEvent OnDownShortAnimFinished;

    public void OpenUpAnimationStart()
    {
        OnOpenUpAnimStarted?.Invoke();
    }

    public void OpenUpAnimationExit()
    {
        OnOpenUpAnimFinished?.Invoke();
    }

    public void OpenUpShortAnimationStart()
    {
        OnOpenUpShortAnimStarted?.Invoke();
    }
    
    public void OpenUpShortAnimationExit()
    {
        OnOpenUpShortAnimFinished?.Invoke();
    }
    
    public void DownShortAnimationStart()
    {
        OnDownShortAnimStarted?.Invoke();
    }
    
    public void DownShortAnimationExit()
    {
        OnDownShortAnimFinished?.Invoke();
    }
}
