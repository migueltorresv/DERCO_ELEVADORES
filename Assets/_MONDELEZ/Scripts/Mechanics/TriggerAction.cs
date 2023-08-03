using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;
using UnityEngine.Events;
public class TriggerAction : MonoBehaviour
{
    public string fingerTag;
    public Grabbable grabbable;
    public Animator animator;
    public GameObject feedback;
    public UnityAction OnAction;
    public bool isTriggerFinger;

    private ParticleSystem particle;

    public bool isContinuos = false;
    public AudioSource audioSource;

    private void Start()
    {
        feedback.SetActive(true);

        particle = feedback.GetComponent<ParticleSystem>();
        particle.Stop();
        if (isContinuos)
            feedback.SetActive(true);

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            if (isContinuos)
            {
                particle.Play();
                isTriggerFinger = true;
                audioSource.Play();
            }
            else
            {
                StopAllCoroutines();
                particle.Stop();
                audioSource.Stop();
                feedback.SetActive(false);

                StartCoroutine(FeedbackACtive());
            }
        }
    }
    // Start is called before the first frame update
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(fingerTag))
        {
            animator.SetTrigger("Shot");
            OnAction?.Invoke();

            if (isContinuos)
            {
                particle.Play();
                isTriggerFinger = true;
                audioSource.Play();
            }
            else
            {
                StopAllCoroutines();
                particle.Stop();
                audioSource.Stop();
                feedback.SetActive(false);

                StartCoroutine(FeedbackACtive());
            }

        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(fingerTag))
        {
            animator.SetTrigger("Idle");
            particle.Stop();
            audioSource.Stop();

            isTriggerFinger = false;
        }
    }

    private IEnumerator FeedbackACtive()
    {
        feedback.SetActive(true);
        particle.Play();
        audioSource.Play();
        yield return new WaitForSeconds(0.5f);
        particle.Stop();
        audioSource.Stop();
        feedback.SetActive(false);
    }
}
