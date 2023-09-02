using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu (fileName = "RegistroEvaluacion", menuName = "ScriptableObjects/RegistroEvaluacion")]
public class RegistroEvaluacion : ScriptableObject
{
    [Serializable]
    public class Pregunta
    {
        public int NumeroPregunta;
        public string RespuestaEsperada;
        public string RespuestaSeleccionada;
    }

    [SerializeField] private List<Pregunta> _preguntas;

    private void CleanRespuestasSleccionadas()
    {
        foreach (var p in _preguntas)
        {
            p.RespuestaSeleccionada = String.Empty;
        }
    }

    private void OnEnable()
    {
        CleanRespuestasSleccionadas();
    }

    private void Reset()
    {
        CleanRespuestasSleccionadas();
    }
}
