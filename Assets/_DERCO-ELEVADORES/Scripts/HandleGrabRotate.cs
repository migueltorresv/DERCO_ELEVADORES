using System;
using Oculus.Interaction;
using UnityEngine;
using UnityEngine.Events;
using DG.Tweening;

[RequireComponent(typeof(OneGrabRotateTransformer))]
public class HandleGrabRotate : MonoBehaviour
{
    private float _timeToRestartRotationConstraint = 1;
    [SerializeField] private UnityEvent OnMinAngleConstrainAchieved;
    [SerializeField] private UnityEvent OnMaxAngleConstrainAchieved;
    private OneGrabRotateTransformer _oneGrabRotateTransformer;
    private float _achieveMinAngleRotation;
    private float _localRotation;
    private int _indexRotationAxisConstrained;
    private bool _isMinAngleRotationAchieved;
    private bool _isGrabbableSeleted;
    
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
        transform.DOLocalRotate(Vector3.zero, _timeToRestartRotationConstraint);
    }
}
