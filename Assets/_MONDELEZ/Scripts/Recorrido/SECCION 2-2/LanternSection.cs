using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LanternSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public List<FocusObjective> focusObjectives;
    public int focusCount;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        foreach (var item in focusObjectives)
        {
            item.OnComplete += () =>
            {
                focusCount++;
                if (focusCount == focusObjectives.Count)
                {
                    StartCoroutine(FinisCoroutine());
                };
            };
        }

        EnableAuxiliars(false);
    }

    public override void Init()
    {
        base.Init();
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
