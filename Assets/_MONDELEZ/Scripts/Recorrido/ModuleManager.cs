using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Oculus.Interaction.HandGrab;
public class ModuleManager : MonoBehaviour
{
    // public HandGrabInteractor RightInteractor;
    // public HandGrabInteractor LeftInteractor;
    public GameObject MainPlayer;
    public List<Module> m_ModulesPrefabs;
    public List<Module> m_Modules;
    public List<Transform> modulePositions;
    public UnityAction OnFinish;
    public Color NormalColor;
    public Color ChangeColor;
    public int currentCount;
    public int testIndex;

    private void Start()
    {
        NormalColor = RenderSettings.ambientLight;
        // LightsOff(true);

        for (int i = 0; i < m_ModulesPrefabs.Count; i++)
        {
            var module = Instantiate(m_ModulesPrefabs[i], modulePositions[i].position, modulePositions[i].rotation);
            module.Setup(this);
            m_Modules.Add(module);
        }

        StartModule();


    }

    public void LightsOff(bool state)
    {
        if (state)
        {
            // RenderSettings.ambientLight = ChangeColor;
            // RenderSettings.ambientIntensity = 0;
        }
        else
        {
            // RenderSettings.ambientLight = NormalColor;
            // RenderSettings.ambientIntensity = 0;
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            GoToModule(testIndex);
        }
    }

    private void StartModule()
    {
        currentCount = 0;
        m_Modules[currentCount].Init();
        foreach (var item in m_Modules)
        {
            item.OnFinish += () =>
            {
                item.gameObject.SetActive(false);
                currentCount++;
                if (currentCount < m_Modules.Count)
                    m_Modules[currentCount].Init();
                else
                {
                    OnFinish?.Invoke();
                }
            };
        }
    }

    public void GoToModule(int index)
    {
        // finalMessage.SetActive(false);
        // if (m_Modules[currentCount] != null)
        {
            Destroy(m_Modules[currentCount].gameObject);
            var previousMod = Instantiate(m_ModulesPrefabs[currentCount], modulePositions[currentCount].position, modulePositions[currentCount].rotation);
            previousMod.Setup(this);
            m_Modules[currentCount] = previousMod;
        }

        currentCount = index;
        var module = Instantiate(m_ModulesPrefabs[index], modulePositions[index].position, modulePositions[index].rotation);
        module.Setup(this);
        module.Init();
        module.OnFinish += () =>
        {
            currentCount++;
            if (currentCount < m_Modules.Count)
                m_Modules[currentCount].Init();
            else
            {
                OnFinish?.Invoke();
                currentCount = 0;
            }
        };

        if (m_Modules[index] != null)
            Destroy(m_Modules[index].gameObject);

        m_Modules[index] = module;
    }
}
