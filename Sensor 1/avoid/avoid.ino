#define SENSOR_PIN 18 

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int state = digitalRead(SENSOR_PIN);

  if (state == LOW)
    Serial.println("Hay un obstaculo");
  else
    Serial.println("Ya no hay obstaculo");

  delay(500);
}