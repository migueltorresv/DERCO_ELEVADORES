using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
public class MenuManager : MonoBehaviour
{
    public ModuleManager moduleManager;
    public List<PokeButton> pokeButtons;

    private void Awake()
    {
        for (int i = 0; i < pokeButtons.Count; i++)
        {
            var pb = pokeButtons[i];
            pb.pokeButton.WhenSelect.AddListener(() =>
            {
                moduleManager.GoToModule(pb.index);
            });
        }
    }

    [System.Serializable]
    public class PokeButton
    {
        public PointableUnityEventWrapper pokeButton;
        public int index = 0;
    }
}
