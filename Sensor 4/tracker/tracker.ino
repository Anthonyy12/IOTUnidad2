const int sensorPin = 5;
const int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < 600){
    digitalWrite(ledPin, LOW);
 }
 else{
  digitalWrite(ledPin, HIGH);
 }
 delay(1000);
}