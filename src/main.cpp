#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author TANMAY SINGHAL
 * @date 2026-02-17
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define LDR analog pin (Use A0)
 int ldrPin = A0;

 // TODO 2:
 // Create variable to store sensor reading
 int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Started");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(ldrPin);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if (ldrValue < 500) {

        // TODO 8:
        // Print brightness status
        Serial.println("Bright Environment");
    }
    else {
        Serial.println("Dark Environment");
    }

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}
