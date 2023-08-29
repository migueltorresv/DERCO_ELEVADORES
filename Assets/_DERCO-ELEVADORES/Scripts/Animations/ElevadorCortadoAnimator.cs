using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ElevadorCortadoAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnAgrandarAnimFinished;

    public void AgrandarAnimationExit()
    {
        OnAgrandarAnimFinished?.Invoke();
    }
}
