# M2-EmbSys
# Case Study : Cooler System
### The Cooler System is a form of embedded system that takes real time input of Temperature and makes decision whether the Cooler system needs to be turned ON/OFF
![Cooler](https://user-images.githubusercontent.com/46968935/154788850-a9b60864-9625-472b-8d9e-5f8e992dc5b7.png)
----------------------------------------------------------
# Component Description
## Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

## Switch Buttons:
- Act as a circuit breaker to either power the system or isolate the system 

## LED’s:
- Act as a mean to communication with the user

## Microcontroller:
- Performs all operations required by our system. Takes input as Temperature of the room and further processes this data to decide whether AC Needs to be turned on/off

## Motion Sensors:
- To determine any human presence in the Room

## Temperature Sensors:
- To determine the temperature of the room. 

## ADC:
- Converts the Analog signal from Potentiometer to Digital

## Motor Driver:
- Used to drive the Actuator

## Actuators:
- Externally connected devices that perform operation as per the decision which the microcontroller takes. (In my case, Turn ON/Off the Cooler)

## LCD Display:
- To show Temperature readings

## Clock:
- For Synchronization
----------------------------------------
# V - Model
## Concept of Operation: 
- Cooler System takes real time input of temperature from the surroundings and makes decision whether the AC needs to be ON/OFF
## Low Level Requirements:
- Switches to turn ON/OFF the system
- Power Supply to the Microcontroller, Sensors and Actuators

## High Level Requirements:
- To detect the Temperature of the room using temperature sensors
- To detect if people are present in the room 
- To make decisions whether to turn ON/OFF the cooler

## Test Cases:
- Are the decives receiving power supply? (Y/N)
- Are the sensors working fine? (Y/N)
- Is the decision made by the microcontroller to turn ON/OFF the cooler correct? (Y/N)

--------------------------
# Case Study : Washing Machine
### The Washing Machine System is a form of embedded system that takes real time inputs of the mode of operation and takes inputs from sensors like the door sensor , load sensor , speed sensor and the load sensor
![washing machine](https://user-images.githubusercontent.com/46968935/154815815-adfdcc1b-13d6-4158-9e18-3df87d41a235.PNG)
]
# Component Description
## Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

## Switch buttons:
- Act as a circuit breaker to either power the system or isolate the system 

## EPROM:
- Storage unit
## LED's:
- They act as a mode of communication with the user.

## Microcontroller:
- Performs all operations requireed by the system.

## Door sensor:
- Senses the door position to switch on or off the light and to make sure the system is closed and is ready to operate.

## Load Sensor:
- Senses the load given and gives the warning if the load exceeds limit.
## Water level sensor:
- Senses the level of water.

## ADC
- Converts analog signal to digital
 
## Clock
- For Synchronization

# V - Model

## Concept of Operation:
- The Washing Machine System is a form of embedded system that takes real time inputs of the mode of operation and takes inputs from sensors like the door sensor , load sensor , speed sensor and the load sensor
## Low Level Requirements:

- Switches to turn ON/OFF the system
- Power Supply to the Microcontroller, Sensors and motor
- To give an alert after the task is completed.
- To display the results using LCD.

## High Level Requirements:
- To detect the level of water using water sensor
- To detect the level of load and give alert if the limit exceeds.
- To detect the position of the door.
## Test Cases:
- Are the decives receiving power supply? (Y/N)
- Are the sensors working fine? (Y/N)
- Are the alerts given when required?(Y/N)

-------------------