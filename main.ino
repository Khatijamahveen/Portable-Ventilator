/*
 * Project: Portable Ventilator Using Arduino
 * Author: Khatija Mahveen
 * Description: Automates a BVM/Ambu bag using a servo motor controlled by a potentiometer.
 *              Displays breathing cycle and speed on a 16x2 LCD using I2C.
 */

#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD Address for 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

Servo myservo;  // Create servo object to control the motor

int potpin = 0; // Analog pin for potentiometer (User Input)
int val;        // Variable to store the analog value
float pos = 0;  // Variable to store servo position

void setup() 
{
  lcd.begin();          // Initialize the LCD
  lcd.backlight();      // Turn on the backlight
  
  myservo.attach(9);    // Attach servo to pin 9
  Serial.begin(9600);   // Initialize Serial Monitor

  // Display Startup Message
  lcd.setCursor(0, 0);
  lcd.print("Emergency Vent");
  lcd.setCursor(2, 1);
  lcd.print("B8 MINIPROJECT");
  delay(4000);
}

void loop() 
{
  // Read potentiometer value (0-1023) and scale it to servo angle (0-180)
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  
  myservo.write(val);   // Set servo position based on scaled value
  Serial.println(val);  // Print value to Serial Monitor for debugging
  delay(15);            // Short delay for servo stabilization

  // Control Modes based on User Input (Potentiometer Value)
  if (val <= 30) 
  {
    // FAST SPEED - 100 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Fast Ang:100 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 4 sec ");

    for (pos = 0; pos <= 100; pos += 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 100; pos >= 0; pos -= 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
  } 
  else if (val >= 31 && val <= 60) 
  {
    // FAST SPEED - 110 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Fast Ang:110 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 4.43 sec ");

    for (pos = 0; pos <= 110; pos += 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 110; pos >= 0; pos -= 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
  }
  else if (val >= 61 && val <= 90) 
  {
    // FAST SPEED - 120 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Fast Ang:120 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 3.53 sec ");

    for (pos = 0; pos <= 120; pos += 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 120; pos >= 0; pos -= 1) 
    {
      myservo.write(pos); 
      delay(15);
    }
  }
  else if (val >= 91 && val <= 120) 
  {
    // SLOW SPEED - 100 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Slow Ang:100 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 5 sec ");

    for (pos = 0; pos <= 100; pos += 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 100; pos >= 0; pos -= 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
  }
  else if (val >= 121 && val <= 150) 
  {
    // SLOW SPEED - 110 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Slow Ang:110 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 5.5 sec ");

    for (pos = 0; pos <= 110; pos += 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 110; pos >= 0; pos -= 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
  }
  else if (val >= 151 && val <= 180) 
  {
    // SLOW SPEED - 120 degrees
    lcd.setCursor(0, 0);
    lcd.print("Spd:Slow Ang:120 ");
    lcd.setCursor(0, 1);
    lcd.print("Breath cycle 6 sec ");

    for (pos = 0; pos <= 120; pos += 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
    for (pos = 120; pos >= 0; pos -= 0.6) 
    {
      myservo.write(pos); 
      delay(15);
    }
  } 
}
