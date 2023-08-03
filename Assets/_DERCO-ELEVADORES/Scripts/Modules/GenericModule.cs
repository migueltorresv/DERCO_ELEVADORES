using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenericModule : Module
{
    private void SetupSections()
    {
        int i = 0;
        m_Sections[i].Init();
        foreach (var item in m_Sections)
        {
            item.OnFinish += () =>
            {
                item.ForceFinish();
                i++;
                if (i < m_Sections.Count)
                    m_Sections[i].Init();
                else
                {
                    // ForceFinish();
                    // OnFinish?.Invoke();
                    Finish();
                }

                // if (i == 1)
                // {
                //     moduleManager.LightsOff(false);
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