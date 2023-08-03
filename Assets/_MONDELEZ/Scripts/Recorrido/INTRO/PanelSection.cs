using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> OnlyEnable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;
    public AudioSource audioSource;
    public List<AudioClip> audioClips;
    public float delayTime;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);
        EnableAuxiliars(false);
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

    private void DisableOnlyDisable()
    {
        foreach (var item in OnlyDisable)
        {
            item.SetActive(false);
        }
    }

    public override void ForceFinish()
    {
        StopAllCoroutines();

        EnableAuxiliars(false);
        audioSource.Stop();
    }

    public override void Init()
    {
        base.Init();
        StartCoroutine(Dialog());
        DisableOnlyDisable();
    }

    private IEnumerator Dialog()
    {
        EnableAuxiliars(true);
        foreach (var item in audioClips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }

        yield return new WaitForSeconds(delayTime);

        EnableAuxiliars(false);
        OnFinish?.Invoke();
    }
}
