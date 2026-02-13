/*
  Using the Qwiic Relay
  By: Nathan Seidle
  SparkFun Electronics
  Date: February 12, 2026

  License: This code is public domain, please do whatever you want!

  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/17047 - Qwiic GPIO
  https://www.sparkfun.com/products/26784 - Qwiic Power Switch
  https://www.sparkfun.com/products/26851 - Qwiic Directional Pad

  This example demonstrates how to turn the relay on/off.

  Hardware Connections:
  Plug the Qwiic Relay into a Qwiic enabled board (SparkFun Thing Plus C, RedBoard, RedBoard IoT, etc)
  If you don't have a platform with a Qwiic connection use the SparkFun Qwiic Breadboard Jumper (https://www.sparkfun.com/products/17912)
  Open the serial monitor at 115200 baud to see the output
*/

#include <SparkFun_I2C_Expander_Arduino_Library.h> // Click here to get the library: http://librarymanager/All#SparkFun_I2C_Expander_Arduino_Library

//The Qwiic Relay Line uses a 16-bit GPIO expander, the PCA5555
SFE_PCA95XX io(PCA95XX_PCA9555); // Create a PCA9555 instance

void setup()
{
  Serial.begin(115200);
  delay(250);
  Serial.println("SparkFun PCA95XX example");

  Wire.begin();

  // Initialize the PCA955x at its default address (0x20)
  if (io.begin() == false)
  {
    Serial.println("PCA95xx not detected. Please check wiring. Freezing...");
    while (true);
  }

  // pinMode can be used to set an I/O as OUTPUT or INPUT
  for (int i = 0; i < 4; i++)
  {
    io.pinMode(i, OUTPUT);
  }
}

void loop()
{
    io.digitalWrite(0, HIGH); // Turn relay on
    io.digitalWrite(1, LOW); // Turn LED on
    Serial.println("Relay on");
    delay(2500);

    io.digitalWrite(0, LOW); // Turn relay off
    io.digitalWrite(1, HIGH); // Turn LED off
    Serial.println("Relay off");
    delay(2500);
}
