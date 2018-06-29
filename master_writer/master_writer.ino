// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>
#define OUTPUT 20

void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}

byte x = 0;

void loop() {

  digitalWrite(OUTPUT, HIGH);   // turn the LED on (HIGH is the voltage level)               
  Wire.beginTransmission(0x20); // transmit to device #8
  Wire.write(0b01110111);        // sends five bytes
  Wire.endTransmission();    // stop transmitting

  delay(400);
  digitalWrite(OUTPUT, LOW);    // turn the LED off by making the voltage LOW
  Wire.beginTransmission(0x20); // transmit to device #8
  Wire.write(0b10001000);        // sends five bytes
  Wire.endTransmission();    // stop transmitting

  delay(300);
  
}
