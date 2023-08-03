using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SprayCookieSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public List<SprayObjective> sprayObjectives;
    public GameObject SprayObject;
    public TriggerAction triggerAction;
    public Color normalColor;
    public Color triggerColor;
    public Color ActionColor;

    private Vector3 intialPos;
    private Quaternion intialRot;

    public bool isTriggerObj;

    public int countObjectives;
    private SprayObjective currentObj;

    public override void ForceFinish()
    {
        gameObject.SetActive(false);
        EnableAuxiliars(false);


        foreach (var sprayObjective in sprayObjectives)
        {
            sprayObjective.meshRenderer.material.SetColor("_BaseColor", normalColor);
        }

    }

    public override void Init()
    {
        base.Init();
        EnableAuxiliars(true);

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
    }

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);
        EnableAuxiliars(false);

        foreach (var sprayObjective in sprayObjectives)
        {
            sprayObjective.meshRenderer.material.SetColor("_BaseColor", normalColor);
        }


        intialPos = SprayObject.transform.position;
        intialRot = SprayObject.transform.rotation;

        // foreach (var sprayObjective in sprayObjectives)
        // {
        //     sprayObjective.OnTrigger += (state) =>
        //     {
        //         isTriggerObj = state;
        //     };
        // }



        // triggerAction.OnAction += () =>
        // {
        //     HideCookie();
        // };

        OnFinish += () =>
        {
            Debug.LogError("SPRAY APLICADO CORRECTAMENTE");
        };
    }

    private void Update()
    {
        if(triggerAction.isTriggerFinger)
        {
            HideCookie();
        }
    }

    private IEnumerator ExplodeCookie(SprayObjective sprayObjective)
    {
        if (sprayObjective.anim)
            sprayObjective.anim.Play("explode");

        yield return new WaitForSeconds(0.1f);
        sprayObjective.gameObject.SetActive(false);
    }

    private void HideCookie()
    {
        foreach (var item in sprayObjectives)
        {
            if (item.isTrigger && item.gameObject.activeInHierarchy)
            {
                countObjectives++;
                StartCoroutine(ExplodeCookie(item));
            }
        }

        if (countObjectives == sprayObjectives.Count)
        {
            StartCoroutine(FinishCoroutine());
        }
    }

    private IEnumerator FinishCoroutine()
    {
        yield return new WaitForSeconds(1);
        OnFinish?.Invoke();
    }
}