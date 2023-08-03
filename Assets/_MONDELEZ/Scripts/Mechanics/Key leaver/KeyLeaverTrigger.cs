using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class KeyLeaverTrigger : MonoBehaviour
{
    public UnityAction<GameObject> WhenTriggerEnter;
    public UnityAction<GameObject> WhenTriggerExit;

    private void OnTriggerEnter(Collider other)
    {
        WhenTriggerEnter?.Invoke(other.gameObject);
    }

    private void OnTriggerExit(Collider other)
    {
        WhenTriggerExit?.Invoke(other.gameObject);
    }
}
