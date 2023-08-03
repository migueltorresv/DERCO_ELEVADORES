using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class MovePath : MonoBehaviour
{
    [SerializeField] private List<Transform> _wayPoints;

    public void MoveWayPoint(WayPointConfiguration waypointConfig)
    {
        transform.DOMove(_wayPoints[waypointConfig.WayPoint.Index].position, waypointConfig.WayPoint.TimeDuration);
        transform.DORotate(_wayPoints[waypointConfig.WayPoint.Index].eulerAngles, waypointConfig.WayPoint.TimeRotation);
    }
}