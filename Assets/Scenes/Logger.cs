using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

#if WINDOWS_UWP
using Windows.Storage;
using Windows.Storage.Pickers;
#endif

public class Logger : MonoBehaviour
{
    StreamWriter logFileWriter;

    private string FilePath;
    private string FileName;

    // Start is called before the first frame update
    void Start()
    {
        this.FileName = "mydatalog_" + DateTime.Now.Hour + "-" + DateTime.Now.Minute + "-" + DateTime.Now.Second + ".csv";

        UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
        {
            await this.PickLogSaveLocationAsync();
        }, true);

        // C:\Users\<user>\AppData\Local\Packages\Template3D_pzq3xp76mxafg\LocalState
        //this.FilePath = Path.Combine(Application.persistentDataPath, fileName);

        //string path = (new Uri("ms-appx:\\\\LoggedData")).ToString();
        //string path = (new Uri("")).ToString();
        //Debug.LogError(fileName);

        // Creates a file in the default location:
        //      "build\bin\x64\Release\AppX" on Desktop
        //this.logFileWriter = new StreamWriter(fileName);
#if WINDOWS_UWP
        // See https://blog.mzikmund.com/2020/01/how-to-stream-ify-a-uwp-storagefile/
        // Also see https://forums.hololens.com/discussion/comment/7133/#Comment_7133
        // And finally see https://forums.hololens.com/discussion/3290/save-a-string-to-a-text-or-cvs-file-on-hololens

        //this.PickLogSaveLocationAsync();

        //this.FilePath = Path.Combine(KnownFolders.DocumentsLibrary.Path, fileName);

        // Create the folder if it does not yet exist.
            //string path = (new Uri("ms-appx:///LoggedData")).ToString();
            //if (!Directory.Exists(path))
            //{
            //    string errMsg = "Inside of directory not existing.... Path is: " + path;
            //    Debug.LogError(errMsg);
            //    Directory.CreateDirectory(path);
            //}

            //Debug.LogError(path);

        // Get a reference to the file.
        //Task<Stream> task = Task<Stream>.Run(async () =>
        //{
        //    StorageFile file = await StorageFile.GetFileFromApplicationUriAsync(new Uri(path + fileName + ".csv"));
        //    Debug.Log(file.Path);
        //    return await file.OpenStreamForWriteAsync();
        //});
        //Stream logFileStream = task.Result;
        //Task.WaitAll();

        //this.logFileWriter = new StreamWriter(logFileStream);
        //Debug.LogError("Nailed it.");
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

        //if (this.FilePath != null)
        //{
        //    string[] lines = { record };
        //    File.AppendAllLines(this.FilePath, lines);
        //}

        if (this.logFileWriter != null)
        {
            this.logFileWriter.WriteLine(record);
        }
    }

    /// <summary>
    /// Closes the log file writer. This is important to prevent this program from locking the file
    /// even after it is done.
    /// </summary>
    public void CloseLogFile()
    {
        if (this.logFileWriter != null)
        {
            this.logFileWriter.Close();
        }
    }

    private async Task PickLogSaveLocationAsync()
    {
#if WINDOWS_UWP
        FileSavePicker savePicker = new FileSavePicker();
        savePicker.SuggestedStartLocation = PickerLocationId.DocumentsLibrary;
        savePicker.FileTypeChoices.Add("CSV", new List<string>() { ".csv" });
        savePicker.SuggestedFileName = this.FileName;

        StorageFile file = await savePicker.PickSaveFileAsync();
        if (file != null)
        {
            Stream fileStream = await file.OpenStreamForWriteAsync();
            this.logFileWriter = new StreamWriter(fileStream);
        }
#endif
    }
}
