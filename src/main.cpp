#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author NAITIK SHARMA;
 * @date 2026-02-19;
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
int touchPin = 3;

 // TODO 2:
int ledPin = 13;

void setup() {

    // TODO 3:
    pinMode(touchPin, INPUT);

    // TODO 4:
    pinMode(ledPin, OUTPUT);

    // TODO 5:
    Serial.begin(9600);
}

void loop() {

    // TODO 6:
    int touchState = digitalRead(touchPin);

    // TODO 7:
    if (touchState == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touch Detected");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("No Touch");
    }
    // TODO 8:
    delay(200);
}
