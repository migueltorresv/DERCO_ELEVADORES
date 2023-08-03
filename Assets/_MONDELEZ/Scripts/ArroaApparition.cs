using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArroaApparition : MonoBehaviour
{
    public float delay = 3;
    // Start is called before the first frame update
    IEnumerator Start()
    {
        yield return new WaitForSeconds(delay);
        gameObject.SetActive(false);
    }
}
