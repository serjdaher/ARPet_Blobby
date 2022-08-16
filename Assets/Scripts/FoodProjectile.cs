using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FoodProjectile : MonoBehaviour
{
    public Transform arCamera;

    [SerializeField]
    [Tooltip("Instantiates the food from the button.")]
    GameObject m_foodThrown;

    /// <summary>
    /// The food to instantiate on touch.
    /// </summary>
    public GameObject thrownFood
    {
        get { return m_foodThrown; }
        set { m_foodThrown = value; }
    }

    /// <summary>
    /// The food instantiated as a result of a button trigger.
    /// </summary>
    public GameObject spawnedFood { get; private set; }

    // Determine the force of the throw
    public float shootForce = 800f;

    public void ThrowFood()
    {
        //Instantiate a food ball
        spawnedFood = Instantiate(m_foodThrown, arCamera.position, arCamera.rotation);
        spawnedFood.GetComponent<Rigidbody>().AddForce(arCamera.forward * shootForce);
    }
}


