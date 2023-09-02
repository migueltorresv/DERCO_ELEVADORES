using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private List<AudioSource> _audioSources;
    private void Start()
    {
        _audioSources = FindObjectsOfType<AudioSource>().ToList();
    }

    public void StopAudios()
    {
        foreach (var audio in _audioSources)
        {
            audio.Stop();
        }
    }
}
