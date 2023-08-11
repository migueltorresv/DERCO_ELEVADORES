using System;
using System.Collections;
using System.Collections.Generic;
using Oculus.Interaction;
using UnityEngine;

[RequireComponent(typeof(InteractableUnityEventWrapper))]
public class DebugHandGrabInteractable : MonoBehaviour
{
    private InteractableUnityEventWrapper _interactableUnityEvent;

    private void Start()
    {
        _interactableUnityEvent = GetComponent<InteractableUnityEventWrapper>();
    }

    [ContextMenu(nameof(InvokeSelectedEvent))]
    public void InvokeSelectedEvent()
    {
        _interactableUnityEvent.WhenSelect.Invoke();
    }

    [ContextMenu(nameof(InvokeUnselectedEvent))]
    public void InvokeUnselectedEvent()
    {
        _interactableUnityEvent.WhenUnselect.Invoke();
    }
}
