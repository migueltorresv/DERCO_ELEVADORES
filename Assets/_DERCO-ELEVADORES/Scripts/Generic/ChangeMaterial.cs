using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
public class ChangeMaterial : MonoBehaviour
{
    [SerializeField] private Material _materialToChange;
    private MeshRenderer _meshRenderer;
    private Material[] _initialMaterials;
    private Material[] _newMaterials;
    private void Start()
    {
        _meshRenderer = GetComponent<MeshRenderer>();
        _initialMaterials = _meshRenderer.materials;
    }

    public void ChangeNew()
    {
        _newMaterials = new Material[_meshRenderer.materials.Length];
        for (int i = 0; i < _newMaterials.Length; i++)
            _newMaterials[i] = _materialToChange;
        
        _meshRenderer.materials = _newMaterials;
    }

    public void ReturnOldMaterial()
    {
        _meshRenderer.materials = _initialMaterials;
    }
}
