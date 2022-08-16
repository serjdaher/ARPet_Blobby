using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEditor;

public class ResetScene : MonoBehaviour
{
    public void Reset()
    {
        SceneManager.LoadScene("ARPet");
    }
}
