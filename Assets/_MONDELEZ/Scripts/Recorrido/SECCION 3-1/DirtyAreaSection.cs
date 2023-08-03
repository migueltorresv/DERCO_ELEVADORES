using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DirtyAreaSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public DirtyArea dirtyArea;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);


        dirtyArea.OnComplete += () =>
        {
            StartCoroutine(FinisCoroutine());
        };

        EnableAuxiliars(false);
    }

    public override void Init()
    {
        base.Init();
        EnableAuxiliars(true);
    }

    public override void ForceFinish()
    {
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
