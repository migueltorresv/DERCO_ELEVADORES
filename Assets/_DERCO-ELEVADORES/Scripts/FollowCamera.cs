using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour
{
    [SerializeField] private Transform cameraTarget;
    [SerializeField] private float speedRotation = 0.5f;

    private void Update()
    {
        RotateToCamera();
    }

    private void RotateToCamera()
    {
        if (cameraTarget != null)
        {
            Vector3 directionToCamera = cameraTarget.position - transform.position;
            Quaternion targetRotation = Quaternion.LookRotation(directionToCamera, Vector3.up);
            transform.rotation = Quaternion.Slerp(
                                    transform.rotation, 
                                    Quaternion.Euler(0f, targetRotation.eulerAngles.y, 0f), 
                                    speedRotation * Time.deltaTime);
        }
    }
}
