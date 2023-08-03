using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SprayAnimSection : Section
{
    public AudioSource audioSource;
    public List<AudioClip> audioClips;
    public Animator anim;
    public FaderMaterial faderMaterial;
    public List<GameObject> OnlyDisable;
    public List<GameObject> auxiliars;
    public Canvas PanelCanvas;

    public SprayObjective sprayObjective;
    public GameObject SprayObject;
    public TriggerAction triggerAction;
    public Color normalColor;
    public Color triggerColor;
    public Color ActionColor;

    private Vector3 intialPos;
    private Quaternion intialRot;

    public bool isTriggerObj;
    public int objectiveCountSprays;
    public int countSprays;

    public TextMeshProUGUI countSpraysText;
    public float delay;

    private IEnumerator ShowCouroutine()
    {
        anim.Play("unrot");
        faderMaterial.Hide(0);
        yield return new WaitForSeconds(2);
        faderMaterial.Show(4);
    }

    public override void ForceFinish()
    {
        EnableAuxiliars(false);
        countSprays = 0;
        countSpraysText.text = countSprays + "/" + objectiveCountSprays;
        sprayObjective.meshRenderer.material.SetColor("_BaseColor", normalColor);
    }

    public override void Init()
    {
        base.Init();
        EnableAuxiliars(true);

        foreach (var item in OnlyDisable)
        {
            item.SetActive(false);
        }
        anim.Play("rot");

        StartCoroutine(Dialog());
    }

    private void EnableAuxiliars(bool state)
    {
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

        countSprays = 0;
        countSpraysText.text = countSprays + "/" + objectiveCountSprays;
        sprayObjective.meshRenderer.material.SetColor("_BaseColor", normalColor);

        intialPos = SprayObject.transform.position;
        intialRot = SprayObject.transform.rotation;

        sprayObjective.OnTrigger += (state) =>
        {
            isTriggerObj = state;

            if (state)
            {
                sprayObjective.meshRenderer.material.SetColor("_BaseColor", triggerColor);
            }
            else
            {
                sprayObjective.meshRenderer.material.SetColor("_BaseColor", normalColor);
            }
        };

        triggerAction.OnAction += () =>
        {
            if (isTriggerObj)
            {
                countSprays++;
                countSpraysText.text = countSprays + "/" + objectiveCountSprays;

                if (objectiveCountSprays == countSprays)
                {
                    sprayObjective.gameObject.SetActive(false);
                    StartCoroutine(FinishCoroutine());
                }
            }
        };

        OnFinish += () =>
        {
            Debug.LogError("SPRAY APLICADO CORRECTAMENTE");
        };
    }

    private IEnumerator FinishCoroutine()
    {
        StartCoroutine(ShowCouroutine());
        yield return new WaitForSeconds(delay);
        OnFinish?.Invoke();
    }

    private IEnumerator Dialog()
    {
        foreach (var item in audioClips)
        {
            audioSource.clip = item;
            audioSource.Play();
            yield return new WaitForSeconds(item.length);
            audioSource.Stop();
        }
    }
}
