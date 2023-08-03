using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHeadRay : MonoBehaviour
{
    public Transform origin;
    public Transform direction;
    public RaycastHit raycastHit;
    private FocusObjective currentObjective;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Physics.Raycast(origin.position, direction.forward, out raycastHit, 100))
        {
            if (raycastHit.collider.gameObject.TryGetComponent<FocusObjective>(out var objective))
            {
                if (objective.tag == "focusHead")
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
