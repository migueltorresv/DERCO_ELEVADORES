using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HandAppSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public List<TriggerDetector> triggerDetectors;
    public int countTriggers;
    public GameObject GrasaFeedback;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        foreach (var item in triggerDetectors)
        {
            item.OnTrigger += (state) =>
            {
                if(state)
                {
                    item.gameObject.SetActive(false);
                    countTriggers++;
                    if(countTriggers ==triggerDetectors.Count)
                    {
                        GrasaFeedback.SetActive(false);
                        StartCoroutine(FinisCoroutine());
                    }
                }
            };
        }

        EnableAuxiliars(false);
        // GrasaFeedback = moduleManager.handGrasa;
    }

    public override void Init()
    {
        base.Init();
        GrasaFeedback.SetActive(true);
        EnableAuxiliars(true);
    }

    public override void ForceFinish()
    {
        gameObject.SetActive(false);
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
    }

    private IEnumerator FinisCoroutine()
    {
        yield return new WaitForSeconds(delay);
        OnFinish?.Invoke();
    }
}
