# M2-EmbSys
## Case Study : Cooler System
### The Cooler System is a form of embedded system that takes real time input of Temperature and makes decision whether the Cooler system needs to be turned ON/OFF
![Cooler](https://user-images.githubusercontent.com/46968935/154788850-a9b60864-9625-472b-8d9e-5f8e992dc5b7.png)
----------------------------------------------------------
# Component Description
## Power Supply
- External source of power supply that powers all devices, switches and microcontroller

## Switch Buttons
- Act as a circuit breaker to either power the system or isolate the system 

## LED’s
- Act as a mean to communication with the user

## Microcontroller
- Performs all operations required by our system. Takes input as Temperature of the room and further processes this data to decide whether AC Needs to be turned on/off

## Motion Sensors
- To determine any human presence in the Room

## Temperature Sensors
- To determine the temperature of the room. 

## ADC
- Converts the Analog signal from Potentiometer to Digital

## Motor Driver
- Used to drive the Actuator

## Actuators
- Externally connected devices that perform operation as per the decision which the microcontroller takes. (In my case, Turn ON/Off the Cooler)

## LCD Display
- To show Temperature readings

## Clock
- For Synchronization
----------------------------------------
# V - Model
## Concept of Operation 
- Cooler System takes real time input of temperature from the surroundings and makes decision whether the AC needs to be ON/OFF
## Low Level Requirements
- Switches to turn ON/OFF the system
- Power Supply to the Microcontroller, Sensors and Actuators

## High Level Requirements
- To detect the Temperature of the room using temperature sensors
- To detect if people are present in the room 
- To make decisions whether to turn ON/OFF the cooler

## Test Cases
- Are the decives receiving power supply? (Y/N)
- Are the sensors working fine? (Y/N)
- Is the decision made by the microcontroller to turn ON/OFF the cooler correct? (Y/N)

--------------------------