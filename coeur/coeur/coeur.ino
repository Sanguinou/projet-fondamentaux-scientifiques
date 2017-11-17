#include "param.h"
#include "coeur.h"
#include "cardio.c"
#include "cardio.h"

int pinLED1 = 2;  //declaring the LED in the digital input.
int pinLED2 = 3;
int pinLED3 = 4;
int pinLED4 = 5;
int pinLED5 = 6;
int pinLED6 = 7;
int pinLED7 = 8;
int pinLED8 = 9;
int pinLED9 = 10; 
int pinLED10 = 11;

int beatTime = 0;   //declaring a variable to measure time between beats
unsigned long timer;  //declaring variable to measure time
float multiplier;   //declaring one of the variables needed to calculate the pulse
int bp = 0;   //declaring another variable to calculate the pulse
int bpm;    //declaring variable that will contain the final value of the pulse
float bpfloat = 0;    //declaring a variable that is to be converted for another function

void setup() {

  Serial.begin(9600);
 
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  pinMode(pinLED6, OUTPUT);
  pinMode(pinLED7, OUTPUT);
  pinMode(pinLED8, OUTPUT);
  pinMode(pinLED9, OUTPUT);
  pinMode(pinLED10, OUTPUT);
  
  remiseZero();
}

void remiseZero(){ //turn off all the LED.
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED6, LOW);
  digitalWrite(pinLED7, LOW);
  digitalWrite(pinLED8, LOW);
  digitalWrite(pinLED9, LOW);
  digitalWrite(pinLED10, LOW);
  
}

void all() { //blink of all the LED.
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED5, HIGH);
  digitalWrite(pinLED6, HIGH);
  digitalWrite(pinLED7, HIGH);
  digitalWrite(pinLED8, HIGH);
  digitalWrite(pinLED9, HIGH);
  digitalWrite(pinLED10, HIGH);
  delay(beatTime);
  
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED6, LOW);
  digitalWrite(pinLED7, LOW);
  digitalWrite(pinLED8, LOW);
  digitalWrite(pinLED9, LOW);
  digitalWrite(pinLED10, LOW);
  delay(beatTime);
}

void deux() { //blink 1 per 2.
  switch(sousparam) { //blink 1 per 2, switch.
    case 1 :  
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED6, HIGH);
      digitalWrite(pinLED10, HIGH);
      digitalWrite(pinLED7, HIGH);
      digitalWrite(pinLED3, HIGH);
      digitalWrite(pinLED1, LOW);
      digitalWrite(pinLED4, LOW);
      digitalWrite(pinLED8, LOW);
      digitalWrite(pinLED9, LOW);
      digitalWrite(pinLED5, LOW);
      delay(beatTime);

      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED6, LOW);
      digitalWrite(pinLED10, LOW);
      digitalWrite(pinLED7, LOW);
      digitalWrite(pinLED3, LOW);
      delay(beatTime);
    break;
    
  case 2:             //blink 1 per 2, even
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED8, HIGH);
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED5, HIGH);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED10, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED3, LOW);
    delay(beatTime);

    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED5, LOW);
    delay(beatTime);
  break;

  case 3:     //1 LED sur 2, odd.
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED8, HIGH);
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED5, HIGH);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED10, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED3, LOW);
    delay(beatTime);

    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED6, HIGH);
    digitalWrite(pinLED10, HIGH);
    digitalWrite(pinLED7, HIGH);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
  break;
  }
}

void droiteGauche(){ //Blink left / right.
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED5, HIGH);
  digitalWrite(pinLED7, HIGH);
  digitalWrite(pinLED9, HIGH);
  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED6, LOW);
  digitalWrite(pinLED8, LOW);
  digitalWrite(pinLED10, LOW);
  delay(beatTime);

  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED3, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED7, LOW);
  digitalWrite(pinLED9, LOW);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED6, HIGH);
  digitalWrite(pinLED8, HIGH);
  digitalWrite(pinLED10, HIGH);
  delay(beatTime);
}

void tier() { //blink 1 per 3 LED. 
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED4, HIGH);
  digitalWrite(pinLED7, HIGH);
  digitalWrite(pinLED10, HIGH);
  delay(beatTime);

  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED4, LOW);
  digitalWrite(pinLED7, LOW);
  digitalWrite(pinLED10, LOW);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED5, HIGH);
  digitalWrite(pinLED8, HIGH);
  delay(beatTime);

  digitalWrite(pinLED2, LOW);
  digitalWrite(pinLED5, LOW);
  digitalWrite(pinLED8, LOW);
  digitalWrite(pinLED3, HIGH);
  digitalWrite(pinLED6, HIGH);
  digitalWrite(pinLED9, HIGH);
  delay(beatTime);
}

