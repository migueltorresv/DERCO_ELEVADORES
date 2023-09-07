using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class SceneManagerGame : MonoBehaviour
{
    [SerializeField] private UnityEvent OnGameStartedFirstTime;
    [SerializeField] private GameManager gameManager;
    
    private void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
        if (GameManager.Instance.HasGameStartedFirstTime)
        {
            OnGameStartedFirstTime?.Invoke();
            gameManager.RunStage();
        }
    }

    [ContextMenu(nameof(ResetScene))]
    public void ResetScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    
    
}
