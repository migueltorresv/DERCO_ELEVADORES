using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Autohand;
using UnityEngine.Events;

public class PlacePointInteractor : MonoBehaviour
{
    public HandTouchButton handTouchButton;
    public Grabbable grabbable;
    public Collider col;
    public MeshRenderer meshRendererGrab;
    public GameObject replaceObj;
    public PlacePoint placePoint;
    // Start is called before the first frame update
    void Start()
    {
        handTouchButton.gameObject.SetActive(false);

        placePoint.OnPlace.AddListener((pp, grab) =>
        {

            ActiveGrab(false);

            replaceObj.SetActive(true);
            handTouchButton.gameObject.SetActive(true);
        });

        handTouchButton.OnPressed.AddListener((hand) =>
        {
            handTouchButton.gameObject.SetActive(false);
            ActiveGrab(true);
            replaceObj.SetActive(false);
        });
    }

    private void ActiveGrab(bool state)
    {
        col.enabled = state;
        meshRendererGrab.enabled = state;
        // grabbable.enabled = state;
    }
}
