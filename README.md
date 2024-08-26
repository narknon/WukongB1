# WukongB1

 Intended for use with: https://github.com/kboykboy2/UnrealEngine







## Installing the Real WWise Plugin

1. Download Wwise SDK version 2022.1.13.8454.2987 through the AudioKinetic WWise Launcher:

![image](https://github.com/user-attachments/assets/d6762e41-2a09-4950-aa94-49f9a5a1c853)


2. Download Wwise UE plugin version 2022.1.13.8454.2987 as an engine plugin for UE 5.2

![image](https://github.com/user-attachments/assets/0ea8fbe3-c9d9-4dce-8f2f-7cce0b2c1a72)

![image](https://github.com/user-attachments/assets/2ddd8838-7c85-4a12-b18a-8c4f00dbae8d)

3. Navigate to ...\WukongB1\Plugins\ and delete the Wwise folder.

4. Navigate to where you downloaded the Wwise plugin in the launcher. (Wwise_Unreal_Integration_Engine_Plug-in_2022.1.13.2987_UE52)
Copy the Wwise folder from that location to ...\WukongB1\Plugins\.

5. Follow the instructions in Wwise_UE_Integration.chm to install the required sdk files downloaded in step 1.

6. Apply the attached .patch file to the uproject GitHub download.  [ee9eee.patch](https://github.com/user-attachments/files/16751805/ee9eee.patch)

7. Re-build the project by generating project files for the custom engine, opening the .sln file in an IDE and right clicking on b1.
