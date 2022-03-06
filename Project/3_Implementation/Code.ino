/**
 * @file Code.ino
 * @author Aashish Kalra (aashish.kalra1999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<LiquidCrystal.h>
// Define all pins used
#define trigPin 3 
#define echoPin 2
#define buzzPin 12
#define RS 9
#define EN 8
#define D4 4
#define D5 5
#define D6 6
#define D7 7
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);
void setup()
  {
	  lcd.begin(16,2); 
	  pinMode(trigPin,OUTPUT);
	  pinMode(echoPin,INPUT);
    pinMode(buzzPin, OUTPUT);
  }
long duration,distance;
void loop()
  {
    lcd.clear();
    lcd.setCursor(0,0);
	  digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration/20) / 29.1;
    
    if (distance <= 10 && distance >=0 ) 
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Warning:");
        lcd.print(distance);
        lcd.println("m");
        delay(1000);
        digitalWrite(buzzPin, HIGH);
        delay(1000);
      }
    else
      {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Distance:");
        lcd.print(distance);
        lcd.println("m");
        delay(1000);
        digitalWrite(buzzPin, LOW);
        delay(1000);
      }
}
