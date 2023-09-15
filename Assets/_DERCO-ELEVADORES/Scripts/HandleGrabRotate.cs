using System;
using System.Collections;
using Oculus.Interaction;
using UnityEngine;
using UnityEngine.Events;
using DG.Tweening;
using Unity.Mathematics;

[RequireComponent(typeof(OneGrabRotateTransformer))]
public class HandleGrabRotate : MonoBehaviour
{
    [SerializeField] private float _speedRestorationDegreesPerSecond = 90.0f;
    [SerializeField] private UnityEvent OnMinAngleConstrainAchieved;
    [SerializeField] private UnityEvent OnMaxAngleConstrainAchieved;
    private OneGrabRotateTransformer _oneGrabRotateTransformer;
    private float _achieveMinAngleRotation;
    private float _localRotation;
    private int _indexRotationAxisConstrained;
    private bool _isMinAngleRotationAchieved;
    private bool _isGrabbableSeleted;
    private Quaternion _startRotation;
    
    public bool IsGrabbableSeleted
    {
        get => _isGrabbableSeleted;
        set => _isGrabbableSeleted = value;
    }
    
    public bool IsMinAngleRotationAchieved
    {
        get => _isMinAngleRotationAchieved;
        set
        {
            _isMinAngleRotationAchieved = value;
            if (_isMinAngleRotationAchieved && _isGrabbableSeleted)
                OnMinAngleConstrainAchieved?.Invoke();
            else if (!_isMinAngleRotationAchieved && _isGrabbableSeleted)
                OnMaxAngleConstrainAchieved?.Invoke();
        }
    }
    
    private void Start()
    {
        _oneGrabRotateTransformer = GetComponent<OneGrabRotateTransformer>();
        _indexRotationAxisConstrained = (int)_oneGrabRotateTransformer.RotationAxis;
        _startRotation = transform.rotation;
    }

    private void Update()
    {
        CheckRotateAxisConstraint();
    }

    private void CheckRotateAxisConstraint()
    {
        _achieveMinAngleRotation = _oneGrabRotateTransformer.Constraints.MinAngle.Value;
        Vector3 localAngles = transform.localEulerAngles;
        _localRotation = Mathf.DeltaAngle(0, localAngles[_indexRotationAxisConstrained]);
        IsMinAngleRotationAchieved = _localRotation <= _achieveMinAngleRotation;
    }

    [ContextMenu(nameof(RestartRotationConstraint))]
    public void RestartRotationConstraint()
    {
        StartCoroutine(RestartRotationConstrainedRoutine());
    }

    private IEnumerator RestartRotationConstrainedRoutine()
    {
        float totalAngleRotation = Quaternion.Angle(transform.rotation, _startRotation);
        float timeForWait = totalAngleRotation / _speedRestorationDegreesPerSecond;

        float passTime = 0.0f;
        while (passTime < timeForWait)
        {
            passTime += Time.deltaTime;
            float interpolation = Mathf.Clamp01(passTime/timeForWait);
            transform.rotation = Quaternion.Slerp(transform.rotation, _startRotation, interpolation);
            yield return null;
        }

        transform.rotation = _startRotation;
    }
}
