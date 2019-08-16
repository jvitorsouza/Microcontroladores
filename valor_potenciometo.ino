void setup() {
digitalWrite(A0, INPUT);
pinMode(12, INPUT_PULLUP);
Serial.begin(9600);
pinMode(10, OUTPUT);
}
int x;
int led=10;
int estado=0;
int y=0;
void loop() {
 x=analogRead(A0);
 x=map(x,y,1023,0,255);
 analogWrite(led,x); 
 Serial.println(x);
   
  
  
  if(estado==0 && digitalRead(12)==LOW){
      estado=1;
      y=x; 

 
  }
  if (estado ==1 && digitalRead(12)==LOW){
      estado =2;
  }
  if (estado==2 && digitalRead(12)==HIGH){
     estado=3;
    
     
  }
  if (estado==3 && digitalRead(12)==HIGH){
      estado =0;
  }
}
