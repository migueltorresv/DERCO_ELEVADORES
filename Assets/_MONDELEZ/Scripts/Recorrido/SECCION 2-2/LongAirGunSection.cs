using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LongAirGunSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public LongeAirGun longeAirGun;
    public TriggerDetector triggerDetector;
    public Transform airGunTransform;
    public Transform gunRef;
    public FocusObjective focusObjective;
    public bool wirePlugged;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        triggerDetector.OnTrigger += (state) =>
        {
            if (state)
            {
                wirePlugged = true;
            }
            else
            {
                wirePlugged = false;
            }
        };

        longeAirGun.OpenKey += (state) =>
        {
            if (state)
            {
                if (wirePlugged)
                {
                    focusObjective.FocusState(true);
                }
            }
            else
            {
                focusObjective.FocusState(false);
                focusObjective.Restart();
            }
        };

        focusObjective.OnComplete += () =>
        {
            StartCoroutine(FinisCoroutine());
        };

        EnableAuxiliars(false);
    }

    private void Update()
    {
        if (wirePlugged)
        {
            airGunTransform.position = gunRef.position;
            airGunTransform.rotation = gunRef.rotation;
        }
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
