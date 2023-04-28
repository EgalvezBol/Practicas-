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
//Incluyo a la libreria
#include <LiquidCrystal.h>

//Definimos los pines
#define RS 2
#define E  3
#define D4 4
#define D5 5
#define D6 6
#define D7 7

LiquidCrystal LCD_EdgarGalvez(RS, E, D4, D5, D6, D7);

void setup() {        
  LCD_EdgarGalvez.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
  LCD_EdgarGalvez.setCursor(0,0);  //Primera columna y segunda fila
  LCD_EdgarGalvez.print("Edgar Galvez Bol");  
  LCD_EdgarGalvez.setCursor(0,1);
  LCD_EdgarGalvez.print("2019253");
}

void loop() {
}
