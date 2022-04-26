#include "DHT.h" 
#define DHTPIN 3
#define DHTTYPE DHT11
DHT Dht11(DHTPIN,DHTTYPE);

void setup()
{
  Serial.begin(9600);
  Dht11.begin();
}

void loop()
{
  float Nem = Dht11.readHumidity();
  float Sicaklik =Dht11.readTemperature();
  float F = Dht11.readTemperature(true);
  
  Serial.print(Sicaklik);
  Serial.print(" °C");
  Serial.print("|");
  Serial.print(Nem);
  Serial.print(" %");
  Serial.print("|");
  delay(2000);  
}
