int pinBuzzer= 6;
 
void setup(){
pinMode(pinBuzzer, OUTPUT);
}
 
void dering_pendek(){
digitalWrite(pinBuzzer, HIGH);
delay(400);
digitalWrite(pinBuzzer, LOW);
delay(400);
}
 
void dering_panjang(){
digitalWrite(pinBuzzer, HIGH);
delay(700); //memberikan nilai tunda 0.7 second
digitalWrite(pinBuzzer, LOW);
delay(700);
}
 
void loop(){
dering_pendek();
dering_pendek(); 
dering_panjang();
delay(300);
}
