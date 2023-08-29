using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(AudioSource))]
public class AudioLength : MonoBehaviour
{
    [SerializeField] private UnityEvent OnAudioClipFinished;
    private AudioSource _audioSource;
    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
    }
    
    private IEnumerator CountAudioClipLength()
    {
        float clipLenght = _audioSource.clip.length;
        yield return new WaitForSeconds(clipLenght);
        OnAudioClipFinished?.Invoke();
        StopRoutine();
    }

    private void StopRoutine()
    {
        StopCoroutine(CountAudioClipLength());
    }

    public void AudioClipLength()
    {
        StartCoroutine(CountAudioClipLength());
    }
    
}
