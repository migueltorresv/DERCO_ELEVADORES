using System;
using Oculus.Interaction;
using UnityEngine;
using UnityEngine.Events;
using DG.Tweening;

[RequireComponent(typeof(OneGrabRotateTransformer))]
public class HandleGrabRotate : MonoBehaviour
{
    [SerializeField] private float _timeToRestartRotationConstraint = 1;
    [SerializeField] private UnityEvent OnMinAngleConstrainAchieved;
    [SerializeField] private UnityEvent OnMaxAngleConstrainAchieved;
    private OneGrabRotateTransformer _oneGrabRotateTransformer;
    private float _achieveMinAngleRotation;
    private float _localRotationZ;
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
    }

    private void Update()
    {
        _achieveMinAngleRotation = _oneGrabRotateTransformer.Constraints.MinAngle.Value;
        _localRotationZ = Mathf.DeltaAngle(0, transform.localEulerAngles.z);
        IsMinAngleRotationAchieved = _localRotationZ <= _achieveMinAngleRotation;
    }

    [ContextMenu(nameof(RestartRotationConstraint))]
    public void RestartRotationConstraint()
    {
        transform.DOLocalRotate(Vector3.zero, _timeToRestartRotationConstraint);
    }
}
