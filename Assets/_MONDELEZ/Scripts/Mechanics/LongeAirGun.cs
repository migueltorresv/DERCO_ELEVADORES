using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LongeAirGun : MonoBehaviour
{
    public Transform KeyRotate;
    public float keyAngle;
    public ParticleSystem vfx;
    public UnityAction<bool> OpenKey;
    public bool keyIsOpen;
    public AudioSource audioSource;
    // Start is called before the first frame update
    void Start()
    {
        vfx.gameObject.SetActive(true);
        vfx.Play();
        audioSource.Play();
        var main = vfx.main;
        main.startLifetime = 0;
        audioSource.volume = 0;
        KeyRotate.transform.localEulerAngles = new Vector3(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
        keyAngle = KeyRotate.transform.localEulerAngles.y;

        float _tempAngle = Mathf.Clamp(keyAngle, 0, 90);
        float _anglePercent = _tempAngle / 90;

        var main = vfx.main;
        main.startLifetime = _anglePercent;
        audioSource.volume = _anglePercent;

        if (keyAngle < 60 && keyIsOpen)
        {
            keyIsOpen = false;
            OpenKey?.Invoke(keyIsOpen);
        }
        else if (keyAngle > 85 && !keyIsOpen)
        {
            keyIsOpen = true;
            OpenKey?.Invoke(keyIsOpen);
        }
    }
}
