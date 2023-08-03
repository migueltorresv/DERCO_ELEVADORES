using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class FaderMaterial : MonoBehaviour
{
    public List<MeshRenderer> HideObjects;
    public List<Color> initialColors;
    public float alphaModifier;
    // Start is called before the first frame update

    public void Hide(float time)
    {
        StartCoroutine(HideCoroutine(time));
    }

    public void Show(float time)
    {
        StartCoroutine(ShowCoroutine(time));
    }

    private IEnumerator HideCoroutine(float time)
    {
        for (int i = 0; i < HideObjects.Count; i++)
        {
            // Color color = new Color(initialColors[i].r, initialColors[i].g, initialColors[i].b, alphaModifier);
            HideObjects[i].material.DOFade(alphaModifier, time);
        }
        yield return new WaitForSeconds(time);

        // for (int i = 0; i < HideObjects.Count; i++)
        // {
        //     Color color = new Color(initialColors[i].r, initialColors[i].g, initialColors[i].b, alphaModifier);
        //     HideObjects[i].material.SetColor("_BaseColor", color);
        // }

    }

    private IEnumerator ShowCoroutine(float time)
    {
        for (int i = 0; i < HideObjects.Count; i++)
        {
            // Color color = new Color(initialColors[i].r, initialColors[i].g, initialColors[i].b, alphaModifier);
            HideObjects[i].material.DOFade(1, time);
        }
        yield return new WaitForSeconds(time);

    }
}
