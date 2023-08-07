
using System;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Image))]
public class ChangeColorImage : MonoBehaviour
{
    [SerializeField] private Color _normalColor;
    [SerializeField] private Color _targetColor;
    private Image _image;
    private void Start()
    {
        _image = GetComponent<Image>();
    }

    public void ChangeColorNormal() => _image.color = _normalColor;

    public void ChangeColorTarget() => _image.color = _targetColor;
}
