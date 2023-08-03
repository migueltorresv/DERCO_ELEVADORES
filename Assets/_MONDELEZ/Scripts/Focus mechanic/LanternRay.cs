using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LanternRay : MonoBehaviour
{
    public Transform origin;
    public Transform direction;
    public RaycastHit raycastHit;
    private FocusObjective currentObjective;

    // Update is called once per frame
    void Update()
    {
        if (Physics.Raycast(origin.position, direction.forward, out raycastHit, 100))
        {
            if (raycastHit.collider.gameObject.TryGetComponent<FocusObjective>(out var objective))
            {
                if (objective.tag == "focusLantern")
                {
                    currentObjective = objective;
                    currentObjective.FocusState(true);
                }

            }
            else
            {
                if (currentObjective)
                {
                    currentObjective.Restart();
                    currentObjective = null;

                }
            }
        }
        else
        {
            if (currentObjective)
            {
                currentObjective.Restart();
                currentObjective = null;

            }
        }
    }
}
