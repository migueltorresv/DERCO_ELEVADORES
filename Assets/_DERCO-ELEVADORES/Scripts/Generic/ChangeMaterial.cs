using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
public class ChangeMaterial : MonoBehaviour
{
    [SerializeField] private Material materialToChange;
    [SerializeField] private bool materialHasFade = false;
    private MeshRenderer _meshRenderer;
    private Material[] _initialMaterials;
    private Material[] _newMaterials;
    private float _transitionDurationTime = 2.0f;
    
    private Material _initMat;
    private void Start()
    {
        _meshRenderer = GetComponent<MeshRenderer>();
        _initialMaterials = _meshRenderer.materials;
        _initMat = _meshRenderer.material;
    }

    [ContextMenu(nameof(ChangeNew))]
    public void ChangeNew()
    {
        _newMaterials = new Material[_meshRenderer.materials.Length];
        for (int i = 0; i < _newMaterials.Length; i++)
        {
            _newMaterials[i] = materialToChange;
        }
        _meshRenderer.materials = _newMaterials;
    }

    public void ReturnOldMaterial()
    {
        _meshRenderer.materials = _initialMaterials;
    }

    [ContextMenu(nameof(ChangeWithInterpolate))]
    public void ChangeWithInterpolate()
    {
        StartCoroutine(MaterialFadeRoutine());
    }

    private IEnumerator MaterialFadeRoutine()
    {
        float tiempoPasado = 0f;

        while (tiempoPasado < _transitionDurationTime)
        {
            float factorInterpolacion = tiempoPasado / _transitionDurationTime;
            _meshRenderer.material.Lerp(_initMat, materialToChange, factorInterpolacion);
            tiempoPasado += Time.deltaTime;
            yield return null;
        }

        _meshRenderer.material = materialToChange;
    }
}
