#include <dht11.h> 
#include <LiquidCrystal.h>
#define DHT11PIN 7 
LiquidCrystal lcd(12,11,5,4,3,2);
dht11 DHT11;
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop()
{
  int chk = DHT11.read(DHT11PIN);
  lcd.print("Nem (%) ");
  lcd.print((float)DHT11.humidity, 2);
  delay(3000);
  lcd.clear();
  lcd.print("Sicaklik ");
  lcd.print((float)DHT11.temperature, 2);
  delay(3000);
  lcd.clear();
  Serial.println((float)DHT11.temperature, 2);
  Serial.println((float)DHT11.humidity, 2);
}
