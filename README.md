# Air Quality Sensor with LCD

What lies before you here is code for checking the Quality of Air using any Arduino & MQ135 sensor and displaying the results on 2x16 LCD
MQ135 sensor is capable of measuring NH3, NOx, alcohol, Benzene, smoke, CO2, etc. but it does all of that in the same time, so it's not very useful.
Preheat time for sensor is between 20 seconds and 24 hours, according to various sources.

## Getting Started

These instructions will get you a copy of the project up and running on your local Arduino.

### Prerequisites

Arduino
MQ135
LCD1602 module
I2C module (not necessary, but this specific code doesn't work without it)

Wiring:
MQ135

VCC - 5V
GND - GND
AD - A0
A0 - Do not connect

LCD I2C

VCC - 5V
GND - GND
SDA - A4
SCL - A5

## Acknowledgments

https://microcontrollerslab.com/interfacing-mq-135-gas-sensor-arduino/
