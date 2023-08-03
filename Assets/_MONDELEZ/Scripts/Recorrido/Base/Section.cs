using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public abstract class Section : MonoBehaviour
{
    public ModuleManager moduleManager;
    public UnityAction OnFinish;
    public bool isLightsOff = false;
    // public bool isStay = false;

    public virtual void Setup(ModuleManager moduleManager)
    {
        this.moduleManager = moduleManager;
    }
    public virtual void Init()
    {
        moduleManager.LightsOff(isLightsOff);
    }
    public abstract void ForceFinish();
}
