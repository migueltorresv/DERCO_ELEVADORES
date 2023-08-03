using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;

public class PanelButtonSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> OnlyEnable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;
    public GameObject FinalAppear;
    public AudioSource audioSource;
    public List<AudioClip> audioClips;
    public List<AudioClip> finalDialogAudioclips;
    public PointableUnityEventWrapper pokeButton;
    public float delay;


    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        if (PanelCanvas)
            PanelCanvas.enabled = false;
        pokeButton.gameObject.SetActive(false);

        if (FinalAppear)
            FinalAppear.SetActive(false);

        EnableAuxiliars(false);
    }

    public override void ForceFinish()
    {
        StopAllCoroutines();

        if (PanelCanvas)
            PanelCanvas.enabled = false;
        audioSource.Stop();

        EnableAuxiliars(false);
    }

    private void DisableOnlyDisable()
    {
        foreach (var item in OnlyDisable)
        {
            item.SetActive(false);
        }
    }

    private void EnableAuxiliars(bool state)
    {
        if (PanelCanvas)
            PanelCanvas.enabled = state;
        foreach (var item in auxiliars)
        {
            item.SetActive(state);
        }

        if (state == true)
        {
            foreach (var item in OnlyEnable)
            {
                item.SetActive(true);
            }
        }
    }

    public override void Init()
    {
        base.Init();
        StartCoroutine(Dialog());

        pokeButton.WhenSelect.AddListener(() =>
        {
            pokeButton.gameObject.SetActive(false);
            StartCoroutine(FinishCoroutine());

        });

        EnableAuxiliars(true);
    }

    private IEnumerator FinishCoroutine()
    {
        if (FinalAppear)
            FinalAppear.SetActive(true);

        foreach (var item in finalDialogAudioclips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }
        yield return new WaitForSeconds(delay);

        if (PanelCanvas)
            PanelCanvas.enabled = false;

        OnFinish?.Invoke();

    }

    private IEnumerator Dialog()
    {
        if (PanelCanvas)
            PanelCanvas.enabled = true;
        foreach (var item in audioClips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }
        pokeButton.gameObject.SetActive(true);
    }
}
