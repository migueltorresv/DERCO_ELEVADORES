using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class StartDelayTime : MonoBehaviour
{
    [SerializeField] private UnityEvent OnStarted;
     private void Start()
     {
         OnStarted?.Invoke();
     }
 }
