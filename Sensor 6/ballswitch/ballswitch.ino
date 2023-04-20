#include <esp32-hal-gpio.h>

#define LED_R_PIN 13
#define LED_G_PIN 12
#define LED_B_PIN 14

#define BALL_SWITCH_PIN 4

void setup() {
  pinMode(LED_R_PIN, OUTPUT);
  pinMode(LED_G_PIN, OUTPUT);
  pinMode(LED_B_PIN, OUTPUT);

  pinMode(BALL_SWITCH_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
 int ballSwitchState = digitalRead(BALL_SWITCH_PIN);
 if (ballSwitchState == HIGH) {
   digitalWrite(LED_R_PIN, HIGH);
   digitalWrite(LED_G_PIN, LOW);
   digitalWrite(LED_B_PIN, LOW);
   Serial.println("El sensor ball switch está abierto");
 }
 else {
   digitalWrite(LED_R_PIN, LOW);
   digitalWrite(LED_G_PIN, HIGH);
   digitalWrite(LED_B_PIN, LOW);
    Serial.println("El sensor ball switch está cerrado");
 }
 delay(500);
}