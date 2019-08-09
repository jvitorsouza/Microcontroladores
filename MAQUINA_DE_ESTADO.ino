int estado=0;
int apertado=0;
void setup() {
  pinMode(13,OUTPUT);
 pinMode(3, INPUT_PULLUP);

}

void loop() {
  apertado=digitalRead(3);
  if (estado ==0 && apertado ){
     digitalWrite(13, LOW);
     estado=1;
     delay(100);
  }
   if (estado ==1 && !apertado ){
     //digitalWrite(13, LOW);
     estado=2;
     delay(100);
  }
    if (estado ==2 && apertado ){
     digitalWrite(13, HIGH);
     estado=3;
      delay(100);
    }
   if (estado ==3 && !apertado ){
     digitalWrite(13, HIGH);
     estado=0;
      delay(100);
}
    }
    
