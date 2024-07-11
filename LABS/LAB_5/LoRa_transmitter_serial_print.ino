#include <SPI.h>
#include <LoRa.h>
#define DIO0 26
#define RST 14
#define NSS 18
#define MOSI 27
#define MISO 19
#define SCLK 5
int counter = 0;
void setup() {
  //initalize Serial monitor
  Serial.begin(115200);
  while (!Serial);
  Serial.println("LoRa Sender");
  //setUp LoRa transeciver module
  SPI.begin(SCLK, MISO, MOSI, NSS);
  LoRa.setPins(NSS, RST, DIO0);
  //replace the LoRa.beding(---E-) arguemnet with your location's frequency
  //433E6 for Asia
  //866E6 for Europe
  //915E6 for North America
  while (!LoRa.begin(433E6)) {
    Serial.println(".");
    delay(500);
  }
  LoRa.setSyncWord(0xF3);
  Serial.println("LoRa Initalizing Ok!");
}
void loop() {
  Serial.print("Sending packet:");
  Serial.println(counter);
  //send LoRa packet to recevier
  LoRa.beginPacket();
  LoRa.print("hello");
  LoRa.print(counter);
  LoRa.endPacket();
  counter++;
  delay(10000);
}