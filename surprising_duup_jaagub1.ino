#include<Servo.h>
Servo servo1;
int potpin=0;
int Red=4;
int Blue=3;
int Green=2;
int val;
int trigPin=6;
int echoPin=7;
long distance;
long duration;

void setup()
{
 servo1.attach(9);
  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  ultra();
  servo1.write(0);
  val=analogRead(potpin);
  
  if(distance<=100){
    digitalWrite(Red,HIGH);
    delay(1000);
    digitalWrite(Red,LOW);
    delay(1000);
     servo1.write(60);}
  
  if(distance <=100){
  digitalWrite(Blue,HIGH);
  delay(1000);
  digitalWrite(Blue,LOW);
  delay(1000);
    servo1.write(120);}
  
   if(distance <=100){
  digitalWrite(Green,HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  delay(1000);
    servo1.write(180);}
  else{servo1.write(0);}
}
void ultra(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
   distance=duration*0.343/2;
} 
  //USES OF SERVO MOTORS IN MY ENVIRONMENT

 // .Servo motors are used in radio-controlled airplanes to position 
 // control surface like elevators,walking a robot or operating 
 //   grippers.
 // .They are used in automobiles to maintain the speed of vehicles
 // .They are used in home electronic devices such as DVDs,or
  //  Blue-ray Disc players to extend or replay the disc trays.