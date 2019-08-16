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
 if( Serial.available()>0){
    char incomingByte=Serial.read();
     //digitalWrite (5,HIGH);
     if(incomingByte=='r' || incomingByte=='R'){
    digitalWrite (5,HIGH);
    cont=0;
    delay(1000);
    digitalWrite (5,LOW);
 }
 }

 
  apertado=digitalRead(3);
  
  if(estado==0 && apertado){
      estado=1;
       cont++;
       Serial.println(cont);
  }
  if (estado ==1 && !apertado){
      estado =2;
  }
  if (estado==2 && apertado){
     estado=3;
     cont++;
      Serial.println(cont);
  }
  if (estado==3 && !apertado){
      estado =0;
  }
}
