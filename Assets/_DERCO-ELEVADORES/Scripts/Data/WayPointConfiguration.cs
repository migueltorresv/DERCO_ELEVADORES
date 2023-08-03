using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu (fileName = "WaypointConfig", menuName = "ScriptableObjects/CreateWayPointConfig")]
public class WayPointConfiguration : ScriptableObject
{
    [Serializable]
    public struct WaypointConfig
    {
        public int Index;
        public float TimeDuration;
        public float TimeRotation;
    }

    public WaypointConfig WayPoint;
}
