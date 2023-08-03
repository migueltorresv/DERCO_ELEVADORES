using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TouchObject : MonoBehaviour
{
    [SerializeField] private string _tagName;
    [SerializeField] private UnityEvent OnTriggerEntered;
    [SerializeField] private UnityEvent OnTriggerExited;
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(_tagName))
        {
            OnTriggerEntered?.Invoke();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(_tagName))
        {
            OnTriggerExited?.Invoke();
        }
    }
}
