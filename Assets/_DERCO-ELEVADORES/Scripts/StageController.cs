using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class StageController : MonoBehaviour
{
    
    [SerializeField] private UnityEvent OnIntroducionEnabled;
    [SerializeField] private UnityEvent OnElevadorDosFormacionEnabled;
    [SerializeField] private UnityEvent OnElevadorCuatroFormacionEnabled;
    [SerializeField] private UnityEvent OnElevadorDosEvaluacionEnabled;
    [SerializeField] private UnityEvent OnElevadorCuatroEvaluacionEnabled;

    private int _indexStage;

    public int IndexStage
    {
        get => _indexStage;
        set
        {
            _indexStage = value;
            GameManager.Instance.IndexStage = _indexStage;
        }
    }
    private void Start()
    {
        GameManager.Instance.StageController = this;
    }

    public void EnableIntroduccion()
    {
        OnIntroducionEnabled?.Invoke();
    }

    public void EnableElevadorDosFormacion()
    {
        OnElevadorDosFormacionEnabled?.Invoke();
    }

    public void EnableElevadorCuatroFormacion()
    {
        OnElevadorCuatroFormacionEnabled?.Invoke();
    }
    
    public void EnableElevadorDosEvaluacion()
    {
        OnElevadorDosEvaluacionEnabled?.Invoke();
    }

    public void EnableElevadorCuatroEvaluacion()
    {
        OnElevadorCuatroEvaluacionEnabled?.Invoke();
    }
}
