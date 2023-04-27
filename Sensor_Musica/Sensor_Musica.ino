/*
  Fundación Kinal
  Centro Educativo Técnico Laboral Kinal
  Electrónica
  Grado: Quinto
  Sección: A
  Curso: Taller de Electrónica Digital y Reparación de Computadoras I
  Nombre: Edgar Emanuel Gálvez Bol
  Carné: 2019253
*/

#define TRIG 4 
#define ECO 5
#define Buzzer 6



int duracion; 
int Do = 261;
int Re = 294;
int Mi = 329;
int Fa = 349;
int Sol = 392;
int La = 440;
float Si = 494.883;
float DoS = 523.163;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  C_Distancia(duracion);
  cancion();
}
int C_Distancia (int num1) {

  int distancia;

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(30);
  digitalWrite(TRIG, LOW);  
  num1 = pulseIn(ECO, HIGH);
  distancia = num1 / 58.7;
  Serial.println(distancia);
  delay(100);

  return distancia;
}

void nota_buzzer(int num1) {
  tone(Buzzer, num1);
}

void cancion (void) {

  int nota = C_Distancia(duracion);

  if (nota > 1 && nota < 4) {
    nota_buzzer(Do);
  }
  else if (nota >=4  && nota < 8) {
    nota_buzzer(Re);
  }
  else if (nota >= 8 && nota < 12) {
    nota_buzzer(Mi);
  }
  else if (nota >= 12 && nota < 16) {
    nota_buzzer(Fa);
  }
  else if (nota >= 16  && nota < 20) {
    nota_buzzer(Sol);
  }
  else if (nota >= 20 && nota < 24) {
    nota_buzzer(La);
  }
  else if (nota >= 24 && nota < 28) {
    nota_buzzer(Si);
  }
  else if (nota >= 28 && nota < 32) {
    nota_buzzer(DoS);
  }
  else {
    noTone(Buzzer);
  }
}
