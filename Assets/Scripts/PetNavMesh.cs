using System;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using UnityEngine.AI;

public class PetNavMesh : MonoBehaviour
{
    [SerializeField] private GameObject navmeshDestination;

    private GameObject arCamera;

    // Distance offset from camera, used in to position the NavMeshAgent when fetching the ball
    public int distoffset;

    private GameObject pet;
    private NavMeshAgent navMeshAgent;

    // Create a list to control the instantiated Food balls
    List<GameObject> spawnedFoods = new List<GameObject>();

    //Create a list to control the instantiated Balls
    List<GameObject> spawnedBalls = new List<GameObject>();

    // The distance between the pet and the target object
    private float distanceBetweenTarget;

    private AudioSource audiosource;

    // Bool to detect if the pet has started moving
    private bool isMoving = false;

    // Bools to detect what has been thrown
    private bool foodDetected;
    private bool ballDetected;

    // bool to disable the AudioClip in Update()
    private bool playMunching;

    // Start is called before the first frame update
    void Start()
    {
        arCamera = GameObject.Find("AR Camera");
        audiosource = GetComponent<AudioSource>();

        foodDetected = false;
        ballDetected = false;
    }

    // Update is called once per frame
    void Update()
    {

        if(isMoving)
        {
            // Find the instantiated pet in the scene, will not get recognized in Start(), Awake() or OnEnable() because pet is not yet placed
            pet = GameObject.FindGameObjectWithTag("Pet");
            navMeshAgent = pet.GetComponent<NavMeshAgent>();

            navMeshAgent.SetDestination(navmeshDestination.transform.position);


            // Calculate the distance between the instantiated object that collided on the plane and the pet in the scene
            distanceBetweenTarget = Vector3.Distance(navmeshDestination.transform.position, pet.transform.position);


            // Verify if the pet has reached destination, or is close to the collided object.
            if (Mathf.Round(pet.transform.position.x) == Mathf.Round(navmeshDestination.transform.position.x) && Mathf.Round(pet.transform.position.z) == Mathf.Round(navmeshDestination.transform.position.z) || distanceBetweenTarget < 0.8f)
            {
                // Stop the agent from moving and reset path
                navMeshAgent.ResetPath();

                // Check the food was instantiated
                if (foodDetected && playMunching)
                {
                    audiosource.Play();

                    // Bool set to false to stop the Play() to continuously loop
                    playMunching = false;

                    // Loop to deactivate all foods on the floor, even the ones that were not eaten by pet.
                    foreach (GameObject food in spawnedFoods)
                    {
                        food.SetActive(false);
                    }
                    StartCoroutine(ResetBooleans());
                    isMoving = false;
                }

                // Check the food was ball
                if (ballDetected)
                {
                    // Pet will bring back the ball to user
                    var destinationAtOrigin = new Vector3(arCamera.transform.position.x, arCamera.transform.position.y, arCamera.transform.position.z) + (arCamera.transform.forward * distoffset);
                    navmeshDestination.transform.position = destinationAtOrigin;
                    navMeshAgent.SetDestination(destinationAtOrigin);

                    // Loop to deactivate all balls on the floor, even the ones that were not eaten by pet.
                    foreach (GameObject ball in spawnedBalls)
                    {
                        ball.SetActive(false);
                    }
                    StartCoroutine(ResetBooleans());
                    isMoving = false;
                }

            }
        }
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Check if collision is with food
        if(collision.gameObject.layer == 6)
        {
            // Prevent the food from bouncing 
            collision.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;

            foodDetected = true;
            playMunching = true;
            ballDetected = false;
            isMoving = true;

            // add the GameObject to the Spawned Foods list to control in the Update
            spawnedFoods.Add(collision.gameObject);

            // Move empty to collision position and set it as the destination
            navmeshDestination.transform.position = collision.gameObject.transform.position;
        }

        // Check if collision is with ball
        if (collision.gameObject.layer == 8)
        {
            // Prevent the ball from bouncing 
            collision.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;

            foodDetected = false;
            ballDetected = true;
            isMoving = true;

            // add the GameObject to the Spawned Balls list to control in the Update
            spawnedBalls.Add(collision.gameObject);

            // Move empty to collision position and set it as the destination
            navmeshDestination.transform.position = collision.gameObject.transform.position;
        }
    }


    // Timer to reset collision detection
    IEnumerator ResetBooleans()
    {
        yield return new WaitForSeconds(1f);
        foodDetected = false;
        ballDetected = false;
    }
}
