# EV-SR24

*Welcome to the first EV Repo!!!*

## Branch Structure & Pull Procedure

##### User Branches
All changes and additions to the electrical repository __must originate in user
branches.__ A new user branch should be created for each independent change. For example,
if I wanted to update the PDM code, and the ATCC code, I would make two
_separate user branches_ for each change (unless the change was
the same for both modules, ex. a DBC structure update). The structure for a new
user branch is: `user/*your_username*/short_description`. So, if I wanted to make
all of the driver display LED's green and white for a test, my user branch would look something like this:
`user/TheYonkk/DD_green&white_LED`. It would be good practice to include the module abbreviation
in the beginning of your description, however not all changes are to modules, and therefore it is not required.

##### Main Branch
The master branch should only be used for verified code that is reliable and can be uploaded to the car at any given
moment without a doubt of proper functionality. Let's say we're at FSAE Michigan and tight for time before the next
event. We made a change to the code in order to test something and now the module that the code was for is
malfunctioning. We need to know exactly where the reliable code is and how to access it quickly, which is what the
master branch is for. The branch itself is easy to find, as its name is `main`.

## File Structure
All new files within a branch should follow the pre-existing file structure. Furthermore, each module, project, or
script should have a `README.md` file for important information regarding the associated contents.

## Software Flow

##### MATLAB Simulink
[MATLAB](https://matlab.mathworks.com/) is the core of this entire repo. As an MSU student with an MSU email (hopefully), you will have access to MATLAB and most (if not all) supporting packages - one of which is Simulink. This is the platform where words are squares and rectangles (and possibly triangles).

_PLEASE COMPLETE BOTH THE MATLAB AND SIMULINK ONRAMP TO OBTAIN A GOOD UNDERSTANDING OF HOW THEY WORK TANGENTIALLY_

This repo will host literally everything that makes sense (except for stuff that can't be implemented as per the rule book - _ehem, BMS_). What were originally standalone PCBs on the ICE car are now lumped into the VCU package.

##### Arduino IDE
We also have code compiled in the [Arduino IDE](https://www.arduino.cc/en/Main/Software). If you're on Windows, look for the
non-windows-app version.

Because we are not savages, and we use Atom as our preferred text editor, we need to tell Arduino that the code is being updated elsewhere. That way, we don't have to close and reopen a program file every time we want to flash some new updates to a microcontroller. To do this, navigate to your settings page in Arduino, and check the box `Use external editor`.

##### Teensyduino
The [Teensyduino](https://www.pjrc.com/teensy/teensyduino.html) Arduino add-on adds the Teensy microcontroller boards
to Arduino, as well as a program the enables communication and programming via a USB bootloader.

##### VSCode
[VSCode](https://code.visualstudio.com/) is a popular text editor that you will probably spend most of your time in. It's
customizable, so you can change themes, plugins, and configurations to suit your needs exactly. Dave uses the
[OneDark](https://marketplace.visualstudio.com/items?itemName=zhuangtongfa.Material-theme) theme because he likes fruity colors, but you can use whatever you want.

## Development

##### Adding to Path

When developing with subsystem references and other pointers, Simulink really wants to know what it is looking at. So, you, the user, need to make sure Simulink has eyes on what you are working on. If Simulink does not know where it needs to look, you will have a `File Not Found` error or something of the sort for every reference in the model. Luckily, there are multiple ways to do this - some being more tedious than others.

On startup, you will most likely need to add some files to Simulink's path. To do so, follow the steps below:

1. Launch MATLAB/Simulink
2. Lauch the `EVSR24.prj` project script
3. Right click on the directory you would like to add to path (the `subsystems` folder for example)
4. Click on `Project Path` and then `Add to Project Path (Including Subfolders)`
5. Ta-da, you have added a folder to path

Note that you may need to do this more than once for the other parent directories in the repo - _make sure to include subfolders_ 
