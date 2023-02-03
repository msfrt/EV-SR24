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


##### Master Branch
The master branch should only be used for verified code that is reliable and can be uploaded to the car at any given
moment without a doubt of proper functionality. Let's say we're at FSAE Michigan and tight for time before the next
event. We made a change to the code in order to test something and now the module that the code was for is
malfunctioning. We need to know exactly where the reliable code is and how to access it quickly, which is what the
master branch is for. The branch itself is easy to find, as its name is `master`.

A code becomes verified once it has been tested in an operational environment and approved by Dave. This could be as simple as making sure that the ATCC can send CAN messages, or, as complex as verifying that the
PDM has acceptable fan and water pump control at low battery voltages and high engine temperatures.

## File Structure
All new files within a branch should follow the pre-existing file structure. Furthermore, each module, project, or
script should have a `README.md` file for important information regarding the associated contents.

## Code Style Guide
The most common style guide for c++ code is the
[Google Style Guide](https://google.github.io/styleguide/cppguide.html). We will not be using the Google Style Guide
word-for-word, however, you should make your best attempt to follow it. CSE 232 uses the Google Style Guide, so if you
haven't taken it yet, this is a great opportunity to get ahead of the pack. Uniformity to code is the one of the keys to understandability.
If you look back at older code from the team, you'll probably struggle to understand it. This was because there was no
style guide. The style guide is important. Always follow the style guide.

## Software Flow

##### Arduino IDE
Our code is compiled in the [Arduino IDE](https://www.arduino.cc/en/Main/Software). If you're on Windows, look for the
non-windows-app version.

Because we are not savages, and we use Atom as our preferred text editor, we need to tell Arduino that the code is being updated elsewhere. That way, we don't have to close and reopen a program file every time we want to flash some new updates to a microcontroller. To do this, navigate to your settings page in Arduino, and check the box `Use external editor`.

##### Teensyduino
The [Teensyduino](https://www.pjrc.com/teensy/teensyduino.html) Arduino add-on adds the Teensy microcontroller boards
to Arduino, as well as a program the enables communication and programming via a USB bootloader.

##### VSCode
[VSCode](https://code.visualstudio.com/) is a popular text editor that you will probably spend most of your time in. It's
customizable, so you can change themes, plugins, and configurations to suit your needs exactly. Dave uses the
[OneDark](https://marketplace.visualstudio.com/items?itemName=zhuangtongfa.Material-theme) theme because he likes fruity colors, but you can use whatever you want.
