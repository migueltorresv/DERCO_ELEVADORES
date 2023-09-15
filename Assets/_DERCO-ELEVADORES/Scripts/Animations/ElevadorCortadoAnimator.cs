using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorCortadoAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnAgrandarAnimFinished;
    [SerializeField] private UnityEvent OnRestaurarAnimFinished;

    public void AgrandarAnimationExit()
    {
        OnAgrandarAnimFinished?.Invoke();
    }

    public void RestaurarAnimationExit()
    {
        OnRestaurarAnimFinished?.Invoke();
    }
}
