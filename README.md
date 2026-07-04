# Arduino-pulse-sensor-implementation
This repository contains a basic Arduino implementation of a pulse sensor for monitoring heart rate. The project demonstrates how an optical pulse sensor can be interfaced with an Arduino Uno to detect pulse signals and display heart rate data.

Note: This repository documents a laboratory implementation. The Arduino code used is based on educational/lab material and is shared here for learning purposes. This repository does not claim original authorship of the source code.

Objective- To study the working principle of an optical pulse sensor and interface it with an Arduino Uno for heart rate monitoring.

Components Used- Arduino Uno, Pulse Sensor (APDS-9008 or compatible), Breadboard, Jumper wires, USB cable, Computer with Arduino IDE

Working Principle- 1. The pulse sensor uses photoplethysmography (PPG) to measure heart rate. 2. A green LED illuminates the fingertip. 3. Blood flow changes with every heartbeat. 4. These changes alter the reflected light intensity. 5. The photosensor detects these variations. 6. The Arduino processes the signal and calculates the heart rate.

Circuit Connections- Pulse Sensor VCC → Arduino 5V, Pulse Sensor GND → Arduino GND, Pulse Sensor Signal → Arduino A0, USB Cable → Arduino for power and programming

Software Used- Arduino IDE

Result-
Successfully interfaced the pulse sensor with Arduino Uno.
Pulse signal was detected through the sensor.
Heart rate readings were displayed using the Arduino program.

Acknowledgement-
This project was implemented as part of a laboratory exercise using educational reference material provided during coursework. The source code is included for documentation and learning purposes and is not claimed as original work.




