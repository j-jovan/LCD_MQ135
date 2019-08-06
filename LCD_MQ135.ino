#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
int sensorValue;
int digitalValue;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  sensorValue = analogRead(0);

  //digitalValue = digitalRead(2);

  //Ukljuci diodu ako vrednost predje 400
  if (sensorValue > 400)
  {
    digitalWrite(13, HIGH);
  }
  else
    digitalWrite(13, LOW);

  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); // First row
  lcd.print("Kvalitet vazduha ");
  lcd.setCursor(4, 1);
  lcd.print(sensorValue, DEC);
  lcd.setCursor(7, 1);
  lcd.print("PPM");

  Serial.println(sensorValue, DEC);
  delay(1000);
}
