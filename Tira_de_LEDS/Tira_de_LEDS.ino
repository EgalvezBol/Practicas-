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

int LED=2;
void setup() {
  for(LED = 2; LED<=11; LED++)
pinMode(LED, OUTPUT);
}
void loop() {
  for (int LED=2; LED<11; LED++){
   digitalWrite(LED, HIGH);
   delay(500);
   digitalWrite(LED, LOW);
  }
  for (int LED=11; LED>2; LED--)
  {
   digitalWrite(LED, HIGH);
   delay(500);
   digitalWrite(LED, LOW);
}
}
