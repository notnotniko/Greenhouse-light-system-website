//Lighting system with Photoresistor (LDR)
//Author: Patrick Kiernicki
//Nov 18, 2025
//If the LDR detects the light level to be under a certain value (400), it will turn the LEDs on.

//LDR pin
int sensorPin = A0;
//LEDs pin
int ledControlPin = 9;

void setup() {
  pinMode(ledControlPin, OUTPUT);
}
void loop() {
  int lightLevel = analogRead(sensorPin); //measure light level
  if (lightLevel < 400) {
    digitalWrite(ledControlPin, HIGH); //turns LEDs on
  } else {
    digitalWrite(ledControlPin, LOW); //turns LEDs off
  }
}