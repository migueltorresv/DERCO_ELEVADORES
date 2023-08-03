using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Autohand;

public class AirGun : MonoBehaviour
{
    public Rigidbody _PrefabBullet;
    public float forceShot = 20;
    public Transform raycastOrigin;
    // public HandTouchButton handTouchButton;
    public TriggerAction triggerAction;
    public ParticleSystem shotAirVFX;
    public LayerMask layerMask;
    public RaycastHit hit;
    // Start is called before the first frame update
    void Start()
    {
        triggerAction.OnAction += () =>
        {
            shotAirVFX.Play();

            if (hit.transform)
            {
                if (hit.transform.TryGetComponent<Rigidbody>(out Rigidbody rbd))
                {
                    //rbd.AddForce(-hit.normal * forceShot, ForceMode.VelocityChange);

                    Debug.Log("DISPARA A LA RIGIDBODY" + rbd.name);
                }
                else
                {
                    Debug.Log("dispara a la nada sin rbd " + hit.transform.name);
                }

                ShotAirBullet();

                Debug.LogError("COLLIDER DETECTADO " + hit.transform.name);
            }
        };
        
        // handTouchButton.OnPressed.AddListener((hand) =>
        // {
        //     shotAirVFX.Play();

        //     if (hit.transform)
        //     {
        //         if (hit.transform.TryGetComponent<Rigidbody>(out Rigidbody rbd))
        //         {
        //             //rbd.AddForce(-hit.normal * forceShot, ForceMode.VelocityChange);

        //             Debug.Log("DISPARA A LA RIGIDBODY" + rbd.name);
        //         }
        //         else
        //         {
        //             Debug.Log("dispara a la nada sin rbd " + hit.transform.name);
        //         }

        //         ShotAirBullet();

        //         Debug.LogError("COLLIDER DETECTADO " + hit.transform.name);
        //     }

        // });
    }

    private void ShotAirBullet()
    {
        _PrefabBullet.gameObject.SetActive(true);
        _PrefabBullet.transform.position = raycastOrigin.transform.position;
        _PrefabBullet.transform.rotation = raycastOrigin.transform.rotation;
        _PrefabBullet.velocity = Vector3.zero;
        _PrefabBullet.angularVelocity = Vector3.zero;
        _PrefabBullet.AddForce(raycastOrigin.forward * forceShot, ForceMode.VelocityChange);
    }

    private void Update()
    {
        Physics.Raycast(raycastOrigin.position, raycastOrigin.forward, out hit, 10, layerMask);
        Debug.DrawRay(raycastOrigin.position, raycastOrigin.forward * 10);

        if (Input.GetKeyDown(KeyCode.Space))
        {
            shotAirVFX.Play();
            ShotAirBullet();
        }
    }
}
