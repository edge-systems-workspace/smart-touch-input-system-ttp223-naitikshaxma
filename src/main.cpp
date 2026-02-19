#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
int touchPin = 3;
int ledPin = 13;

void setup() {
    pinMode(touchPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int touchState = digitalRead(touchPin);
    if (touchState == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touch Detected");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("No Touch");
    }
    delay(200);
}

 // TODO 2:
int ledPin = 13;

void setup() {

    // TODO 3:
    pinMode(touchPin, INPUT);

    // TODO 4:
    pinMode(ledPin, OUTPUT);

    // TODO 5:
    // Print system initialization message
}

void loop() {

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
