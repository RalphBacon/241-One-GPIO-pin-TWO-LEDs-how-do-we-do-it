#include <Arduino.h>

// Standard GPIO pin (PWM capable)
#define ledPin 9

void setup() {
    // Set it as output
    pinMode(ledPin,OUTPUT);
}

void loop() {

    // GREEN - SINK Current (from VCC through LED to GND via Arduino)
    digitalWrite(ledPin,LOW);
    delay(5000);

    // RED - SOURCE current (from Arduino to LED then GND)
    digitalWrite(ledPin,HIGH);
    delay(5000);
}