using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScatterPlotGenerator : MonoBehaviour
{
    // Parameters to set in Unity editor for testing.
    public bool TestMode = false;
    public float NumPoints;
    public float PointMaxXValue;
    public float PointMaxYValue;
    public float PointMaxZValue;

    // The scale of the points in the chart.
    public float PointScale;

    // The size of the chart, configured in the Unity editor.
    public Vector3 ChartSize;

    // Stores the points in the plot.
    private List<GameObject> Points { get; set; }

    private CsvDataReader3D FileDataReader { get; set; }

    private LineRenderer XAxisRenderer { get; set; }
    private LineRenderer YAxisRenderer { get; set; }
    private LineRenderer ZAxisRenderer { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        if (this.TestMode)
        {
            this.InitializePointsTest();
        }
        else
        {
            this.InitializePoints();
        }
        this.InitializeAxes();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void InitializePointsTest()
    {
        this.Points = new List<GameObject>();

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.PointScale <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Point Scale must be greater than 0.");
            return;
        }
        if (this.NumPoints <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Number of points must be greater than 0 for test data.");
            return;
        }
        if (this.PointMaxXValue <= 0 || this.PointMaxYValue <= 0 || this.PointMaxZValue <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the point max values is set to zero for the test data.");
            return;
        }

        List<Vector3> data = new List<Vector3>();

        for (int i = 0; i < this.NumPoints; i++)
        {
            data.Add(new Vector3(
                Random.value * this.PointMaxXValue,
                Random.value * this.PointMaxYValue,
                Random.value * this.PointMaxZValue)
                );
        }

        // Measure the scale factor of the chart to fit all points in the chart size.
        //      This code currently assumes all values are positive.
        float xGreatest = 0f;
        float yGreatest = 0f;
        float zGreatest = 0f;
        foreach (Vector3 pointData in data)
        {
            if (pointData.x > xGreatest)
            {
                xGreatest = pointData.x;
            }
            if (pointData.y > yGreatest)
            {
                yGreatest = pointData.y;
            }
            if (pointData.z > zGreatest)
            {
                zGreatest = pointData.z;
            }
        }

        // Generate the points.
        foreach (Vector3 pointData in data)
        {
            // Create a new sphere to model the point.
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Scale the point according to the point scale set in the Unity editor.
            sphere.transform.localScale = new Vector3(this.PointScale, this.PointScale, this.PointScale);

            // Position the sphere based on the data, relative to the size of the chart.
            //      Note that the "Z" value of the data is placed in the "Y"
            //      position. This is because Unity has the Y axis pointing
            //      up instead of the Z axis.
            sphere.transform.position = new Vector3(
                (pointData.x / xGreatest) * this.ChartSize.x,
                (pointData.z / zGreatest) * this.ChartSize.z,
                (pointData.y / yGreatest) * this.ChartSize.y
                );

            // Add the point to the list.
            this.Points.Add(sphere);
        }
    }

    private void InitializePoints()
    {
        this.Points = new List<GameObject>();

        // Check to see that the chart can be meaningfully be created.
        //      Returning prevents any divide by zero errors in sizing.
        if (this.ChartSize.x == 0 || this.ChartSize.y == 0 || this.ChartSize.z == 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. One of the Chart size dimensions is set to zero.");
            return;
        }
        if (this.PointScale <= 0)
        {
            Debug.LogWarning("Scatter Plot cannot be drawn. Point Scale must be greater than 0.");
            return;
        }

        // Get a reference to the file data reader.
        this.FileDataReader = this.GetComponent(typeof(CsvDataReader3D)) as CsvDataReader3D;

        // If no file data reader component is found, revert back to the test
        //      chart data, and print a warning to the Unity console.
        if (this.FileDataReader == null)
        {
            this.InitializePointsTest();
            Debug.LogWarning("No CsvDataReader3D component found. Reverting back to test chart data.");
            return;
        }

        // Get the data from the file data reader.
        List<Vector3> data = this.FileDataReader.GetData();

        // Measure the scale factor of the chart to fit all points in the chart size.
        //      This code currently assumes all values are positive.
        float xGreatest = 0f;
        float yGreatest = 0f;
        float zGreatest = 0f;
        foreach(Vector3 pointData in data)
        {
            if (pointData.x > xGreatest)
            {
                xGreatest = pointData.x;
            }
            if (pointData.y > yGreatest)
            {
                yGreatest = pointData.y;
            }
            if (pointData.z > zGreatest)
            {
                zGreatest = pointData.z;
            }
        }

        // Generate the points.
        foreach (Vector3 pointData in data)
        {
            // Create a new sphere to model the point.
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            // Scale the point according to the point scale set in the Unity editor.
            sphere.transform.localScale = new Vector3(this.PointScale, this.PointScale, this.PointScale);

            // Position the sphere based on the data, relative to the size of the chart.
            //      Note that the "Z" value of the data is placed in the "Y"
            //      position. This is because Unity has the Y axis pointing
            //      up instead of the Z axis.
            sphere.transform.position = new Vector3(
                (pointData.x / xGreatest) * this.ChartSize.x,
                (pointData.z / zGreatest) * this.ChartSize.z,
                (pointData.y / yGreatest) * this.ChartSize.y
                );

            // Add the point to the list.
            this.Points.Add(sphere);
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
