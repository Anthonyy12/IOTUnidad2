const int S0 = 2;
const int S1 = 4;
const int sensorOut = 15;

void setup() {
  Serial.begin(9600);
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(sensorOut, INPUT);

  digitalWrite(S0, LOW);
  digitalWrite(S1, HIGH);
}

void loop() {
 int sensorValue = analogRead(sensorOut);
 Serial.println(sensorValue);
 delay(1000);
}