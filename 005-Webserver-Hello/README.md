
# WEMOS LOLIN TUTORIAL BASIC
This example is about how to make a simple webserver. You can test the program with the smartphone!

![l-basic-005-web-server 00_00_08_00 001](https://user-images.githubusercontent.com/39910774/47438328-37e46e00-d7e5-11e8-8f22-1b153cde8d9b.png)

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
 4. Copy main.cpp into you file.

## Run
 1. Compile the code created with the Build button at the bottom (or CTRL+ALT+B)
 2. Upload the executable file to the board with the upload button at the bottom (or CTRL+ALT+U)
 3. Make sure to remember the IP address of the output Wemos AP.
 4. With your smart phone, enter WIFI settings on your smartphone and try to connect with WemoAP.
 5. With your smart phone, Open your browser and connect to WemoAP IP address to see Hello.

## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/8-b7zlKeirQ?sub_confirmation=1)
