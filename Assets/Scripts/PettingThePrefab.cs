using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PettingThePrefab : MonoBehaviour
{
    private Animator animator;
    private AudioSource audioSource;

    private void Start()
    {
        animator = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    // Enable the swinging animation state when the user touches the pet
    private void OnMouseDown()
    {
        animator.SetTrigger("IsSwing");
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Check if the collider is food or ball
        if(collision.gameObject.layer is 6 or 8)
        {
            //Play clip on collision
            audioSource.Play();
        }
    }
}
