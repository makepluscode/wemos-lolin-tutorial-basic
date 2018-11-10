# WEMOS LOLIN TUTORIAL BASIC
This example is about how to rotate a servo motor.

![l-basic-009-servo 00_00_12_18 001](https://user-images.githubusercontent.com/39910774/48301475-22d04480-e532-11e8-8df5-fa6e0e4342ba.png)

## Before Start
Firstly, install Visual Code and a plug-in for Wemos or Lolin. Please See [Youtube](https://youtu.be/V6bG-UvD54Q?sub_confirmation=1) to install IDEs.

## Build
### STEP1. Write codes. (main.cpp)
 1. Execute Visual Code with sudo privilege
 ```
 sudo code --user-data-dir
 ```
 2. Go to platformIO's home and create a new project.
 3. Make sure set the Baudrate to 74880 not text on terminal to be broken on platformio.ini.
  ```
 monitor_speed = 74880
 ```
 4. Copy main.cpp into your project.

## Run
 1. Compile the code created with the Build button at the bottom (or CTRL+ALT+B)
 2. Upload the executable file to the board with the upload button at the bottom (or CTRL+ALT+U)

## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/fufuZvpjIWg)
