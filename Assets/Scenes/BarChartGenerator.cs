using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarChartGenerator : MonoBehaviour
{
    public int NumOfColumns;
    public int NumOfRows;

    // Stores the bars in the chart.
    private List<GameObject> Cubes { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        this.Cubes = new List<GameObject>();

        float tallestBarHeight = 0.0f;

        for (int x = 0; x < this.NumOfColumns; x++)
        {
            for (int z = 0; z < this.NumOfRows; z++)
            {
                // Create a new cube.
                GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);

                // Set the height to a random number.
                float height = Random.value * 2.0f;
                if (height > tallestBarHeight)
                {
                    tallestBarHeight = height;
                }
                cube.transform.localScale = new Vector3(1.0f, height, 1.0f);

                // Position the cube.
                cube.transform.position = new Vector3(x * 2, 0, z * 2);

                // Add the cube to the list.
                this.Cubes.Add(cube);
            }
        }

        foreach (GameObject cube in this.Cubes)
        {
            // Note that a vertical offset is necessary to ensure the bottoms of the cubes
            //      are aligned, rather than the centers.
            Vector3 oldPosition = cube.transform.position;
            cube.transform.position = new Vector3(
                oldPosition.x,
                -(tallestBarHeight - cube.transform.localScale.y) / 2.0f,
                oldPosition.z);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
