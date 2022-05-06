#include <Wire.h>
int val = 1234;

void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.beginTransmission(8);
  Wire.write(val);            
  Wire.endTransmission();    
  Serial.println(val);
  delay(500);
  val++;
}
