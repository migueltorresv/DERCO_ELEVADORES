using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractionCounter : MonoBehaviour
{
    [SerializeField] private int _maxCount;
    [SerializeField] private UnityEvent OnCountReached;

    private int _count = 0;
    private bool _isCountReached = false;

    public void Add()
    {
        if (_isCountReached)
            return;
        
        _count++;
        if (_count >= _maxCount)
        {
            OnCountReached?.Invoke();
            _isCountReached = true;
        }
    }

    public void Remove()
    {
        if (_count <= 0)
            return;
        _count--;
    }
}
