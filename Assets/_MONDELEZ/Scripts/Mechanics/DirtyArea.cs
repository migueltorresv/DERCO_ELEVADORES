using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DirtyArea : MonoBehaviour
{
    public string handTag;
    public GameObject Feedback;
    public ParticleSystem VFX;
    public int limitCount;
    public int currentCount;
    public UnityAction OnComplete;
    public AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(handTag))
        {

            currentCount++;
            VFX.Play();
            audioSource.Play();
            if (currentCount == limitCount)
            {
                gameObject.SetActive(false);
                OnComplete?.Invoke();
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(handTag))
        {
            // Feedback.SetActive(false);
        }
    }
}
