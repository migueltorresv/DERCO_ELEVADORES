using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GameManager : MonoBehaviour
{
    private static GameManager _instance;
    [SerializeField] private bool hasGameStartedFirstTime;
    public StageController StageController;

    private int _indexStage;

    public int IndexStage
    {
        get => _indexStage;
        set => _indexStage = value;
    }
    public static GameManager Instance
    {
        get
        {
            return _instance;
        }
    }

    public bool HasGameStartedFirstTime
    {
        get => hasGameStartedFirstTime;
        set => hasGameStartedFirstTime = value;
    }
    private void Awake()
    {
        CheckGameManagerIsInTheScene();
    }

    private void CheckGameManagerIsInTheScene()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(this);
        }
    }

    public void RunStage()
    {
        StartCoroutine(RunStageRoutine());
    }

    private IEnumerator RunStageRoutine()
    {
        yield return new WaitForSeconds(0);
        switch (IndexStage)
        {
            case 0:
                EnableIntroduccion();
                break;
            case 1:
                EnableElevadorDosFormacion();
                break;
            case 2:
                EnableElevadorCuatroFormacion();
                break;
            case 3:
                EnableElevadorDosEvaluacion();
                break;
            case 4:
                EnableElevadorCuatroEvaluacion();
                break;
        }
    }

    public void EnableIntroduccion()
    {
        StageController.EnableIntroduccion();
    }

    public void EnableElevadorDosFormacion()
    {
        StageController.EnableElevadorDosFormacion();
    }

    public void EnableElevadorCuatroFormacion()
    {
        StageController.EnableElevadorCuatroFormacion();
    }
    
    public void EnableElevadorDosEvaluacion()
    {
        StageController.EnableElevadorDosEvaluacion();
    }

    public void EnableElevadorCuatroEvaluacion()
    {
        StageController.EnableElevadorCuatroEvaluacion();
    }
}
