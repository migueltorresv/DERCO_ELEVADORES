using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PathSection : Section
{
    [Header("Path")]
    public Transform playerTransform;
    public List<Transform> pathPoints;

    [Header("General")]
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;
    public AudioSource audioSource;
    public List<AudioClip> audioClips;
    public float delayTime;
    public float delayFinal;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);
        playerTransform = moduleManager.MainPlayer.transform;
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

        if (state == false)
        {
            foreach (var item in OnlyDisable)
            {
                item.SetActive(state);
            }
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
    }

    private IEnumerator Path()
    {
        float duration = 0;

        foreach (var item in audioClips)
        {
            duration += item.length;
        }
        duration += delayTime;

        float durationPerPath = duration / (pathPoints.Count);

        for (int i = 0; i < pathPoints.Count; i++)
        {
            playerTransform.DOMove(pathPoints[i].position, durationPerPath);
            yield return new WaitForSeconds(durationPerPath);

            pathPoints[i].position = playerTransform.position;
        }

    }

    private IEnumerator Dialog()
    {
        EnableAuxiliars(true);
        StartCoroutine(Path());

        foreach (var item in audioClips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }

        yield return new WaitForSeconds(delayTime + delayFinal);

        EnableAuxiliars(false);
        OnFinish?.Invoke();
    }
}
