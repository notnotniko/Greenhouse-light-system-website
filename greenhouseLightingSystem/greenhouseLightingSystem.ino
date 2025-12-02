//Lighting system with Photoresistor (LDR)
//Author: Patrick Kiernicki
//Nov 18, 2025
//If the LDR detects the light level to be under a certain value, it will turn the LEDs on.

//LDR pin
int sensorPin = A0;
//LEDs pin
int ledControlPin = 9;

void setup() {
  pinMode(ledControlPin, OUTPUT);
}
void loop() {
  int lightLevel = analogRead(sensorPin); //measure light level
  if (lightLevel < 6) {
    digitalWrite(ledControlPin, LOW); //turns LEDs off
  } else {
    digitalWrite(ledControlPin, HIGH); //turns LEDs on

  }
}
