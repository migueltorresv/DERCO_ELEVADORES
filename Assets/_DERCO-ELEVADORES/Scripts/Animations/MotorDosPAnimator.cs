using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MotorDosPAnimator : MonoBehaviour
{
    [SerializeField] private UnityEvent OnDownHandleAnimFinished;

    public void DownHandleAnimationExit()
    {
        OnDownHandleAnimFinished?.Invoke();
    }
}
