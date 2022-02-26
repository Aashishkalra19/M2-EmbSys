# Description
## Introduction
This Project is an example of embedded system which uses a microcontroller, a ultra sonic sensor and LCD Screen.The ultra sonic sensor sends ultra sonic waves that are bounced back after hitting the object placed infront of the sensor. The time taken by the signals to bounce back determines how far the object is from the sensor.

------------------------------

## High Level Requirements
* Must perform operations such as:
- To detect the distance between ultrasonic sensor and the object placed infront of it and display the same on Lcd
- To turn On the Buzzer when the distance between the ultrasonic sensor and the object is too less

## Low Level Requirements
* Low level requirements must have
    -  Interface HC-SR04 (UltraSonic sensor) with Atmega8
    -  Interface LCD With Atmega8
    -  Interface Buzzer with Atmega8
----------------------------------------
## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals which the ultrasonic sensor receives and processes them to find the distance between the object and the sensor

### Ultra Sonic Sensor
- Sends and recieves ultra sonic signals which are used to determine distance between the sensor and the object

### LCD Display
- 16*2 LCD Display is used to show warning also to print the distance in CM

--------------------------------------

## SWOT

### Strengths
- To display the distance between the object and Ultrasonic sensor on LCD screen
- Easy to understand application and use
- Easy method to check whether the distace between the object is very less by turning on the buzzer
- Ultrasonic sensors are highly accurate and can detect small variations

 ### Weakness 
- Ultrasonic sensors have difficulties in reading reflections from soft, curved and thin as well as a small object
- Measuring the distance is limited

### Opportunities
- Used in day to day life by everyone
- Can be used in many applications such as Door lock sensor, Seat belt sensor and many more

### Threats
- Other sensors can be used which have greater efficiency than Ultrasonic Sensor
- Many other similar applications available
----------------------------------------

## 4W's & 1H
### Who
- A user who wants to find distance between himself and object placed infront of him.

### What
- This is a utility application to determine distance and warn the user if the distance is very less by turning on the buzzer/Leds.

### When 
-  Can be used in Seat belt notifier, Door lock notifier, window notofoer, water level detector and many more

### Where
- User can belong to any background who can use this utility to determine distance or to check if any object is present infront of him.

### How
- Developed using C Language and implemented on SimulIDE.