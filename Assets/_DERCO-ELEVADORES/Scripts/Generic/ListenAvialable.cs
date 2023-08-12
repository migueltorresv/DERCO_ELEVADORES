using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ListenAvialable : MonoBehaviour
{
    [SerializeField] private UnityEvent OnEnabled;
    [SerializeField] private UnityEvent OnDisabled;
    private void OnEnable()
    {
        OnEnabled?.Invoke();
    }

    private void OnDisable()
    {
        OnDisabled?.Invoke();
    }
}
