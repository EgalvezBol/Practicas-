/*
Fundación Kinal
Centro Educativo Técnico Laboral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
Nombre: Edgar Emanuel Gálvez Bol
Carné: 2019253 
*/
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>  


//Directivas de preprocesador
#define Direccion_LCD 0x27
#define Filas 2
#define Columnas 16
#define TRIG A0
#define ECHO A1
#define BUZZ 12
#define D1 2
#define D2 3
#define D3 4
#define D4 5
#define D5 6
#define D6 7
#define D7 8
#define D8 9
#define D9 10
#define D10 11
int Distancia;
int G;

//Constructor
LiquidCrystal_I2C LCD_Edgar_Galvez(Direccion_LCD, Columnas, Filas);

void Pines_Configuraciones(){
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D10, OUTPUT);
}

void setup()
{
  Pines_Configuraciones();
  
  for(G=2; G<=11;G++){
  }
  pinMode(BUZZ, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  LCD_Edgar_Galvez.init();
  LCD_Edgar_Galvez.backlight();
}


void loop()
{
  Medicion();
  Alarma();
}
int Medicion(){
  long E; 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG, LOW);
  E = pulseIn(ECHO, HIGH);
  Distancia = E/59;
  delay(50);
  return Distancia;
}
int Alarma(){
   if( Distancia > 45){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print(" Out of reach ");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(" PRIVATE STATE ");
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
  }
  if( Distancia < 45 && Distancia > 30){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print(" Acercandose A  ");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(" PRIVATE STATE ");
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
  }
  if( Distancia < 30 && Distancia > 15){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print(" PRECAUTION ");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(" PRIVATE STATE ");
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    tone(BUZZ, 523);
    delay(5000);
    noTone(BUZZ);
  }


  if( Distancia < 15 && Distancia > 0){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print("5Trespassing Property");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(" PRIVATE STATE ");
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
    tone(BUZZ, 523);
    delay(10000);
    noTone(BUZZ);
 }
    else {
    noTone(BUZZ);
 }
    return 0;
}
