#include<Wire.h>

//MASTER



int pot = A1; 
int potVal = -1;
int motorVal = -1;





void setup() {
  Wire.begin();

}

void loop() {
  
 potVal = analogRead(pot);
 Wire.beginTransmission(17);
 Wire.write(potVal);
 Wire.endTransmission();
 delay(500);
}
