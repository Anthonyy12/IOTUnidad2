#define flamePin 27

void setup() {
  Serial.begin(9600);
  pinMode(flamePin, INPUT);
}

void loop() {
  int flameValue = digitalRead(flamePin);
  
  if(flameValue == HIGH){
    Serial.println("¡Fuego detectado!");
 }
 else{
  Serial.println("No hay fuego");
 }
 delay(1000);
}