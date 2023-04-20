#include <OneWire.h>
#include <DallasTemperature.h>

const int oneWireBus = 4;
OneWire oneWire(oneWireBus);

DallasTemperature sensors (&oneWire);

void setup() {
  Serial.begin(115200);
  sensors.begin();
}

void loop() {
 Serial.print("Mandando comandos a los sensores");
 sensors.requestTemperatures();
 float temperatureC = sensors.getTempCByIndex(0);
 Serial.print("Temperatura sensor: ");
 Serial.print(temperatureC);
 Serial.println("°C");
 delay(5000);
}