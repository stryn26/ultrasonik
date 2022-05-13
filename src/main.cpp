#include <Arduino.h>
#include <HCSR04.h>

int trigpin= 13;
int echopin= 12;

double hasilUkur;
UltraSonicDistanceSensor sensorjarak(trigpin,echopin);

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  hasilUkur=sensorjarak.measureDistanceCm();
  Serial.print("Jarak Ukur= ");
  Serial.print(hasilUkur);
  Serial.println("cm");
  delay(500);
}