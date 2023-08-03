using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RotateCylinderSection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public Transform RightCylinder;
    public Transform LeftCylinder;
    public float angleRight;
    public float angleLeft;
    public bool rightOpen;
    public bool leftOpen;

    public UnityAction<bool> OnRight;
    public UnityAction<bool> OnLeft;


    public FocusObjective rightObjective;
    public FocusObjective leftObjective;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        OnRight += (state) =>
        {
            if (state)
            {
                if (leftOpen)
                {
                    StartCoroutine(FinisCoroutine());
                }
            }
        };

        OnLeft += (state) =>
        {
            if (state)
            {
                if (rightOpen)
                {
                    StartCoroutine(FinisCoroutine());
                }
            }
        };


        EnableAuxiliars(false);
    }

    void Update()
    {
        SideLeft();
        SideRight();
    }

    private void SideLeft()
    {
        angleLeft = LeftCylinder.localEulerAngles.z;

        // float _tempAngle = Mathf.Clamp(angleLeft, 0, 10);
        // float _anglePercent = _tempAngle / 10;
        // leftObjective.focusCicle.fillAmount = _anglePercent;
        if (angleLeft != 0 && !leftOpen)
        {
            leftOpen = true;
            OnLeft?.Invoke(leftOpen);
        }
    }

    private void SideRight()
    {
        angleRight = RightCylinder.localEulerAngles.z;

        // float _tempAngle = Mathf.Clamp(angleRight, 0, 10);
        // float _anglePercent = _tempAngle / 10;
        // rightObjective.focusCicle.fillAmount = _anglePercent;
        if (angleRight != 0 && !rightOpen)
        {
            rightOpen = true;
            OnRight?.Invoke(rightOpen);
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
