using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MoveAxis : MonoBehaviour
{
    [SerializeField] private float _movementSpeed = 1;
    [SerializeField] private float _bounceTop = 1.2f;
    [SerializeField] private float _bounceBotton = 0;
    [SerializeField] private UnityEvent OnValueAmountChanged;
    [SerializeField] private UnityEvent OnValueAmountNoChanged;
    
    private float _amount = 0;
    private bool _hasSounded;
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
        SoundMovement(velocity.magnitude);
        //limit movement
        Vector3 position = transform.localPosition;
        position.y = Mathf.Clamp(position.y, _bounceBotton, _bounceTop);
        transform.localPosition = position;
        
    }

    private void SoundMovement(float magnitude)
    {
        float absMagnitude = Mathf.Abs(magnitude);
        if (absMagnitude > 0 && !_hasSounded)
        {
            OnValueAmountChanged?.Invoke();
            _hasSounded = true;
        }
        else if (absMagnitude <= 0 && _hasSounded)
        {
            OnValueAmountNoChanged?.Invoke();
            _hasSounded = false;
        }
    }

    [ContextMenu(nameof(RestartAxisY))]
    public void RestartAxisY() => transform.localPosition = Vector3.zero;
    
}
