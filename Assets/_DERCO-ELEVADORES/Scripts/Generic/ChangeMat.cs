using System.Collections;
using UnityEditor;
using UnityEditor.Rendering.BuiltIn.ShaderGraph;
using UnityEngine;

public class ChangeMat : MonoBehaviour
{
    public Material materialInicio; // Material inicial (por ejemplo, opaco)
    public Material materialDestino; // Material destino (por ejemplo, transparente)
    public float duracionTransicion = 2.0f; // Duración de la transición

    private Renderer rend;

    void Start()
    {
        rend = GetComponent<Renderer>();
        StartCoroutine(TransicionTipoSuperficie());
    }

    private IEnumerator TransicionTipoSuperficie()
    {
        float tiempoPasado = 0f;

        while (tiempoPasado < duracionTransicion)
        {
            float factorInterpolacion = tiempoPasado / duracionTransicion;

            // Cambiamos la opacidad del material para simular la transición
            Color colorInterpolado = Color.Lerp(materialInicio.color, materialDestino.color, factorInterpolacion);
            colorInterpolado.a = Mathf.Lerp(materialInicio.color.a, materialDestino.color.a, factorInterpolacion);

            // Asignamos el color interpolado al material del objeto
            rend.material.color = colorInterpolado;

            tiempoPasado += Time.deltaTime;
            yield return null;
        }

        // Al final de la interpolación, establecemos el material en el destino
        rend.material = materialDestino;
    }
}
