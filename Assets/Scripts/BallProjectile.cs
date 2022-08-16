using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallProjectile : MonoBehaviour
{
    public Transform arCamera;

    [SerializeField]
    [Tooltip("Instantiates the food from the button.")]
    GameObject m_ballThrown;

    /// <summary>
    /// The food to instantiate on touch.
    /// </summary>
    public GameObject thrownBall
    {
        get { return m_ballThrown; }
        set { m_ballThrown = value; }
    }

    /// <summary>
    /// The food instantiated as a result of a button trigger.
    /// </summary>
    public GameObject spawnedBall { get; private set; }

    // Determine the force of the throw
    public float shootForce = 800f;

    public void ThrowBall()
    {
        //Instantiate a ball
        spawnedBall = Instantiate(m_ballThrown, arCamera.position, arCamera.rotation);
        spawnedBall.GetComponent<Rigidbody>().AddForce(arCamera.forward * shootForce);

    }
}


