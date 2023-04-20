 /*
Fundación Kinal
Centro Educativo Técnico Laboral Kinal 
Electrónica
Grado: Quinto
Sección: A
Curso: Taller de Electrónica Digital y Reparación de Computadoras I
NomBre: Edgar Emanuel Gálvez Bol
Carné: 2019253 
*/

#define Bomba 10
#define Sensor 8
#define LLenado 6
#define Vaciado 3 


void setup() {
 pinMode(Vaciado, OUTPUT);
 pinMode(Sensor, INPUT); 
 pinMode(LLenado, OUTPUT);
 pinMode(Bomba, OUTPUT);

}

void loop() {
  int Sen;
  Sen = digitalRead(Sensor);
  if (Sen == HIGH){
    digitalWrite(Vaciado, HIGH);
    digitalWrite(LLenado, LOW);
    digitalWrite(Bomba, HIGH);
    }
    Sen = digitalRead(Sensor);
  if (Sen == LOW){
    digitalWrite(Vaciado, LOW);
    digitalWrite(LLenado, HIGH);
    digitalWrite(Bomba, LOW);
    delay(1000);
    } 
}
