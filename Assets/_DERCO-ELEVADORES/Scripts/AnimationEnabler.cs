using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class AnimationEnabler : MonoBehaviour
{
    public Animator animator;
    public bool isTrigger;
    public string animationName;
    public float delay;
    public UnityEvent OnStartAnim;

    // Start is called before the first frame update
    private void OnEnable()
    {
        StartCoroutine(PlayCoroutine());

    }

    private IEnumerator PlayCoroutine()
    {
        yield return new WaitForSeconds(delay);
        OnStartAnim?.Invoke();
        if (isTrigger)
        {
            animator.SetTrigger(animationName);
        }
        else
        {
            animator.Play(animationName);
        }
    }

    private void OnDisable()
    {
        animator.Play("idle");
    }
}
