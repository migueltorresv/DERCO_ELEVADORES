using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SprayObjective : MonoBehaviour
{
    public UnityAction<bool> OnTrigger;
    public MeshRenderer meshRenderer;
    public Animator anim;
    public bool isTrigger;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("sprayCol"))
        {
            isTrigger = true;
            OnTrigger?.Invoke(isTrigger);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("sprayCol"))
        {
            isTrigger = false;
            OnTrigger?.Invoke(isTrigger);
        }
    }
}
