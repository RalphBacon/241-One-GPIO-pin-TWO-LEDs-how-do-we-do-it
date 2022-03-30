#include <Arduino.h>

// Standard GPIO pin (PWM capable)
#define ledPin 9

void setup() {
    // Nothing to do here
    unsigned long a = millis();
}

void loop() {
    // Send stream of PWM pulses - mark/space ratio will determine colour
    // ie more red/less green gives a dirty orange colour!

    // Fade Green to Red
    for (auto cnt = 0; cnt <= 255; cnt++) {
        analogWrite(ledPin, cnt);
        delay(5);
    }

    delay(500);

    // Fade Red to Green
    for (auto cnt = 255; cnt >= 0; cnt--) {
        analogWrite(ledPin, cnt);
        delay(5);
    }

    delay(500);
}