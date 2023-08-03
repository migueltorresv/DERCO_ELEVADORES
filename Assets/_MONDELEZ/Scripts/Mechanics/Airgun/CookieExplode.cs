using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CookieExplode : MonoBehaviour
{
    public GameObject CookieImage;
    public Collider col;
    public ParticleSystem vfxCookie;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Projectile"))
        {
            CookieImage.SetActive(false);
            col.enabled = false;
            PlayVFX();
        }
    }

    public void PlayVFX()
    {
        vfxCookie.Play();
    }
}
