using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GraphDataReader : MonoBehaviour
{
    public TextAsset Asset;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// Reads from an adjacency list, with the first node on each
    ///         line assumed to be the From node, and the remaining
    ///         nodes on each line to be the To nodes, and each
    ///         node separated by a comma.
    /// </summary>
    /// <returns></returns>
    public GraphData GetData()
    {
        GraphData data = new GraphData();

        if (this.Asset == null)
        {
            return data;
        }

        // Extract the lines from the CSV file.
        string[] lines = this.Asset.text.Split('\n');

        // Print a warning to the Unity console if the file is found to be empty.
        //      Note that the foreach loop below will not execute in this case,
        //      and the empty list of vectors will be returned.
        if (lines.Length == 0)
        {
            Debug.LogWarning("Empty input file");
        }

        // For each line...
        foreach (string line in lines)
        {
            // Extract the values on that line.
            string[] values = line.Split(',');

            // The first value on the line is the from node, and
            //      the remaining values on the line are the to
            //      nodes.
            string fromNode = values[0];
            string[] toNodes = values.Skip(1).ToArray();

            // Add only new nodes to the node list.
            if (!data.Nodes.Contains(fromNode))
            {
                data.Nodes.Add(fromNode);
            }

            // For each To node in the list...
            foreach (string toNode in toNodes)
            {
                // Add only new nodes to the node list.
                if (!data.Nodes.Contains(toNode))
                {
                    data.Nodes.Add(toNode);
                }

                // Create and add the edge to the edge list.
                GraphDataEdge edge = new GraphDataEdge()
                {
                    From = fromNode,
                    To = toNode
                };
                data.EdgeList.Add(edge);
            }
        }

        return data;
    }
}

public class GraphData
{
    public List<string> Nodes { get; set; }
    public List<GraphDataEdge> EdgeList { get; set; }

    public GraphData()
    {
        this.Nodes = new List<string>();
        this.EdgeList = new List<GraphDataEdge>();
    }
}

public class GraphDataEdge
{
    public string From { get; set; }
    public string To { get; set; }
    public int Weight { get; set; }

    public GraphDataEdge()
    {
        this.Weight = 1;
    }
}
