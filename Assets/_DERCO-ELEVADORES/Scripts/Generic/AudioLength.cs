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
    private float _clipLenght;
    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
        _clipLenght = _audioSource.clip.length;
    }
    
    private IEnumerator CountAudioClipLength()
    {
        yield return new WaitForSeconds(_clipLenght);
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
