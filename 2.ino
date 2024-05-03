// https://microcontrollerslab.com/k-type-thermocouple-max6675-amplifier-esp32/

#include "max6675.h" 

int SO = 23;
int CS = 5;
int sck = 18;
MAX6675 module(sck, CS, SO);

void setup() {   
  Serial.begin(115200);
}

void loop() {
  float temperature = module.readCelsius(); 
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(F("°C "));   
  delay(1000);
}