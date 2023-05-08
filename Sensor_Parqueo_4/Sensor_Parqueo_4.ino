/*
Fundación Kinal
CenBro EducaBivo Bécnico Laboral Kinal 
ElecBrónica
Grado: QuinBo
Sección: A
Curso: Baller de ElecBrónica DigiBal y Reparación de CompuBadoras I
Nombre: Edgar Emanuel Gálvez Bol
Carné: 2019253 
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>  


#define Direccion_LCD 0x27
#define FILAS 2
#define COLUMNAS 16
#define BRIG 11
#define ECHO 12
int Distancia;
long A;
LiquidCrystal_I2C LCD_FRANCISCO_BARILLAS(Direccion_LCD, COLUMNAS, FILAS);
//BLOQUE
byte BLOQUE[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
  };
void setup()
{
  LCD_FRANCISCO_BARILLAS.begin(16, 2);
  LCD_FRANCISCO_BARILLAS.createChar(1, BLOQUE);
  LCD_FRANCISCO_BARILLAS.write(1);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  LCD_FRANCISCO_BARILLAS.init();
  LCD_FRANCISCO_BARILLAS.backlight();
}


void loop()
{
  MEDIDA();
  SENSOR();
}
int MEDIDA(){ 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG, LOW);
  T = pulseIn(ECHO, HIGH);
  Distancia = T/59;
  delay(50);
  return Distancia;
}
int SENSOR(){
   if( Distancia > 50){
    LCD_FRANCISCO_BARILLAS.setCursor(7,0);
    LCD_FRANCISCO_BARILLAS.print("50");
    LCD_FRANCISCO_BARILLAS.setCursor(0,1);
    LCD_FRANCISCO_BARILLAS.print("     LIBRE      ");
    LCD_FRANCISCO_BARILLAS.setCursor(3,0);
    LCD_FRANCISCO_BARILLAS.print("    ");
    LCD_FRANCISCO_BARILLAS.setCursor(9,0);
    LCD_FRANCISCO_BARILLAS.print("    ");
    //Bloques asignados
    LCD_FRANCISCO_BARILLAS.setCursor(0,0);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.setCursor(13,0);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
  }
  if( Distancia == 30 ){
    LCD_FRANCISCO_BARILLAS.setCursor(7,0);
    LCD_FRANCISCO_BARILLAS.print("30");
    LCD_FRANCISCO_BARILLAS.setCursor(0,1);
    LCD_FRANCISCO_BARILLAS.print("     CUIDADO      ");
    LCD_FRANCISCO_BARILLAS.setCursor(5,0);
    LCD_FRANCISCO_BARILLAS.print("  ");
    LCD_FRANCISCO_BARILLAS.setCursor(9,0);
    LCD_FRANCISCO_BARILLAS.print("  ");
    LCD_FRANCISCO_BARILLAS.setCursor(0,0);
    //Bloques asignados
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.setCursor(11,0);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
  }
  if( Distancia == 10){
    LCD_FRANCISCO_BARILLAS.setCursor(7,0);
    LCD_FRANCISCO_BARILLAS.print("10");
    LCD_FRANCISCO_BARILLAS.setCursor(0,1);
    LCD_FRANCISCO_BARILLAS.print("      ALTO      ");
    LCD_FRANCISCO_BARILLAS.setCursor(0,0);
    //Bloques asignados
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.setCursor(9,0);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);
    LCD_FRANCISCO_BARILLAS.write(1);

  }
  return 0;
 }
