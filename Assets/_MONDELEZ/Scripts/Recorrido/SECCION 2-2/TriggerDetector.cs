using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TriggerDetector : MonoBehaviour
{
    public string tagObj = "alicate";
    public UnityAction<bool> OnTrigger;
    public MeshRenderer meshRenderer;
    public Animator anim;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(tagObj))
        {
            OnTrigger?.Invoke(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(tagObj))
        {
            OnTrigger?.Invoke(false);
        }
    }
}
