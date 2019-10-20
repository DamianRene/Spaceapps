// Blink ---

boolean LEDstate2, LEDstate3, LEDstate4, LEDstate5, LEDstate6, LEDstate7, LEDstate8, LEDstate9 = LOW;
int nextTime21 = 3000; // Do this every second or 3500 milliseconds
int nextTime20 = 70;
int nextTime31 = 3500;
int nextTime30 = 80;
int nextTime41 = 4000;
int nextTime40 = 90;
int nextTime51 = 4500;
int nextTime50 = 100;
int nextTime61 = 5000;
int nextTime60 = 110;
int nextTime71 = 5500;
int nextTime70 = 120;
int nextTime81 = 6000;
int nextTime80 = 130;
int nextTime91 = 6500;
int nextTime90 = 140;

// Blink ---


// Fade ---

int brightness10 = 115;    // how bright the LED is
int fadeAmount10 = 1;    // how many points to fade the LED by
unsigned long goTime10;
unsigned long loopTime10;

int brightness11 = 5;    // how bright the LED is
int fadeAmount11 = 1;    // how many points to fade the LED by
unsigned long goTime11;
unsigned long loopTime11;

// Fade ---


long int goTime2, goTime3, goTime4, goTime5, goTime6, goTime7, goTime8, goTime9;


void setup(){

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

goTime2 = millis();
goTime3 = millis();
goTime4 = millis();
goTime5 = millis();
goTime6 = millis();
goTime7 = millis();
goTime8 = millis();
goTime9 = millis();

// Fade ---
goTime10 = millis();
goTime11 = millis();

loopTime10 = goTime10;
loopTime11 = goTime11;
// Fade ---

}

void loop(){

if(millis() >= goTime2) functionGo2();
if(millis() >= goTime3) functionGo3();
if(millis() >= goTime4) functionGo4();
if(millis() >= goTime5) functionGo5();
// if(millis() >= goTime6) functionGo6();
if(millis() >= goTime7) functionGo7();
if(millis() >= goTime8) functionGo8();
// if(millis() >= goTime9) functionGo9();

// Fade ---

  goTime10 = millis();
  if(goTime10 >= (loopTime10 + 1)){  
    // set the brightness of pin 10:
    analogWrite(9, brightness10);    

    // change the brightness for next time through the loop:
    brightness10 = brightness10 + fadeAmount10;

    // reverse the direction of the fading at the ends of the fade: 
    if (brightness10 == 115 || brightness10 == 255) {
      fadeAmount10 = -fadeAmount10 ; 
    }     
    loopTime10 = goTime10;  // Updates loopTime
  }


  goTime11 = millis();
  if(goTime11 >= (loopTime11 + 20)){  
    // set the brightness of pin 11:
    analogWrite(6, brightness11);    

    // change the brightness for next time through the loop:
    brightness11 = brightness11 + fadeAmount11;

    // reverse the direction of the fading at the ends of the fade: 
    if (brightness11 == 5 || brightness11 == 255) {
      fadeAmount11 = -fadeAmount11 ; 
    }     
    loopTime11 = goTime11;  // Updates loopTime
  }
  // Other processing can be done here
                           
// Fade ---

}


void functionGo2(){
if(LEDstate2 == HIGH) {
digitalWrite(2,LOW);
LEDstate2 = LOW;
goTime2 = millis() + nextTime20;

}

else {

digitalWrite(2,HIGH);
LEDstate2 = HIGH;
goTime2 = millis() + nextTime21;

}
}


void functionGo3(){
if(LEDstate3 == HIGH) {
digitalWrite(3,LOW);
LEDstate3 = LOW;
goTime3 = millis() + nextTime30;

}

else {

digitalWrite(3,HIGH);
LEDstate3 = HIGH;
goTime3 = millis() + nextTime31;

}
}


void functionGo4(){
if(LEDstate4 == HIGH) {
digitalWrite(4,LOW);
LEDstate4 = LOW;
goTime4 = millis() + nextTime40;

}

else {

digitalWrite(4,HIGH);
LEDstate4 = HIGH;
goTime4 = millis() + nextTime41;

}
}


void functionGo5(){
if(LEDstate5 == HIGH) {
digitalWrite(5,LOW);
LEDstate5 = LOW;
goTime5 = millis() + nextTime50;

}

else {

digitalWrite(5,HIGH);
LEDstate5 = HIGH;
goTime5 = millis() + nextTime51;

}
}

/*
void functionGo6(){
if(LEDstate6 == HIGH) {
digitalWrite(6,LOW);
LEDstate6 = LOW;
goTime6 = millis() + nextTime60;

}

else {

digitalWrite(6,HIGH);
LEDstate6 = HIGH;
goTime6 = millis() + nextTime61;

}
}
*/

void functionGo7(){
if(LEDstate7 == HIGH) {
digitalWrite(7,LOW);
LEDstate7 = LOW;
goTime7 = millis() + nextTime70;

}

else {

digitalWrite(7,HIGH);
LEDstate7 = HIGH;
goTime7 = millis() + nextTime71;

}
}


void functionGo8(){
if(LEDstate8 == HIGH) {
digitalWrite(8,LOW);
LEDstate8 = LOW;
goTime8 = millis() + nextTime80;

}

else {

digitalWrite(8,HIGH);
LEDstate8 = HIGH;
goTime8 = millis() + nextTime81;

}
}

/*
void functionGo9(){
if(LEDstate9 == HIGH) {
digitalWrite(9,LOW);
LEDstate9 = LOW;
goTime9 = millis() + nextTime90;

}

else {

digitalWrite(9,HIGH);
LEDstate9 = HIGH;
goTime9 = millis() + nextTime91;


}
}
*/
