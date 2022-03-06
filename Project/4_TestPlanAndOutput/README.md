##  High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Integrate Ultrasonic sensor with Microcontroller |  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_02       |Integrate Buzzer with Microcontroller|  None | Succesful Integration |Succesful Integration|Requirement based |

##  Low level test plan

| **Test ID** | **Description**       | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |   
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Use Potentiometer to give input to the ultrasonic sensor |  -  | -|-|Requirement based |
|  L_02       | Detect Distance of any object placed infront of ultrasonic sensor |  For simulation : Expected input for ultrasonic sensor is given with help of potentiometer  | Distance of object from ultrasonic sensor in "cm"|Distance of object from ultrasonic sensor in "cm"|Requirement based |
|  L_03       | To power the buzzer if any object is too close to the ultrasonic sensor | Object too close to the ultrasonic sensor |Buzzer sound| Buzzer Sound |Requirement based    |
