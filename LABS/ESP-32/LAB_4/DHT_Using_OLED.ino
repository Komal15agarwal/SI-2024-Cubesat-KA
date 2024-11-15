#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define SCREEN_WIDTH 128  //128OLED DISPLAY WIDTH
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define DHT11PIN 5

#define DHTTYPE DHT11
DHT dht(DHT11PIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0X3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ;
  }
  delay(2000);
  display.clearDisplay();
  display.setTextColor(WHITE);
}

perature ");
  display.setTextSize(2);
display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
display.setCursor(0, 10);
display.print(temp);
display.print(" ");
void loop() {
  delay(5000);

  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  if (isnan(humi) || isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0, 0);
display.print("tem
display.setTextSize(2);
display.print("C");


display.setTextSize(1);
display.setTextColor(SSD1306_BLACK,SSD1306_WHITE);
display.setCursor(0,35);
display.print("HUMIDITY");
display.setTextSize(2);
display.setTextColor(SSD1306_BLACK,SSD1306_WHITE);
display.setCursor(0,45);
display.print(humi);
display.print(" %");

display.display();
}