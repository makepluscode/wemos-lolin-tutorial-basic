
# WEMOS LOLIN TUTORIAL BASIC
This example is about how to run Hello World on Wemos D1 mini.

![l-basic-002-hello 00_00_08_23 001](https://user-images.githubusercontent.com/39910774/47252343-22d2ac80-d47e-11e8-84ba-a980befc5eed.png)

## Before Start
Firstly, install Visual Code and a plug-in for Wemos or Lolin. Please See [Youtube](https://youtu.be/V6bG-UvD54Q?sub_confirmation=1) to install IDEs.

## Build
### STEP1. Write Hello example and build.
 1. Execute Visual Code with sudo privilege.
 ```
 sudo code --user-data-dir
 ```
 2. Go to platformIO's home and create a new project.
 3. Write this codes printing text through a serial console.
 4. Create an executable file with the Build button at the bottom.

## Run
### STEP1. Upload and Test on Wemos D1 mini
 1. Connect the board to the host PC and make sure it is attached using lsusb.
 2. Upload the executable file to the board with the upload button at the bottom.
 3. Add monitor_speed to 74880 on the ini configuration file to see output.
 ```
 monitor_speed = 74880
 ```
 
## Video Tutorial 
 [![Watch the video](https://user-images.githubusercontent.com/39910774/47252575-f0c34980-d481-11e8-9c30-5b2543b722e5.png)](https://youtu.be/1YhSFG9xZQw?sub_confirmation=1)

