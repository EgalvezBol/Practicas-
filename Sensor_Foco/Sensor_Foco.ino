/*
Fundación Kinal
Centro Educativo Técnico Laboral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
NompinBre: Edgar Emanuel Gálvez Bol
Carné: 2019253 
*/
#define rele 9
#define trig A3
#define echo A2
#define LEDa 7
#define LEDb 8
#define LEDc 4
#define LEDd 3
#define LEDe 2
#define LEDf 6
#define LEDg 5

int Distancia; 
int Duracion;
int conteo =0;

void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A2,INPUT);
}
void loop() {
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  Duracion = pulseIn(echo,HIGH);
  Distancia = Duracion / 59;
  Serial.println(Distancia);
  delay(500);

if(Distancia > 5 && Distancia < 11){
  conteo = conteo +1;
}
   
    if(conteo==0){
    digitalWrite(7,HIGH); //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH);  //C
    digitalWrite(3,HIGH);  //D
    digitalWrite(2,HIGH);  //E
    digitalWrite(6,HIGH);  //F
    digitalWrite(5,LOW);   //G
    digitalWrite(9,HIGH);
  }

if(conteo==1){
    digitalWrite(7,LOW);  //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,LOW);  //D
    digitalWrite(2,LOW);  //E
    digitalWrite(6,LOW);  //F
    digitalWrite(5,LOW);  //G
    digitalWrite(9,HIGH);
  }
  if(conteo==2){
    digitalWrite(7,HIGH);  //A
    digitalWrite(8,HIGH);  //B
    digitalWrite(4,LOW);   //C
    digitalWrite(3,HIGH);  //D
    digitalWrite(2,HIGH);  //E
    digitalWrite(6,LOW);   //F
    digitalWrite(5,HIGH);  //G
    digitalWrite(9,HIGH);
  }
  if(conteo==3){
    digitalWrite(7,HIGH); //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,HIGH); //D
    digitalWrite(2,LOW);  //E
    digitalWrite(6,LOW);  //F
    digitalWrite(5,HIGH); //G
    digitalWrite(9,HIGH);
  }
   if(conteo==4){
    digitalWrite(7,LOW);  //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,LOW);  //D
    digitalWrite(2,LOW);  //E
    digitalWrite(6,HIGH); //F
    digitalWrite(5,HIGH); //G
    digitalWrite(9,HIGH);
  }
  if(conteo==5){
    digitalWrite(7,HIGH);  //A
    digitalWrite(8,LOW);   //B
    digitalWrite(4,HIGH);  //C
    digitalWrite(3,HIGH);  //D
    digitalWrite(2,LOW);   //E
    digitalWrite(6,HIGH);  //F
    digitalWrite(5,HIGH);  //G
    digitalWrite(9,HIGH);
  }
  if(conteo==6){
    digitalWrite(7,LOW);  //A
    digitalWrite(8,LOW);  //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,HIGH); //D
    digitalWrite(2,HIGH); //E
    digitalWrite(6,HIGH); //F
    digitalWrite(5,HIGH); //G
    digitalWrite(9,HIGH);
  }
  if(conteo==7){
    digitalWrite(7,HIGH); //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,LOW);  //D
    digitalWrite(2,LOW);  //E
    digitalWrite(6,LOW);  //F
    digitalWrite(5,LOW);  //G
    digitalWrite(9,HIGH);
  }
  if(conteo==8){
    digitalWrite(7,HIGH);  //A
    digitalWrite(8,HIGH);  //B
    digitalWrite(4,HIGH);  //C
    digitalWrite(3,HIGH);  //D
    digitalWrite(2,HIGH);  //E
    digitalWrite(6,HIGH);  //F
    digitalWrite(5,HIGH);  //G
    digitalWrite(9,HIGH);
  }
  if(conteo==9){
    digitalWrite(7,HIGH); //A
    digitalWrite(8,HIGH); //B
    digitalWrite(4,HIGH); //C
    digitalWrite(3,LOW);  //D
    digitalWrite(2,LOW);  //E
    digitalWrite(6,HIGH); //F
    digitalWrite(5,HIGH); //G
    digitalWrite(9,LOW);
}
}
