#include <Keypad.h> 

#define Filas 4   
#define Columnas 4 
#define F_1 9
#define F_2 8
#define F_3 7 
#define F_4 6
#define C_1 5
#define C_2 4
#define C_3 3
#define C_4 2


#define a 10
#define b 11
#define c 12
#define d 14
#define e 15
#define f 16
#define g 17

char keys[Filas][Columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte PinesFilas[Filas] = {F_1,F_2,F_3,F_4};
byte PinesColumnas[Columnas] = {C_1,C_2,C_3,C_4};

Keypad Teclado_De_Javier = Keypad(makeKeymap(keys),PinesFilas,PinesColumnas,Filas,Columnas);

void setup() { 
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  char tecla = Teclado_De_Javier.getKey();
  
   //Tecla 1
  if (tecla == '1') {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    delay(500);

  }
    
     //Tecla 2
 else if (tecla == '2') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     //Tecla 3
  else if (tecla == '3') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     // Tecla 4
 else if (tecla == '4') {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     // Tecla 5
 else if (tecla == '5') {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     // Tecla 6
 else if (tecla == '6') {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     // Tecla 7
 else if (tecla == '7') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(15,LOW);
    digitalWrite(16,LOW);
    digitalWrite(17,LOW);
    delay(500);

  }
  
     // Tecla 8
 else if (tecla == '8') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
    
     // Tecla 9
 else if (tecla == '9') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,LOW);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
      // Tecla 0
 else if (tecla == '0') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,LOW);
   
  }
  
  // Tecla A
 else if (tecla == 'A') {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,LOW);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  
  }
  // Tecla B
  else if (tecla == 'B') {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
  // Tecla C
  else if (tecla == 'C') {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,LOW);
    delay(500);

  }
  
     // Tecla D
  else if (tecla == 'D') {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,LOW);
    digitalWrite(17,HIGH);
    delay(500);

  
  }
  
   // Tecla *
  else if (tecla == '*') {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(14,LOW);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
  
   // Tecla #
  else if (tecla == '#') {
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(14,HIGH);
    digitalWrite(15,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH);
    delay(500);

  }
   else
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(14,HIGH);
   digitalWrite(15,HIGH);
   digitalWrite(16,HIGH);
   digitalWrite(17,LOW);
}
