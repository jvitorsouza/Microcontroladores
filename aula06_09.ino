int LDR = 0;
int INTEN = 0;
int lumin = 0;
int pos = 0;
int porta = 10;
int ang = 90, ang1 = 0, ang2 = 0;
int E = 0, D = 0;
#include<Servo.h>
Servo s;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  s.attach(porta);
}

void loop() {

  ang1 = ang + 10;
  delay(500);
  s.write(ang1);
  E = analogRead(A5);
  ang2 = ang - 10;
  delay(500);
  D = analogRead(A5);
  s.write(ang2);

  if ( D>E )
  {
    ang = ang+10;
    //s.write(ang);
    Serial.print("D: ");
    Serial.println(D);
    delay(100);
  }
  else
  {
     ang = ang-10;
      //s.write(ang);
    Serial.print("E: ");
    Serial.println(E);
    delay(100);
  }
}
