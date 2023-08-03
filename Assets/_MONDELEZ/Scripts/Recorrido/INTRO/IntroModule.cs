using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroModule : Module
{
    private void SetupSections()
    {
        int i = 0;
        m_Sections[i].Init();
        foreach (var item in m_Sections)
        {
            item.OnFinish += () =>
            {
                i++;
                if (i < m_Sections.Count)
                    m_Sections[i].Init();
                else
                {
                    ForceFinish();
                    OnFinish?.Invoke();
                }

                // if (i == 3)
                // {
                //     moduleManager.LightsOff(false);
                // }
                // else
                // {
                //     moduleManager.LightsOff(true);
                // }
            };
        }
    }

    public override void Init()
    {
        base.Init();
        SetupSections();
    }

    public override void ForceFinish()
    {
        base.ForceFinish();
        foreach (var item in m_Sections)
        {
            item.ForceFinish();
        }
    }

}
