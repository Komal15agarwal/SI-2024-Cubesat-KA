#include "DHT.h"
#define DHT11PIN 23
DHT dht(DHT11PIN, DHT11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("ōC");
  Serial.println("Humidity:");
  Serial.print(humi);
  delay(1000);
}
