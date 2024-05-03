#include "max6675.h" 

int soPin = 4;// SO=Serial Out
int csPin = 5;// CS = chip select CS pin
int sckPin = 6;// SCK = Serial Clock pin

MAX6675 robojax(sckPin, csPin, soPin);// create instance object of MAX6675


void setup() {

     	// Robojax.com Code YouTube Watch it here http://robojax.com/L/?id=338        
  Serial.begin(9600);// initialize serial monitor with 9600 baud
  Serial.println("Robojax MAX6675"); 

}

void loop() {
  // basic readout test, just print the current temp
  // Robojax.com MAX6675 Temperature reading on Serial monitor
   	// Robojax.com Code YouTube Watch it here http://robojax.com/L/?id=338  
   Serial.print("C = "); 
   Serial.print(robojax.readCelsius());
   Serial.print(" F = ");
   Serial.println(robojax.readFahrenheit());

             
   delay(1000);
}

