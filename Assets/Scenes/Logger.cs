using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

#if WINDOWS_UWP
using Windows.Storage;
#endif

public class Logger : MonoBehaviour
{
    StreamWriter logFileWriter;

    // Start is called before the first frame update
    void Start()
    {
        string fileName = "";
#if WINDOWS_UWP
        // See https://blog.mzikmund.com/2020/01/how-to-stream-ify-a-uwp-storagefile/
        // Also see https://forums.hololens.com/discussion/comment/7133/#Comment_7133
        // And finally see https://forums.hololens.com/discussion/3290/save-a-string-to-a-text-or-cvs-file-on-hololens

        // Get a reference to the file.
        Task<Stream> task = Task<Stream>.Run(async () =>
        {
            StorageFile file = await StorageFile.GetFileFromApplicationUriAsync(new Uri("ms-appx:///LoggedData/" + fileName + ".csv"));
            Debug.Log(file.Path);
            return await file.OpenStreamForWriteAsync();
        });
        Stream logFileStream = task.Result;
        Task.WaitAll();

        this.logFileWriter = new StreamWriter(logFileStream);
#else
        this.logFileWriter = null;
        Debug.Log("UWP not detected. No data logging will proceed.");
#endif
    }

    // Update is called once per frame
    void Update()
    {
        string record = DateTime.Now + "," +
            Camera.main.transform.position.x + "," +
            Camera.main.transform.position.y + "," +
            Camera.main.transform.position.z + "," +
            Camera.main.transform.rotation.x + "," +
            Camera.main.transform.rotation.y + "," +
            Camera.main.transform.rotation.z;

        if (this.logFileWriter != null)
        {
            this.logFileWriter.WriteLine(record);
        }
    }
}
