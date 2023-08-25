using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnBeganAnimation;
    [SerializeField] private UnityEvent OnHalfAnimation;
    [SerializeField] private UnityEvent OnFinishedAnimation;

    public void BeginAnimation()
    {
        OnBeganAnimation?.Invoke();
    }

    public void HalfAnimation()
    {
        OnHalfAnimation?.Invoke();
    }

    public void EndAnimation()
    {
        OnFinishedAnimation?.Invoke();
    }
}
