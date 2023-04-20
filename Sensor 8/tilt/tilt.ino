#include <ESP32_Servo.h>

Servo servo;

const int tilt = 4;
int tiltState = 0;

void setup() {
  servo.attach(5);
  pinMode(tilt, INPUT);
  Serial.begin(9600);
}

void loop() {
 tiltState = digitalRead(tilt);
 if (tiltState == HIGH) {
   servo.write(180);
 } else {
   servo.write(90);
 }
}