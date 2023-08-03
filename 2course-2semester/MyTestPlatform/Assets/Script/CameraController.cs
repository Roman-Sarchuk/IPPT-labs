using UnityEngine;

public class CameraController : MonoBehaviour
{
    public float dumping = 1.5f;
    public Vector2 offset = new Vector2(2f, 1f);
    public GameObject player1;
    public GameObject player2;
    private int cameraX;
    private int cameraY;

    void Start()
    {
        offset = new Vector2(Mathf.Abs(offset.x), offset.y);
        DetectCord();
        transform.position = new Vector3(cameraX, cameraY + offset.y, transform.position.z);
    }

    void Update()
    {
        if (player1 || player2)
        {
            DetectCord();
            Vector3 target = new Vector3(cameraX, cameraY + offset.y, transform.position.z); ;
            Vector3 curretPosition = Vector3.Lerp(transform.position, target, dumping * Time.deltaTime);
            transform.position = curretPosition;
        }
    }

    private void DetectCord()
    {
        if (player1 && player2)
        {
            cameraX = (Mathf.RoundToInt(player1.transform.position.x) + Mathf.RoundToInt(player2.transform.position.x)) / 2;
            cameraY = (Mathf.RoundToInt(player1.transform.position.y) + Mathf.RoundToInt(player2.transform.position.y)) / 2;
        }
        else if (player1)
        {
            cameraX = Mathf.RoundToInt(player1.transform.position.x);
            cameraY = Mathf.RoundToInt(player1.transform.position.y);
        }
        else if (player2)
        {
            cameraX = Mathf.RoundToInt(player2.transform.position.x);
            cameraY = Mathf.RoundToInt(player2.transform.position.y);
        }
    }
}
