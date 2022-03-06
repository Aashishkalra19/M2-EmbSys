
# Smart Stick For the Blind
## Introduction
### The Traditional stick which the blind people use does not fulfill the requirements of the modern world. The Smart stick is a device for the visually impaired to guide the user to respective destination and avoiding to collide with the obstacles which is done with the help of a microcontroller (Arduino Uno), a sensor (UltraSonic Sensor: HC-SR04) and a buzzer.
------------------------------

## High Level Requirements
The Smart Stick must be able to perform the following operations:
- To detect the distance of any object which comes infront of the ultrasonic sensor
- To provide warning in form of sound with help of Buzzer when the distance between the stick (ultrasonic sensor) and the object is too less

## Low Level Requirements
Low level requirements must have
-  Interface HC-SR04 (UltraSonic sensor) with Arduino Uno
-  Interface LCD With Arduino uno
-  Interface Buzzer with Arduino Uno
----------------------------------------
## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals which the ultrasonic sensor receives and processes them to find the distance between the object and the sensor

### Ultra Sonic Sensor
- Sends and recieves ultra sonic signals which are used to determine distance between the sensor and the object

### Buzzer
- Acts as a device to communicate with the user when any object is too close to it

--------------------------------------

## SWOT

### Strengths
- Easy to understand the application and use it
- Easy method to check whether the distace between the object is very less by turning on the buzzer
- Ultrasonic sensors are highly accurate and can detect small variations


 ### Weakness 
- Ultrasonic sensors have difficulties in reading reflections from soft, curved and thin as well as a small object
- Measuring the distance is limited

### Opportunities
- Used by the visually impared 

### Threats
- Other sensors can be used which have greater efficiency than Ultrasonic Sensor
- Many other similar applications available
----------------------------------------

## 4W's & 1H
### Who
- A visually impaired person.

### What
- This is a utility application to determine distance and warn the visually impared person if the distance is very less by turning on the buzzer/Leds.

### When 
-  While walking 

### Where
- The user is a visually impaired person who can use this utility to prevent any collisions by warning him

### How
- Developed using Arduino UNO and implemented on SimulIDE.