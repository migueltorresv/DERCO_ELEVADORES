using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class HideHead : MonoBehaviour
{
    public List<MeshRenderer> HideObjects;
    public List<Color> initialColors;
    public float alphaModifier;
    public GameObject NormalModel;
    public GameObject TransparentModel;

    private void Awake()
    {
        for (int i = 0; i < HideObjects.Count; i++)
        {
            initialColors.Add(HideObjects[i].material.GetColor("_BaseColor"));
        }

        if (NormalModel && TransparentModel)
        {
            NormalModel.SetActive(true);
            TransparentModel.SetActive(false);
        }

        Hide(true);
    }

    private void Hide(bool state)
    {
        if (state)
        {
            if (NormalModel)
            {
                NormalModel.SetActive(false);
            }
            if (TransparentModel)
            {
                TransparentModel.SetActive(true);
            }

            for (int i = 0; i < HideObjects.Count; i++)
            {
                Color color;
                if (initialColors[i] != null)
                {
                    color = new Color(initialColors[i].r, initialColors[i].g, initialColors[i].b, alphaModifier);
                    // HideObjects[i].material.SetColor("_BaseColor", color);
                    // HideObjects[i].material.DOColor(color, 4);
                    HideObjects[i].material.DOFade(alphaModifier, 4);
                }

            }


        }
        else
        {
            for (int i = 0; i < HideObjects.Count; i++)
            {
                Color color;
                if (initialColors[i] != null)
                {
                    color = initialColors[i];
                    HideObjects[i].material.SetColor("_BaseColor", color);
                }
                // HideObjects[i].material.DOColor(color, 4).onComplete += () =>
                // {
                //     NormalModel.SetActive(true);
                //     TransparentModel.SetActive(false);
                // };
            }
        }
    }

    private void OnEnable()
    {
        Hide(true);
    }

    // private void OnTriggerEnter(Collider other)
    // {
    //     if (other.CompareTag("MainCamera"))
    //     {
    //         Hide(true);
    //     }
    // }

    // private void OnTriggerExit(Collider other)
    // {
    //     if (other.CompareTag("MainCamera"))
    //     {
    //         Hide(false);
    //     }
    // }
}