void degrade() {  //Fade in 3 steps.
  switch (sousparam){
    
    case 2:       // down to up.
  
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED5, HIGH);
    digitalWrite(pinLED6, HIGH);
    digitalWrite(pinLED7, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED8, HIGH);
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED10, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);

  break;
  
  case 1:  //up to down.
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED8, HIGH);
    digitalWrite(pinLED10, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED7, HIGH);
    digitalWrite(pinLED6, HIGH);
    digitalWrite(pinLED5, HIGH);
    digitalWrite(pinLED4, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED3, HIGH);
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED1, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);

  break;

  case 4: //right to left.
  
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED6, HIGH);
    digitalWrite(pinLED8, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED10, HIGH);
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED5, HIGH);
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED7, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);
    
  break;

  case 3:       //left to right.
    digitalWrite(pinLED9, HIGH);
    digitalWrite(pinLED7, HIGH);
    digitalWrite(pinLED5, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED10, HIGH);
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED6, HIGH);
    digitalWrite(pinLED4, HIGH);
    digitalWrite(pinLED8, HIGH);
    delay(beatTime);
 
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);

  break;
  }
}

void chenilleAll() {        //Chain with all the LED.
  switch (sousparam) {

  case 1 :            //left to right.
    digitalWrite(pinLED1, HIGH);
    delay(beatTime);

    digitalWrite(pinLED2, HIGH);
    delay(beatTime);

    digitalWrite(pinLED4, HIGH);
    delay(beatTime);

    digitalWrite(pinLED6, HIGH);
    delay(beatTime);

    digitalWrite(pinLED8, HIGH);
    delay(beatTime);

    digitalWrite(pinLED10, HIGH);
    delay(beatTime);

    digitalWrite(pinLED9, HIGH);
    delay(beatTime);

    digitalWrite(pinLED7, HIGH);
    delay(beatTime);

    digitalWrite(pinLED5, HIGH);
    delay(beatTime);

    digitalWrite(pinLED3, HIGH);
    delay(beatTime);

    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);
    
  break;

  case 2 :          //right left.
    digitalWrite(pinLED1, HIGH);
    delay(beatTime);

    digitalWrite(pinLED3, HIGH);
    delay(beatTime);

    digitalWrite(pinLED5, HIGH);
    delay(beatTime);

    digitalWrite(pinLED7, HIGH);
    delay(beatTime);

    digitalWrite(pinLED9, HIGH);
    delay(beatTime);

    digitalWrite(pinLED10, HIGH);
    delay(beatTime);

    digitalWrite(pinLED8, HIGH);
    delay(beatTime);

    digitalWrite(pinLED6, HIGH);
    delay(beatTime);

    digitalWrite(pinLED4, HIGH);
    delay(beatTime);

    digitalWrite(pinLED2, HIGH);
    delay(beatTime);

    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, LOW);
    delay(beatTime);
  break;
  }
}

void chenilleX1() {           //Chain in 1 per 1.

  switch (sousparam){
  case 1 :                  //left to right.
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED1, HIGH);
    delay(beatTime);
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, HIGH);
    delay(beatTime);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED4, HIGH);
    delay(beatTime);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED6, HIGH);
    delay(beatTime);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED8, HIGH);
    delay(beatTime);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED10, HIGH);
    delay(beatTime);
    digitalWrite(pinLED10, LOW);
    digitalWrite(pinLED9, HIGH);
    delay(beatTime);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED7, HIGH);
    delay(beatTime);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED5, HIGH);
    delay(beatTime);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
  break;

  case 2:             //right to left.
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED1, HIGH);
    delay(beatTime);
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED3, HIGH);
    delay(beatTime);
    digitalWrite(pinLED3, LOW);
    digitalWrite(pinLED5, HIGH);
    delay(beatTime);
    digitalWrite(pinLED5, LOW);
    digitalWrite(pinLED7, HIGH);
    delay(beatTime);
    digitalWrite(pinLED7, LOW);
    digitalWrite(pinLED9, HIGH);
    delay(beatTime);
    digitalWrite(pinLED9, LOW);
    digitalWrite(pinLED10, HIGH);
    delay(beatTime);
    digitalWrite(pinLED10, LOW);
    digitalWrite(pinLED8, HIGH);
    delay(beatTime);
    digitalWrite(pinLED8, LOW);
    digitalWrite(pinLED6, HIGH);
    delay(beatTime);
    digitalWrite(pinLED6, LOW);
    digitalWrite(pinLED4, HIGH);
    delay(beatTime);
    digitalWrite(pinLED4, LOW);
    digitalWrite(pinLED2, HIGH);
    delay(beatTime);
  break;
  }
}

