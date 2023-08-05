using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAxis : MonoBehaviour
{
    [SerializeField] private float _movementSpeed = 1;
    private float _amount = 0;

    public float Amount
    {
        get => _amount;
        set => _amount = value;
    }

    private void Update()
    {
        Vector3 direction = new Vector3(0, _amount, 0);
        Vector3 velocity = direction * _movementSpeed;
        transform.Translate(velocity * Time.deltaTime);
    }
}
