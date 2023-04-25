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

int TRIG = 4; 
int ECHO = 5;
int buzzer = 6;
int DO  = 261;
int RE  = 294;
int MI  = 329;
int FA  = 349;
int SOL = 392;
int LA  = 440;
int SI  = 493;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duracion, distancia;
  digitalWrite(TRIG, LOW);
  delay(5);
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);
  distancia = duracion / 58;
  duracion = pulseIn(ECHO, HIGH);
  

  if (distancia > 0 && distancia <= 3) { 
    tone(buzzer, DO, 500);
    delay(5);
    } 
    
    else if (distancia > 3 && distancia <= 6) { 
    tone(buzzer, RE, 500);
    delay(5);    
    } 
    
    else if (distancia > 6 && distancia <= 9) { 
    tone(buzzer, MI, 500);  
    delay(5);
    }
    
    else if (distancia > 9 && distancia <= 12) { 
    tone(buzzer, FA, 500);
    delay(5); 
    }
    
    else if (distancia > 12 && distancia <= 15) { 
    tone(buzzer, SOL, 500);
    delay(5);
    }
    
    else if (distancia > 15 && distancia <= 18) { 
    tone(buzzer, LA, 500);
    delay(5);
    }
    
    else if (distancia > 18 && distancia <= 21) { 
    tone(buzzer, SI, 500);
    delay(5); 
    }  
    else {
    noTone(buzzer); 
    }
  delay(1000);  // dos segundos para volver a empezar.
}
