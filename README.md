# Balance
Arduino project - Balance Automata

Well, I know I don't like very much Arduino, but here is a project to deep into it. It's a good option to learn the basics and start doing a standard proceduring code.

Consequently, here is the code following the structure that I think is a proper one so far. It will be nice to recicle software and remember procedures and trics.

I'm going to try using the less libraries possible, but those ones I think are well enogh to use (as servos.h) or enough difficoult to replace (as Wire.h), at least for now.

If you are not me... well, be pacient, I'm a newby at this! I don't know if it's a way to do comments, but I'd accept every advice to improve. And sorry for my poorly english, I fear I'm a newby at this as well.

# Project and code
The project consist on an automata that keeps always a balance in the horizontal. To do this i've mada a structure on plywood, monitored the angle with the MPU-6050 gyroscope and correct the error with a little motor (multipliying the torque with gears).
The software is divided in modules. The FSM with three states (READ, WRITE and WAIT), a PID controller to correct the error, a module to control MPU and a last one for the debug (a kind of oscilloscope maked with Processing, cause I'm programmiing on VSCode with PlatformIO and don't have a serial plotter).

So that's it. Enough of literature, let's code!

# Bibliografy 
ATMEGA328P  - http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf 
MPU-60X0    - https://html.alldatasheet.com/html-pdf/1132807/TDK/MPU-6050/133/2/MPU-6050.html

Electrical Schem Arduino Uno - https://www.arduino.cc/en/uploads/Main/arduino-uno-schematic.pdf
