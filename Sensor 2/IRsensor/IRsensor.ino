#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_EMITTER_PIN 4

IRsend irsend(IR_EMITTER_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  irsend.sendNEC(0x00FF00FF, 32);
  Serial.println("Hola");
  delay(1000);
}