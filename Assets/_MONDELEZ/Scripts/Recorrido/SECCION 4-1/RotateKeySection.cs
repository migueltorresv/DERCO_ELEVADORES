using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RotateKeySection : Section
{
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public KeyGrabRotation keyGrabRotation;
    public float keyAngle;
    public bool keyIsOpen;
    public UnityAction<bool> OpenKey;
    public FocusObjective focusObjective;
    public float delay = 1;

    public override void Setup(ModuleManager moduleManager)
    {
        base.Setup(moduleManager);

        OpenKey += (state) =>
        {
            if (state)
            {
                StartCoroutine(FinisCoroutine());
            }
        };

        EnableAuxiliars(false);

        // keyGrabRotation.RightInteractor = moduleManager.RightInteractor;
        // keyGrabRotation.LeftInteractor = moduleManager.LeftInteractor;
    }

    void Update()
    {
        keyAngle = keyGrabRotation.angleY;

        float _tempAngle = Mathf.Clamp(keyAngle, 0, 360);
        float _anglePercent = _tempAngle / 360;
        focusObjective.focusCicle.fillAmount = _anglePercent;
        if (keyAngle > 355 && !keyIsOpen)
        {
            keyIsOpen = true;
            OpenKey?.Invoke(keyIsOpen);
        }
        else
        {
            keyIsOpen = false;
            OpenKey?.Invoke(keyIsOpen);
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
