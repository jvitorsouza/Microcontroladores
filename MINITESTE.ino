int estado = 0;
int apertado = 0;
int verde=13;
int vermelho=12;
void setup() {
  pinMode(verde, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(vermelho, OUTPUT);
  

}

void loop() {
  apertado = digitalRead(3);
  if (estado == 0 && apertado ) {
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
    estado = 1;
    delay(100);
  }
  if (estado == 1 && !apertado ) {
    //digitalWrite(13, LOW);
    estado = 2;
    delay(100);
  }
  if (estado == 2 && apertado ) {
    digitalWrite(verde, HIGH);
    digitalWrite(vermelho, LOW);
    estado = 3;
    delay(100);
  }
  if (estado == 3 && !apertado ) {
    //digitalWrite(13, HIGH);
    estado = 4;
    delay(100);
  }
  if (estado == 4 && apertado ) {
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, HIGH);
    estado = 5;
    delay(100);
  }
   if (estado == 5 && !apertado ) {
    estado = 6;
    delay(100);
  }
  if (estado == 6 && apertado ) {
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
    estado = 7;
    delay(100);
  }
    if (estado == 7 && !apertado ) {
    estado = 8;
    delay(100);
  }
    if (estado == 8 && apertado ) {
    digitalWrite(verde, HIGH);
    digitalWrite(vermelho, HIGH);
    estado = 9;
    delay(100);
  }
   if (estado == 9 && !apertado ) {
    estado = 0;
    delay(100);
  }
}
