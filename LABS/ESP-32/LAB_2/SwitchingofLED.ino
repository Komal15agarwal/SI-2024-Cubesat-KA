#define LED 18
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    if (command == "OFF") {
      digitalWrite(LED, LOW);
      Serial.println("TurnED LED OFF");
    } else if (command == "ON") {
      digitalWrite(LED, HIGH);
      Serial.println("TURNED LED ON");
    }
  }
}