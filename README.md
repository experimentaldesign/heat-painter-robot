# Heat painter robot : how to paint with heat

## Project description

 This project was constructed with Arduino, Grasshopper and Rhino.
For the general robotic path we used Grasshopper and Rhino 6 to run the
simulation.
As a tool we constructed a tool flange to support a heat gun and Arduino case.

In grasshopper we used as plugin Robot with digital output to connect the path
to Arduino.

## Requeriments
The software needed for this project was Arduino IDE, Rhino 6 and  Robot Plugin
Grasshopper .The OS was Windows 10.

## Getting started
With Rhino 6 running in the OS Windows 10, we can open Grasshopper plugin.
In the algorithm we defined the home position, the target, the type of movements
the robots did and the time.
Our main goal was to define the way a robot can place a heat gun over a PET
thermoplastic sheet and the time it have to be in this position to burn the
surface until it changed the color
from transparent to white.

Also we add another script using a drawing as a base. In this way we can use
the path  almost as a binary code: white (burn)
for positive elements and transparent (no burn)as a zero component.

At the beginning, started doing  tests to calibrate the tool. Setting  fixed
parameters and using only one as a variable.
Using 20 x 20 cm sheets mounted in a frame, 6 tests were done.
Fixed parameters used: distance: 2cm from the heat gun tip over the plastic
sheet, time: 1´30", temperature: from 400ºC to 700º

After those tests, started with the path configuration.
Choosing an path with well defined lines, we can achieve a distinguished output .
The first test was a simple path a M letter.

With the tool calibrated and the parameters set, the input was a lineal path
with a geometrical design.
For this test, we scaled up the frame to  50 x 50 cm sheet.

Output achieve was almost complete. The test suffered the a lot of variations:
room temperature, air flow in the test space,
and heat gun performance. In this case, temperature of the heat gun suffered a
lot of variations changing the parameters during the test.
The result was an incomplete path.
Tool design
This project had an initial idea: use heat as a brush or pencil.
With this goal in mind, we designed a support to put the heat gun in the robot
and "paint" with it a thermoplastic PET sheet.
Design had in consideration we needed also and Arduino controller, an
optocoupler and a relay as part of the tool.
For this purpose, design had a tool flange with a heat gun gripper and a
ventilated box for electronic components.

## Credits
__Robotical heat painter__ is a project of IaaC, Institute for Advanced
Architecture of Catalonia, Developed at __Master in Robotics and Advanced
Construction (MRAC)__ in __2019-2020__ during __Software I Seminar__ by:

Students: __Mansoor Awais, Isabel Cousseau__

Faculty: __Angel Muñoz, Sourush Garivani__

 
