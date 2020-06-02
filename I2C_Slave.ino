#include<Wire.h>

//Slave

int potVal = -1;
int motVal = -1;
int motor = 3;
void setup() {
pinMode(motor,OUTPUT);
Wire.begin(17);
Wire.onReceive(receiveEvent);
 Serial.begin(9600);
}

void loop() {
  

}


void receiveEvent(int howLong)
{
Serial.println();
while(Wire.available()>0)
{
  potVal = Wire.read();
Serial.println(potVal);
}  

motVal = map(potVal,0,1023,0,255);
analogWrite(motor,potVal);

}
