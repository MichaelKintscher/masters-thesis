using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarChartGenerator : MonoBehaviour
{
    public int NumOfColumns;
    public int NumOfRows;

    public Vector3 ChartSize;

    // Stores the bars in the chart.
    private List<GameObject> Bars { get; set; }

    private Vector2 BarSize { get; set; }

    private CsvDataReader3D FileDataReader { get; set; }

    private LineRenderer XAxisRenderer { get; set; }
    private LineRenderer YAxisRenderer { get; set; }
    private LineRenderer ZAxisRenderer { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        this.InitializeBars();
        this.InitializeAxes();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void InitializeBarsTest()
    {
        this.Bars = new List<GameObject>();

        float tallestBarHeight = 0.0f;

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Bar Chart cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.NumOfColumns == 0 || this.NumOfRows == 0)
        {
            Debug.LogWarning("Bar Chart cannot be drawn. The number of columns or number of rows is set to zero for the test data.");
            return;
        }

        // Calculate the size of each bar. Bars are evenly distributed across the
        //      total given space, so the size of an individual bar is simply the
        //      total divided by the number of bars.
        this.BarSize = new Vector2(
            this.ChartSize.x / this.NumOfRows,
            this.ChartSize.z / this.NumOfColumns
            );

        // Generate the bars.
        for (int x = 0; x < this.NumOfRows; x++)
        {
            for (int z = 0; z < this.NumOfColumns; z++)
            {
                // Create a new cube to model a bar in the bar chart.
                GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);

                // Set the height to a random number.
                float height = Random.value * this.ChartSize.z;
                if (height > tallestBarHeight)
                {
                    tallestBarHeight = height;
                }

                // Scale the bar based on the the previously calculated bar size.
                cube.transform.localScale = new Vector3(this.BarSize.x, height, this.BarSize.y);

                // Position the bar so that it is adjacent to the previous bar.
                //      Note that the origin is in the middle of the first bar by default,
                //      so each bar must be shifted by half of the bar size.
                cube.transform.position = new Vector3(
                    (this.BarSize.x / 2.0f) + x * this.BarSize.x,
                    0,
                    (this.BarSize.y / 2.0f) + z * this.BarSize.y);

                // Add the bar to the list.
                this.Bars.Add(cube);
            }
        }

        // Adjust the vertical positioning of the bars so that they are all bottom-aligned.
        foreach (GameObject cube in this.Bars)
        {
            // Note that a vertical offset is necessary to ensure the bottoms of the cubes
            //      are aligned, rather than the centers.
            Vector3 oldPosition = cube.transform.position;
            cube.transform.position = new Vector3(
                oldPosition.x,
                (cube.transform.localScale.y) / 2.0f,
                oldPosition.z);
        }
    }

    private void InitializeBars()
    {
        this.Bars = new List<GameObject>();

        float tallestBarHeight = 0.0f;

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Bar Chart cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }

        // Get a reference to the file data reader.
        this.FileDataReader = this.GetComponent(typeof(CsvDataReader3D)) as CsvDataReader3D;

        // If no file data reader component is found, revert back to the test
        //      chart data, and print a warning to the Unity console.
        if (this.FileDataReader == null)
        {
            this.InitializeBarsTest();
            Debug.LogWarning("No CsvDataReader3D component found. Reverting back to test chart data.");
            return;
        }

        // Get the data from the file data reader.
        List<Vector3> data = this.FileDataReader.GetData();

        // Measure the number of bars needed in each dimension.
        //      This code currently assumes all values are positive.
        foreach (Vector3 barData in data)
        {
            if (barData.x > this.NumOfRows)
            {
                this.NumOfRows = Mathf.RoundToInt(barData.x);
            }
            if (barData.y > this.NumOfColumns)
            {
                this.NumOfColumns = Mathf.RoundToInt(barData.y);
            }
            if (barData.z > tallestBarHeight)
            {
                tallestBarHeight = barData.z;
            }
        }

        // Calculate the size of each bar. Bars are evenly distributed across the
        //      total given space, so the size of an individual bar is simply the
        //      total divided by the number of bars.
        this.BarSize = new Vector2(
            this.ChartSize.x / this.NumOfRows,
            this.ChartSize.z / this.NumOfColumns
            );

        // Generate the bars.
        foreach (Vector3 barData in data)
        {
            // Create a new cube to model a bar in the bar chart.
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);

            // Scale the bar based on the the previously calculated bar size.
            //      Note that the "Z" value of the data is placed in the "Y"
            //      scale. This is because Unity has the Y axis pointing up
            //      instead of the Z axis.
            cube.transform.localScale = new Vector3(this.BarSize.x, barData.z, this.BarSize.y);

            // Position the bar so that it is adjacent to the previous bar.
            //      Note that the origin is in the middle of the first bar by default,
            //          so each bar must be shifted by half of the bar size.
            //      Also note: Adjust the vertical positioning of the bars so that they
            //          are all bottom-aligned by moving them up by 1/2 their Y scale.
            cube.transform.position = new Vector3(
                (this.BarSize.x / 2.0f) + Mathf.RoundToInt(barData.x) * this.BarSize.x,
                (cube.transform.localScale.y) / 2.0f,
                (this.BarSize.y / 2.0f) + Mathf.RoundToInt(barData.y) * this.BarSize.y);

            // Add the bar to the list.
            this.Bars.Add(cube);
        }
    }

    private void InitializeAxes()
    {
        // Get the line renderers for each axis.
        GameObject xAxis = this.transform.Find("XAxisLine").gameObject;
        GameObject yAxis = this.transform.Find("YAxisLine").gameObject;
        GameObject zAxis = this.transform.Find("ZAxisLine").gameObject;
        this.XAxisRenderer = xAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;
        this.YAxisRenderer = yAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;
        this.ZAxisRenderer = zAxis.GetComponent(typeof(LineRenderer)) as LineRenderer;

        // Define the axis endpoint positions for each axis.
        Vector3[] xAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(this.ChartSize.x, 0f, 0f)
        };
        Vector3[] yAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(0f, this.ChartSize.y, 0f)
        };
        Vector3[] zAxispositions = new Vector3[2]
        {
            new Vector3(0f, 0f, 0f),
            new Vector3(0f, 0f, this.ChartSize.z)
        };

        // Set the axis endpoint positions.
        this.XAxisRenderer.positionCount = xAxispositions.Length;
        this.YAxisRenderer.positionCount = yAxispositions.Length;
        this.ZAxisRenderer.positionCount = zAxispositions.Length;
        this.XAxisRenderer.SetPositions(xAxispositions);
        this.YAxisRenderer.SetPositions(yAxispositions);
        this.ZAxisRenderer.SetPositions(zAxispositions);
    }
}
