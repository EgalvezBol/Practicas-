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
//Libreria del Sensor de temperatura
#include <OneWire.h>                
#include <DallasTemperature.h>
//libreria del LCD
#include <Wire.h>    
#include <LiquidCrystal_I2C.h>

#define Direccion_LCD 0x27
#define FILAS 2
#define COLUMNAS 16

#define Pin_de_datos 3
#define D1 4
#define D2 5
#define D3 6

int Fahrenheit;
int Temperatura_de_Fahrenheit();
int Celsius;
int Temperatura_de_Celsius();
void LCD_Edgar();
byte Fuego[] = {
  B10000,
  B01100,
  B00110,
  B01110,
  B10001,
  B10001,
  B10001,
  B01110
};
byte Termometer[] = {
  B00100,
  B01010,
  B01010,
  B01010,
  B10001,
  B10001,
  B01110,
  B00000
};
byte Signo_Grados[] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte Persona[] = {
  B01110,
  B01110,
  B01110,
  B10101,
  B01110,
  B00100,
  B01010,
  B01010
};
byte Nieve[] = {
  B00100,
  B10101,
  B01110,
  B11111,
  B01110,
  B10101,
  B00100,
  B00000
};

OneWire ourWire(2);
DallasTemperature SENSOR(&ourWire); 
LiquidCrystal_I2C LCD_Edgar_Galvez(Direccion_LCD, COLUMNAS, FILAS);
void setup() {
  delay(1000);
  Serial.begin(9600);
  SENSOR.begin();
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  LCD_Edgar_Galvez.begin(16, 2);
  LCD_Edgar_Galvez.init();
  LCD_Edgar_Galvez.backlight();
  LCD_Edgar_Galvez.createChar(1, Termometer);
  LCD_Edgar_Galvez.write(1);
  LCD_Edgar_Galvez.createChar(2, Signo_Grados);
  LCD_Edgar_Galvez.write(2);
  LCD_Edgar_Galvez.createChar(3, Nieve);
  LCD_Edgar_Galvez.write(3);
  LCD_Edgar_Galvez.createChar(4, Fuego);
  LCD_Edgar_Galvez.write(4);
  LCD_Edgar_Galvez.createChar(5, Persona);
  LCD_Edgar_Galvez.write(5);
}

void loop() 
{
   LCD_Edgar(); 
}
 int Temperatura_de_Celsius(){
  SENSOR.requestTemperatures();
  int Temperatura_E = SENSOR.getTempCByIndex(0); 
  return Temperatura_E;
}
 int Temperatura_de_Fahrenheit(){
  SENSOR.requestTemperatures();
  int Temperatura_D = SENSOR.getTempFByIndex(0); 
  return Temperatura_D;
}

 void LCD_Edgar(){
 Fahrenheit = Temperatura_de_Fahrenheit();
 Celsius = Temperatura_de_Celsius();
  if(Celsius > 30){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print("Termometro");
    LCD_Edgar_Galvez.setCursor(10,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempCByIndex(0));
    LCD_Edgar_Galvez.setCursor(5,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(6,1);
    LCD_Edgar_Galvez.print("C");
    LCD_Edgar_Galvez.setCursor(7,1);
    LCD_Edgar_Galvez.write(4);
    LCD_Edgar_Galvez.setCursor(9,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempFByIndex(0));
    LCD_Edgar_Galvez.setCursor(14,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(15,1);
    LCD_Edgar_Galvez.print("F");
    digitalWrite(D1, HIGH);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    }
  if(Celsius > 15 && Celsius < 30){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print("Termometro");
    LCD_Edgar_Galvez.setCursor(10,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempCByIndex(0));
    LCD_Edgar_Galvez.setCursor(5,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(6,1);
    LCD_Edgar_Galvez.print("C");
    LCD_Edgar_Galvez.setCursor(7,1);
    LCD_Edgar_Galvez.write(5);
    LCD_Edgar_Galvez.setCursor(9,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempFByIndex(0));
    LCD_Edgar_Galvez.setCursor(14,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(15,1);
    LCD_Edgar_Galvez.print("F");
    digitalWrite(D1, LOW);
    digitalWrite(D2, HIGH);
    digitalWrite(D3, LOW); 

  }
  if(Celsius < 15 ){
    LCD_Edgar_Galvez.setCursor(0,0);
    LCD_Edgar_Galvez.print("Termometro");
    LCD_Edgar_Galvez.setCursor(10,0);
    LCD_Edgar_Galvez.write(1);
    LCD_Edgar_Galvez.setCursor(0,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempCByIndex(0));
    LCD_Edgar_Galvez.setCursor(5,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(6,1);
    LCD_Edgar_Galvez.print("C");
    LCD_Edgar_Galvez.setCursor(7,1);
    LCD_Edgar_Galvez.write(3);
    LCD_Edgar_Galvez.setCursor(9,1);
    LCD_Edgar_Galvez.print(SENSOR.getTempFByIndex(0));
    LCD_Edgar_Galvez.setCursor(14,1);
    LCD_Edgar_Galvez.write(2);
    LCD_Edgar_Galvez.setCursor(15,1);
    LCD_Edgar_Galvez.print("F");
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
}
}
