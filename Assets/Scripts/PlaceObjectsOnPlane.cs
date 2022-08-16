using System;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

[RequireComponent(typeof(ARRaycastManager))]
public class PlaceObjectsOnPlane : MonoBehaviour
{
    [SerializeField] private GameObject arCamera;

    //Set and offset distanct from the ARCamera 
    public int distoffset;

    [SerializeField]
    [Tooltip("Instantiates the pet on a plane at the touch location.")]
    GameObject m_PlacedPet;

    /// <summary>
    /// The pet to instantiate on touch.
    /// </summary>
    public GameObject placedPet
    {
        get { return m_PlacedPet; }
        set { m_PlacedPet = value; }
    }

    /// <summary>
    /// The pet instantiated as a result of a successful raycast intersection with a plane.
    /// </summary>
    public GameObject spawnedPet { get; private set; }

    /// <summary>
    /// Invoked whenever an object is placed in on a plane.
    /// </summary>
    public static event Action onPlacedObject;


    // Check if the pet has been placed in the scene
    private bool isPlaced = false;

    ARRaycastManager m_RaycastManager;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
    
    //[SerializeField]
    int m_MaxNumberOfObjectsToPlace = 1;

    int m_NumberOfPlacedObjects = 0;

    [SerializeField]
    bool m_CanReposition = true;

    public bool canReposition
    {
        get => m_CanReposition;
        set => m_CanReposition = value;
    }

    // All UI buttons
    [SerializeField]
    private GameObject foodButton;
    [SerializeField]
    private GameObject ballButton;
    [SerializeField]
    private GameObject resetButton;

    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
        foodButton.SetActive(false);
        ballButton.SetActive(false);
        resetButton.SetActive(true);
    }

    void Update()
    {
        if (isPlaced)
        {
            return;
        }

        Vector3 targetPosition = new Vector3(arCamera.transform.position.x, arCamera.transform.position.y, arCamera.transform.position.z) + arCamera.transform.forward * distoffset;

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            // If the user has started touching the screen
            if (touch.phase == TouchPhase.Began)
            {
                if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
                {
                    Pose hitPose = s_Hits[0].pose;

                    Vector3 positionOffset = new Vector3(hitPose.position.x, (hitPose.position.y), hitPose.position.z);

                    if (m_NumberOfPlacedObjects < m_MaxNumberOfObjectsToPlace)
                    {
                        m_NumberOfPlacedObjects++;
                        spawnedPet = Instantiate(m_PlacedPet, positionOffset, Quaternion.LookRotation(-targetPosition, Vector3.up));
                        spawnedPet.transform.parent = transform.parent;
                        foodButton.SetActive(true);
                        ballButton.SetActive(true);

                        isPlaced = true;
                    }
                    else if(m_NumberOfPlacedObjects >= m_MaxNumberOfObjectsToPlace)
                    {
                        
                        if (m_CanReposition)
                        {
                            spawnedPet = Instantiate(m_PlacedPet, positionOffset, Quaternion.LookRotation(-targetPosition, Vector3.up));
                        }
                    }
                    
                    if (onPlacedObject != null)
                    {
                        onPlacedObject();
                    }
                }
            }
        }
    }
}