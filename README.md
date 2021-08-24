# masters-thesis
Code for my masters thesis: Exploring the Impact of Augmented Reality on Collaborative Decision-Making in Small Teams.

Data Processing Steps
1. Open "Masters Thesis Data Analysis" in Unity. Project was created in version 2019.4.14f1.
2. Update the file "VideoTimes.csv" in path "\Assets\StreamingAssets" relative to the root of the project.
3. Update the file "Video Encoding Data.csv" in path "\Assets\StreamingAssets" relative to the root of the project.
    This must be in the format: Team, Trial,	Modality,	Chart Type,	Task Type,	Start,	End
4. Add the data logs for each session into the path
    The logs should be renamed to be in the format: Team[team number]_[modality]_datalog.csv
      Where:
      modality = Desktop, Hololens1, or Hololens2
    Delete any partial trial data from the end, if there is any (incomplete sessions due to sudden cutout such as battery failure). Failing to do so will cause the data processing to crash.
5. Run the scene in Unity. Ensure the DataCleaner script is enabled (checked) and note the output path (by default, "C:\\Users\\Public\\Documents\\").
6. Retrieve the output files from the path noted in step 5.
