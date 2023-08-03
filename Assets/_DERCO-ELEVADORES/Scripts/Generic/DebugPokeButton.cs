using System;
using Oculus.Interaction;
using UnityEngine;

[RequireComponent(typeof(PointableUnityEventWrapper))]
public class DebugPokeButton : MonoBehaviour
{
    private PointableUnityEventWrapper _pointableUnityEvent;
    private void Start()
    {
        _pointableUnityEvent = GetComponent<PointableUnityEventWrapper>();
    }

    [ContextMenu(nameof(InvokeReleasedEvent))]
    public void InvokeReleasedEvent()
    {
        _pointableUnityEvent.WhenRelease.Invoke();
    }
    
    [ContextMenu(nameof(InvokeSelectdEvent))]
    public void InvokeSelectdEvent()
    {
        _pointableUnityEvent.WhenSelect.Invoke();
    }
}
