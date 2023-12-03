#include <MaxMatrix.h>
int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;

byte buffer [20];
char text[] = "a";

MaxMatrix m(DIN, CS, CLK, maxInUse);
 byte poker[] = {8,8,
 0xff,
 0x81,
 0xa5,
 0xa1,
 0xa1,
 0xa5,
 0x81,
 0xff
 };
 byte sad[] = {8,8,
 0xff,
 0x81,
 0xb5,
 0x91,
 0x91,
 0xb5,
 0x81,
 0xff
 };
 byte smile[]={8,8,
 0xff,
 0x81,
 0xb5,
 0xa1,
 0xa1,
 0xb5,
 0x81,
 0xff
 };
void setup() {
  // put your setup code here, to run once:
  m.init();
  m.setIntensity(8);
}

void loop() {
  // put your main code here, to run repeatedly:
   m.writeSprite(0,0,smile);
delay(1000);
m.clear();
  m.writeSprite(0,0,sad);
delay(1000);
m.clear();
m.writeSprite(0,0,poker);
delay(1000);
for(int i=0; i<8;i++){
  m.shiftLeft(false,false);
  delay(300);
}
m.clear();
}
