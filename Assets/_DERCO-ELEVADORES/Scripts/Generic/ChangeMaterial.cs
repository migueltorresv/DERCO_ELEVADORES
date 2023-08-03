using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
public class ChangeMaterial : MonoBehaviour
{
    [SerializeField] private Material _materialToChange;
    private MeshRenderer _meshRenderer;
    private Material _initialMaterial;
    private void Start()
    {
        _meshRenderer = GetComponent<MeshRenderer>();
        _initialMaterial = _meshRenderer.material;
    }

    public void ChangeNew()
    {
        _meshRenderer.material = _materialToChange;
    }

    public void ReturnOldMaterial()
    {
        _meshRenderer.material = _initialMaterial;
    }
}
