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
//Libreria
#include <LiquidCrystal.h>

#define RS 2
#define Enable 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define TRIG 9
#define ECHO 10
#define BUZZ 12
int ED  = 494;
long Distancia;
int No_Personas = -1;

//Constructor
LiquidCrystal LCD_Edgar_Galvez(RS, Enable, D4, D5, D6, D7);

byte CopaLLena[] = {
  B11111,
  B11111,
  B01110,
  B00100,
  B00100,
  B00100,
  B11111,
  B11111
};

byte CopaVacia[] = {
  B11111,
  B10001,
  B01110,
  B00100,
  B00100,
  B00100,
  B11111,
  B11111
};

void setup(){
  for(int i = 0; i <=16; i++){
   pinMode(i,OUTPUT);
}
   pinMode(TRIG, OUTPUT);
   pinMode(ECHO, INPUT);
   pinMode(BUZZ, OUTPUT);
   LCD_Edgar_Galvez.begin(16,2); 
   LCD_Edgar_Galvez.createChar(1,CopaVacia);
   LCD_Edgar_Galvez.createChar(2,CopaLLena);
   LCD_Edgar_Galvez.setCursor(0,0); 
   LCD_Edgar_Galvez.print("No_Personas");
}
void loop(){
  Medicion();
  Limite_No_Personas();
}
int Medicion(){
  long A; 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG, LOW);
  A = pulseIn(ECHO, HIGH);
  Distancia = A/58.2; 
  delay(100);
  return Distancia;
  }

 void Limite_No_Personas(){
    if(Distancia >= 6 && Distancia <=10){
    No_Personas = No_Personas + 1;
      }

    switch(No_Personas){
     case 1:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas"); 
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

     case 2:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

     case 3:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

     case 4:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

      case 5:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

      case 6:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 7:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 8:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

      case 9:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

      case 10:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;

      case 11:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 12:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 13:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 14:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 15:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("No_Personas");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      delay(300);
      break;
      
      case 16:
      LCD_Edgar_Galvez.setCursor(0,0);
      LCD_Edgar_Galvez.print("Limite Alcanzado");
      LCD_Edgar_Galvez.setCursor(No_Personas-1,1); 
      LCD_Edgar_Galvez.write(1);
      break;
    }
      if(No_Personas > 17){
      Limite_Alcanzado();
      }
      }
void Limite_Alcanzado(){
     tone(BUZZ, 523);
      LCD_Edgar_Galvez.setCursor(0,1);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);//Dibujo1
      delay(500);
      
      LCD_Edgar_Galvez.setCursor(0,1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);
      LCD_Edgar_Galvez.write(2);
      LCD_Edgar_Galvez.write(1);//Dibujo2
      delay(500);
      }
