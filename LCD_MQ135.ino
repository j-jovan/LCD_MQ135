#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
int sensorValue;
int digitalValue;

void setup()
{
Serial.begin(9600); // sets the serial port to 9600
pinMode(13, OUTPUT);
pinMode( 3, INPUT);
}

void loop()
{
sensorValue = analogRead(0); // read analog input pin 0

digitalValue = digitalRead(2); 

if(sensorValue>400)
{
digitalWrite(13, HIGH);
}
else
digitalWrite(13, LOW);

lcd.begin();
lcd.backlight();
lcd.setCursor(0, 0); // First row
lcd.print("Kvalitet vazduha ");
lcd.setCursor(0,1);
lcd.print(sensorValue, DEC);
lcd.setCursor(3,1);
lcd.print("PPM");

Serial.println(sensorValue, DEC); // prints the value read
delay(1000); // wait 100ms for next reading
}
