#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(1,2);
//using bluetooth 
char Bchar;
String irValue;
//MOTOR 1
const int m11 = 12;
const int m12 = 11;
//MOTOR 2
const int m21 = 10;
const int m22 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
}

void loop() {
   int v1 = digitalRead(d1);
   int v2 = digitalRead(d2);
   int v3 = digitalRead(d3);
   int v4 = digitalRead(d4);
   int v5 = digitalRead(d5);

  irValue = (String)v1 + (String)v2 + (String)v3 + (String)v4 + (String)v5;
  Serial.println(irValue);  
  
  if(bchar.equals('f'))
  {
               //forward
          Serial.println("Forward...!!!");
     
          //motor 1
          digitalWrite(m11,LOW);
          digitalWrite(m12,HIGH);
          //motor 2
          digitalWrite(m21,LOW);
          digitalWrite(m22,HIGH);    
  }
  else if(bchar.equals('l'))
  {
           //Left
          Serial.println("Left...!!!");
    
          //motor 1
          digitalWrite(m11,HIGH);
          digitalWrite(m12,LOW);
          //motor 2
          digitalWrite(m21,LOW);
          digitalWrite(m22,HIGH);         
  }
  else if(bchar.equals('r'))
  {
    
          //Right
          Serial.println("Right...!!!");

          //motor 1
          digitalWrite(m11,LOW);
          digitalWrite(m12,HIGH);
          //motor 2
          digitalWrite(m21,HIGH);
          digitalWrite(m22,LOW); 
  }
  else if(bchar.equals('')) 
}
