int led = 18;
int brightness = 0;
int fadeAmount = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 225) {

    fadeAmount = -fadeAmount;
  }
  delay(10);
}
