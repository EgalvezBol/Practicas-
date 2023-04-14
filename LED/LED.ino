/*
Fundación Kinal
Centro Educativo Técnico LapinBral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
NompinBre: Edgar Emanuel Gálvez Bol
Carné: 2019253 
*/

//Defino Los botones y los colores del RGB
#define Button1  4
#define Button2 5
#define pR   6
#define pG   7
#define pB   8


void setup() {
  
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(pR, OUTPUT);
  pinMode(pG, OUTPUT);
  pinMode(pB, OUTPUT);
  

}

void loop() {
    //Esta es la secuencia si no se presionan los pulsadores
digitalWrite(pB,HIGH); delay (500); digitalWrite(pB,LOW);
digitalWrite(pR,HIGH);delay (500); digitalWrite(pR,LOW); 
digitalWrite(pG,HIGH);delay (500); digitalWrite(pG,LOW); 
  
  // Si presiono el primer pulsador
  while (digitalRead(Button1)== HIGH && digitalRead(Button2)== LOW)
  {
   digitalWrite(pR, HIGH);
   digitalWrite(pG, HIGH);
   digitalWrite(pB, LOW);
  }
  //Si presiono el segundo pulsador
  while (digitalRead(Button1)== LOW && digitalRead(Button2)== HIGH)
  {
   digitalWrite(pR, LOW);
   digitalWrite(pG, HIGH);
   digitalWrite(pB, HIGH);
  }
  //si presiono ambos pulsadores
  while (digitalRead(Button1)== HIGH && digitalRead(Button2)== HIGH)
  {
   digitalWrite(pR, HIGH);
   digitalWrite(pG, LOW);
   digitalWrite(pB, HIGH);
  }
  

}
