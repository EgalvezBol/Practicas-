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

#define Address_LCD 0x27
#define Filas 2
#define Columnas 10
#define trig 5
#define echo 6
int Distancia;
long Tiempo;
LiquidCrystal_I2C LCD_Edgar_Galvez(Address_LCD, Columnas, Filas);

byte Casco[] = {
  B01010,
  B01110,
  B00100,
  B11111,
  B11111,
  B10101,
  B10001,
  B00000
};

void setup()
{
  LCD_Edgar_Galvez.begin(16, 2);
  LCD_Edgar_Galvez.createChar(1, Casco);
  LCD_Edgar_Galvez.write(1);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  LCD_Edgar_Galvez.init();
  LCD_Edgar_Galvez.backlight();
}


void loop()
{
  SENSOR();
  Desigual();
}
int Desigual(){ 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  Tiempo = pulseIn(echo, HIGH);
  Distancia = Tiempo/59;
  delay(50);
  return Distancia;
}
int SENSOR(){
   if( Distancia > 50){
    LCD_Edgar_Galvez.setCursor(7,0);
    LCD_Edgar_Galvez.print("50");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print("     Libre      ");
    LCD_Edgar_Galvez.setCursor(3,0);
    LCD_Edgar_Galvez.print("    ");
    LCD_Edgar_Galvez.setCursor(9,0);
    LCD_Edgar_Galvez.print("    ");
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(13,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
  }
  if( Distancia == 30){
    LCD_Edgar_Galvez.setCursor(7,0);
    LCD_Edgar_Galvez.print("30");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print("   CUIDADO     ");
    LCD_Edgar_Galvez.setCursor(5,0);
    LCD_Edgar_Galvez.print("   ");
    LCD_Edgar_Galvez.setCursor(9,0);
    LCD_Edgar_Galvez.print("   ");
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(11,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
  }
  if( Distancia == 10){
    LCD_Edgar_Galvez.setCursor(7,0);
    LCD_Edgar_Galvez.print("10");
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print("      ALTO      ");
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(9,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.write(1);

  }
 return 0;
}
