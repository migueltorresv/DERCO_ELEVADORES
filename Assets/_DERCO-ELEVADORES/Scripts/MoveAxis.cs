using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveAxis : MonoBehaviour
{
    [SerializeField] private float _movementSpeed = 1;
    [SerializeField] private float _bounceTop = 1.2f;
    [SerializeField] private float _bounceBotton = 0;
    private float _amount = 0;

    public float Amount
    {
        get => _amount;
        set => _amount = value;
    }

    private void Update()
    {
        MoveAxisY();
    }

    private void MoveAxisY()
    {
        

        Vector3 direction = new Vector3(0, _amount, 0);
        Vector3 velocity = direction * _movementSpeed;
        transform.Translate(velocity * Time.deltaTime);
        
        //limit movement
        Vector3 position = transform.localPosition;
        position.y = Mathf.Clamp(position.y, _bounceBotton, _bounceTop);
        transform.localPosition = position;
    }
}
