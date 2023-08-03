using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Autohand;
public class GrabAction : MonoBehaviour
{
    public Collider grabCol;
    public Collider actionCol;
    public Grabbable grabbable;
    public ParticleSystem vfx;
    public HandTriggerAreaEvents htaEvent;

    public Animator LeftHand;
    public Animator RightHand;

    public bool isGrab;
    public Hand currentHandGrab;
    public Hand currentHandAction;

    // Start is called before the first frame update
    void Start()
    {
        // actionCol.enabled = false;
        htaEvent.gameObject.SetActive(false);
        grabbable.onGrab.AddListener((hand, grab) =>
        {
            isGrab = true;
            currentHandGrab = hand;
            // actionCol.enabled = true;
            htaEvent.gameObject.SetActive(true);
        });

        grabbable.onRelease.AddListener((hand, grab) =>
        {
            isGrab = false;
            if (currentHandAction)
            {
                //currentHandAction.HandIgnoreCollider(grabCol, false);
                currentHandAction.mesh.enabled = true;

                if (currentHandAction.left)
                {
                    LeftHand.gameObject.SetActive(false);
                }
                else
                {
                    RightHand.gameObject.SetActive(false);
                }

                currentHandAction = null;
            }
            // actionCol.enabled = false;
            htaEvent.gameObject.SetActive(false);
            currentHandGrab = null;
        });

        htaEvent.HandEnter.AddListener((hand) =>
        {
            if (isGrab && currentHandGrab != hand)
            {
                currentHandAction = hand;
                //hand.HandIgnoreCollider(grabCol, true);
                hand.mesh.enabled = false;
                if (hand.left)
                {
                    LeftHand.gameObject.SetActive(true);
                }
                else
                {
                    RightHand.gameObject.SetActive(true);
                }
            }

        });

        htaEvent.HandExit.AddListener((hand) =>
        {
            if (isGrab && currentHandGrab != hand)
            {
                //hand.HandIgnoreCollider(grabCol, false);
                hand.mesh.enabled = true;
                if (hand.left)
                {
                    LeftHand.gameObject.SetActive(false);
                }
                else
                {
                    RightHand.gameObject.SetActive(false);
                }

                currentHandAction = null;
            }
        });

        htaEvent.HandGrab.AddListener((hand) =>
        {
            if (isGrab && currentHandGrab != hand)
                if (!hand.IsGrabbing())
                {
                    vfx.Play();
                    if (hand.left)
                    {
                        LeftHand.gameObject.SetActive(true);
                        LeftHand.Play("rightAction");
                    }
                    else
                    {
                        RightHand.gameObject.SetActive(true);
                        RightHand.Play("rightAction");
                    }
                }



        });
    }
}