void chenilleX3(){      //Chain in 3 per 3.
  
  switch (sousparam){
    case 1:               //left to right.
      digitalWrite(pinLED7, LOW);
      digitalWrite(pinLED1, HIGH);
      delay(beatTime);
      digitalWrite(pinLED5, LOW);
      digitalWrite(pinLED2, HIGH);
      delay(beatTime);
      digitalWrite(pinLED3, LOW);
      digitalWrite(pinLED4, HIGH);
      delay(beatTime);
      digitalWrite(pinLED1, LOW);
      digitalWrite(pinLED6, HIGH);
      delay(beatTime);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED8, HIGH);
      delay(beatTime);
      digitalWrite(pinLED4, LOW);
      digitalWrite(pinLED10, HIGH);
      delay(beatTime);
      digitalWrite(pinLED6, LOW);
      digitalWrite(pinLED9, HIGH);
      delay(beatTime);
      digitalWrite(pinLED8, LOW);
      digitalWrite(pinLED7, HIGH);
      delay(beatTime);
      digitalWrite(pinLED10, LOW);
      digitalWrite(pinLED5, HIGH);
      delay(beatTime);
      digitalWrite(pinLED9, LOW);
      digitalWrite(pinLED3, HIGH);
      delay(beatTime); 
    break;

    case 2:           //right to left.
      digitalWrite(pinLED6, LOW);
      digitalWrite(pinLED1, HIGH);
      delay(beatTime);
      digitalWrite(pinLED4, LOW);
      digitalWrite(pinLED3, HIGH);
      delay(beatTime);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED5, HIGH);
      delay(beatTime);
      digitalWrite(pinLED1, LOW);
      digitalWrite(pinLED7, HIGH);
      delay(beatTime);
      digitalWrite(pinLED3, LOW);
      digitalWrite(pinLED9, HIGH);
      delay(beatTime);
      digitalWrite(pinLED5, LOW);
      digitalWrite(pinLED10, HIGH);
      delay(beatTime);
      digitalWrite(pinLED7, LOW);
      digitalWrite(pinLED8, HIGH);
      delay(beatTime);
      digitalWrite(pinLED9, LOW);
      digitalWrite(pinLED6, HIGH);
      delay(beatTime);
      digitalWrite(pinLED10, LOW);
      digitalWrite(pinLED4, HIGH);
      delay(beatTime);
      digitalWrite(pinLED8, LOW);
      digitalWrite(pinLED2, HIGH);
      delay(beatTime);
    break; 
  }
}

void ledChoix() {       //blink 1 LED.
  switch(sousparam) {
    case 1:
      digitalWrite(pinLED1, HIGH);
      delay(beatTime);
      digitalWrite(pinLED1, LOW);
      delay(beatTime);
     break;

     case 2:
      digitalWrite(pinLED2, HIGH);
      delay(beatTime);
      digitalWrite(pinLED2, LOW);
      delay(beatTime);
     break;

     case 3:
      digitalWrite(pinLED3, HIGH);
      delay(beatTime);
      digitalWrite(pinLED3, LOW);
      delay(beatTime);
     break;

     case 4:
      digitalWrite(pinLED4, HIGH);
      delay(beatTime);
      digitalWrite(pinLED4, LOW);
      delay(beatTime);
     break;

     case 5:
      digitalWrite(pinLED5, HIGH);
      delay(beatTime);
      digitalWrite(pinLED5, LOW);
      delay(beatTime);
     break;

     case 6:
      digitalWrite(pinLED6, HIGH);
      delay(beatTime);
      digitalWrite(pinLED6, LOW);
      delay(beatTime);
     break;

     case 7:
      digitalWrite(pinLED7, HIGH);
      delay(beatTime);
      digitalWrite(pinLED7, LOW);
      delay(beatTime);
     break;

     case 8:
      digitalWrite(pinLED8, HIGH);
      delay(beatTime);
      digitalWrite(pinLED8, LOW);
      delay(beatTime);
     break;

     case 9:
      digitalWrite(pinLED9, HIGH);
      delay(beatTime);
      digitalWrite(pinLED9, LOW);
      delay(beatTime);
     break;

     case 10:
      digitalWrite(pinLED10, HIGH);
      delay(beatTime);
      digitalWrite(pinLED10, LOW);
      delay(beatTime);
     break;
  }
}  
void loop() { //Fonction boucle 
  
  timer = millis();
  Serial.println(timer);

  bpfloat = (int) bp;

  beatTime = random(750, 900);
  bp = bp + 1;

  bpmCalc(multiplier, bpm, timer, bpfloat);
  
  Serial.println(bpm);
  
    switch (param)  {
      case 1:
        all();
      break;
      
      case 2:
        deux();
      break;
      
      case 3:
        droiteGauche();
      break;
      
      case 4:
        tier();
      break;
      
      case 5:
        degrade();
      break;
      
      case 6:
        chenilleAll();
      break;
      
      case 7:
        chenilleX1();
      break;

      case 8:
        chenilleX3();
      break;

      case 9:
        ledChoix();
       break;
      
      default:
      remiseZero();
    }
}
