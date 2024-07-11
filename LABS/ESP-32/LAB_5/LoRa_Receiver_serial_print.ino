#include <SPI.h>
#include <LoRa.h>
//define the pin used by transmitter module
#define DIO0 26
#define RST 14
#define NSS 18
#define MOSI 27
#define MISO 19
#define CLK 5

void setup() {
  //initalize Serial monitor
  Serial.begin(115200);
  while (!Serial)
    ;
  Serial.println("LoRa Receiver");
  //setUp LoRa transeciver module
  SPI.begin(CLK, MISO, MOSI, NSS);
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
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    //received a packet
    Serial.print("Received packet:'");
    //read packet
    while (LoRa.available()) {
      String LoRaData = LoRa.readString();
      Serial.print(LoRaData);
    }
    //print RSSI of packet
    Serial.print("'with RSSI");
    Serial.println(LoRa.packetRssi());
  }
}