using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnBeganAnimation;
    [SerializeField] private UnityEvent OnHalfAnimation;
    [SerializeField] private UnityEvent OnFinishedAnimation;
    [Space] 
    [Space] 
    [SerializeField] private UnityEvent OnBeganDownShortAnim;
    [SerializeField] private UnityEvent OnFinishedDownShortAnim;
    [SerializeField] private UnityEvent OnBeganDownAfterShotAnim;
    [SerializeField] private UnityEvent OnFinishedDownAfterShotAnim;

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

    public void BeginDownShortAnimation()
    {
        OnBeganDownShortAnim?.Invoke();
    }
    public void EndDownShortAnimation()
    {
        OnFinishedDownShortAnim?.Invoke();
    }

    public void BeginDownAfterShotAnimation()
    {
        OnBeganDownAfterShotAnim?.Invoke();
    }
    
    public void EndDownAfterShotAnimation()
    {
        OnFinishedDownAfterShotAnim?.Invoke();
    }
}
