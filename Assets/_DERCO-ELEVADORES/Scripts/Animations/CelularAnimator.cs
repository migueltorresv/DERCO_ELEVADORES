using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class CelularAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnRotateAnimationFinished;

    public void RotationAnimationExit()
    {
        OnRotateAnimationFinished?.Invoke();
    }
}
