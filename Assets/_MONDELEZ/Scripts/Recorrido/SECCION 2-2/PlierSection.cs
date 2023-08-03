using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlierSection : Section
{

    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public TriggerDetector triggerDetector;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);


        triggerDetector.OnTrigger += (state) =>
        {
            if (state)
            {
                triggerDetector.gameObject.SetActive(false);
                StartCoroutine(FinisCoroutine());
            }
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
        yield return new WaitForSeconds(2);
        OnFinish?.Invoke();
    }
}
