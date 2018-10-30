
# WEMOS LOLIN TUTORIAL BASIC
This example is about how to make a simple webserver and control LEDs on the board. You can test the program with the smartphone!

![l-basic-006-wireless-led 00_00_08_24 001](https://user-images.githubusercontent.com/39910774/47712306-afe5e480-dc7a-11e8-8d8e-7265c23bb1bc.png)

## Before Start
Firstly, install Visual Code and a plug-in for Wemos or Lolin. Please See [Youtube](https://youtu.be/V6bG-UvD54Q?sub_confirmation=1) to install IDEs. Also, we reuse code from #005, so please see the previous [Video](https://youtu.be/8-b7zlKeirQ?sub_confirmation=1).

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
 4. With your smart phone, enter WIFI settings on your smartphone and try to connect with WemoAP.
 5. With your smart phone, Open your browser test to turn on and off LED on board.

## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/aBonlUHIP6M?sub_confirmation=1)
