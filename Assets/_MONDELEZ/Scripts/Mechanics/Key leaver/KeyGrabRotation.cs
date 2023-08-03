using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.Input;
using Oculus.Interaction.HandGrab;
public class KeyGrabRotation : MonoBehaviour
{
    public KeyLeaverTrigger keyLeaverTrigger;
    public HandGrabInteractor RightInteractor;
    public HandGrabInteractor LeftInteractor;
    public GameObject rotateArea;
    public Grabbable keyLevearGrab;
    public HandGrabInteractable rightInteractableGrab;
    public HandGrabInteractable leftInteractableGrab;
    public Grabbable keyLevearRotate;
    public HandGrabInteractable rightInteractableRotate;
    public HandGrabInteractable leftInteractableRotate;
    // public int identifier = -1;
    public bool leaveRotation;
    public bool isLeft;
    // public float maxAngle;
    public float angleY;

    // public bool onStay;
    // Start is called before the first frame update
    void Start()
    {
        keyLevearGrab.WhenPointerEventRaised += OnPointerEventGrab;
        keyLevearRotate.WhenPointerEventRaised += OnPointerEventRotate;

        rightInteractableGrab.WhenPointerEventRaised += (ev) =>
        {
            if (ev.Type == PointerEventType.Select)
                isLeft = false;
        };

        leftInteractableGrab.WhenPointerEventRaised += (ev) =>
        {
            if (ev.Type == PointerEventType.Select)
                isLeft = true;
        };

        rightInteractableRotate.WhenPointerEventRaised += (ev) =>
        {
            if (ev.Type == PointerEventType.Select)
                isLeft = false;
        };

        leftInteractableRotate.WhenPointerEventRaised += (ev) =>
        {
            if (ev.Type == PointerEventType.Select)
                isLeft = true;
        };

        keyLeaverTrigger.WhenTriggerEnter += (other) =>
        {
            if (!leaveRotation)
                if (other.gameObject == rotateArea)
                {

                    if (!isLeft)
                    {
                        RightInteractor.ForceRelease();
                        keyLevearRotate.gameObject.SetActive(true);
                        RightInteractor.ForceSelect(rightInteractableRotate);
                        keyLevearGrab.gameObject.SetActive(false);
                    }
                    else
                    {
                        LeftInteractor.ForceRelease();
                        keyLevearRotate.gameObject.SetActive(true);
                        LeftInteractor.ForceSelect(leftInteractableRotate);
                        keyLevearGrab.gameObject.SetActive(false);
                    }

                    // leaveRotation = true;
                }
        };

        keyLeaverTrigger.WhenTriggerExit += (other) =>
        {
            if (other.gameObject == rotateArea)
            {
                leaveRotation = false;
            }
        };
    }

    private void Update()
    {
        angleY = keyLevearRotate.transform.localEulerAngles.y;
    }

    private void OnPointerEventGrab(PointerEvent args)
    {
        switch (args.Type)
        {
            case PointerEventType.Select:
                Debug.LogError("SELECT");
                // leaveRotation = true;
                break;
            case PointerEventType.Unselect:
                Debug.LogError("UNSELECT");
                // leaveRotation = false;
                break;
            default:
                return;
        }
    }

    private void OnPointerEventRotate(PointerEvent args)
    {
        switch (args.Type)
        {
            case PointerEventType.Select:
                Debug.LogError("SELECT");
                if (leaveRotation)
                {
                    if (!isLeft)
                    {
                        RightInteractor.ForceRelease();
                        keyLevearRotate.gameObject.SetActive(false);

                        keyLevearGrab.gameObject.SetActive(true);
                        RightInteractor.ForceSelect(rightInteractableGrab);
                    }
                    else
                    {
                        LeftInteractor.ForceRelease();
                        keyLevearRotate.gameObject.SetActive(false);

                        keyLevearGrab.gameObject.SetActive(true);
                        LeftInteractor.ForceSelect(leftInteractableGrab);
                    }
                }
                break;
            case PointerEventType.Unselect:
                Debug.LogError("UNSELECT");
                leaveRotation = true;
                break;
            default:
                return;
        }
    }
}
