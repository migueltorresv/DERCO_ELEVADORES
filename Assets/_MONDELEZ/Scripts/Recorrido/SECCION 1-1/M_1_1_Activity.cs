using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class M_1_1_Activity : Section
{
    public FocusObjective focusObjective;
    public GameObject Visual;
    public AudioSource audioSource;
    public List<AudioClip> audioClips;
    public float delayTime;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);
        Visual.SetActive(false);
        focusObjective.OnComplete += () =>
        {
            StartCoroutine(FinaleDialog());
        };
    }

    public override void ForceFinish()
    {
        Visual.SetActive(false);
    }

    public override void Init()
    {
        base.Init();
        Visual.SetActive(true);
        // StartCoroutine(Dialog());
    }

    private IEnumerator FinaleDialog()
    {
        Visual.SetActive(false);
        foreach (var item in audioClips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }

        OnFinish?.Invoke();
    }
}
