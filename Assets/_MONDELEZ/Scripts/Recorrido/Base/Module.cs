using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Oculus.Interaction;

public abstract class Module : MonoBehaviour
{
    public int currentIndex;
    public List<GameObject> ModuleElements;
    public ModuleManager moduleManager;
    public GameObject Player;
    public List<Section> m_Sections;
    public UnityAction OnFinish;
    public PointableUnityEventWrapper pokeButton;

    public void Setup(ModuleManager moduleManager)
    {
        this.moduleManager = moduleManager;

        foreach (var item in m_Sections)
        {
            item.Setup(moduleManager);
        }

        foreach (var item in ModuleElements)
        {
            item.SetActive(false);
        }
    }

    public virtual void Init()
    {
        gameObject.SetActive(true);
        moduleManager.MainPlayer.transform.position = Player.transform.position;
        moduleManager.MainPlayer.transform.rotation = Player.transform.rotation;

        foreach (var item in ModuleElements)
        {
            item.SetActive(true);
        }

        // moduleManager.LightsOff(true);

        if (pokeButton)
        {
            pokeButton.WhenSelect.AddListener(() =>
            {
                pokeButton.gameObject.SetActive(false);
                ForceFinish();
                OnFinish?.Invoke();
            });

            pokeButton.gameObject.SetActive(false);
        }

    }
    public virtual void ForceFinish()
    {
        foreach (var item in ModuleElements)
        {
            item.SetActive(false);
        }
    }


    public virtual void Finish()
    {
        // ForceFinish();
        if (pokeButton)
        {
            pokeButton.gameObject.SetActive(true);
        }
        else
        {
            ForceFinish();
            OnFinish?.Invoke();
        }


    }
}
