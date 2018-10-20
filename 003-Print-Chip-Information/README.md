
# WEMOS LOLIN TUTORIAL BASIC
This example is about how to read chip information from Wemos D1 mini.

![l-basic-003-chip-info 00_00_08_28 001](https://user-images.githubusercontent.com/39910774/47252736-4ef12c00-d484-11e8-8e82-f523c6132d36.png)

## Before Start
Firstly, install Visual Code and a plug-in for Wemos or Lolin. Please See [Youtube](https://youtu.be/V6bG-UvD54Q?sub_confirmation=1) to install IDEs.

## Build
### STEP1. Write codes to read information. 
 1. Execute Visual Code with sudo privilege
 ```
 sudo code --user-data-dir
 ```
 2. Go to platformIO's home and create a new project.
 3. Make sure set the Baudrate to 74880 not text on terminal to be broken on platformio.ini.
  ```
 monitor_speed = 74880
 ```
 4. Write codes to output the information of the ESP class on the main.cpp.

## Run
 1. Compile the code created with the Build button at the bottom
 2. Upload the executable file to the board with the upload button at the bottom

 
## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/RhBVWqVB6YY?sub_confirmation=1)
