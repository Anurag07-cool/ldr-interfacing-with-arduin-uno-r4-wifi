#include <Arduino.h>
#define ldrPin A0
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
}

void loop() {
// write your code here
    int ldrValue = analogRead(ldrPin);
    int lightPercent = map(ldrValue, 0, 1023, 0, 100);
    Serial.println(ldrValue);
    Serial.println(lightPercent);
    delay(500);
}