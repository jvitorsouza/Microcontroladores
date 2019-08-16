void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW);
}
int cont=0;
int estado=0;
int apertado=0;
void loop() {
  apertado=digitalRead(3);
  
  if(estado==0 && apertado){
      estado=1;
      digitalWrite(5,HIGH);
  }
  if (estado ==1 && !apertado){
      cont++;
      estado =2;
      digitalWrite(5,LOW);
      Serial.println(cont);
  }
  if (estado==2 && apertado){
    estado=3;
     digitalWrite(5,HIGH);
  }
  if (estado==3 && !apertado){
      cont++;
      estado =0;
        digitalWrite(5,LOW);
      Serial.println(cont);
  }
  
}
