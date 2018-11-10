# WEMOS LOLIN TUTORIAL BASIC
This example is about how to make a simple UDP server. You can test the program from HostPC with PacketSender.

![l-basic-008-udp 00_00_10_12 001](https://user-images.githubusercontent.com/39910774/47972471-f5256e80-e0df-11e8-9096-f76676e4ae08.png)

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
 3. Make sure to remember the IP address of the output Wemos AP.
 4. On your host PC, runs the Packet Sender and sends a test message to port 1004 of Wemos IP with UDP.
 5. On your host PC, make sure messages are sent and received between Wemos and the host.

## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/EULNCS0eKdU?sub_confirmation=1)
