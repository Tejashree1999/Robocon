//IR SENSOR
const int d1 = 6;
const int d2 = 5;
const int d3 = 4;
const int d4 = 3;
const int d5 = 2;

String irValue;
//MOTOR 1
const int m11 = 12;
const int m12 = 11;
//MOTOR 2
const int m21 = 10;
const int m22 = 9;
void setup() {
  Serial.begin(9600);
  
  pinMode(d1,INPUT);
  pinMode(d2,INPUT);
  pinMode(d3,INPUT);
  pinMode(d4,INPUT);
  pinMode(d5,INPUT);
  
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
  
   if(irValue.equals("11111") || (irValue.equals("01110")) || (irValue.equals("11110")) || (irValue.equals("01111")))
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
   else if((irValue.equals("10000")) || ((irValue.equals("11000"))) || (irValue.equals("11100")))
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
   else if((irValue.equals("00001")) || (irValue.equals("00011")) || (irValue.equals("00111")))
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
   else
   {
      //Stop...!!!
          digitalWrite(m11,LOW);
          digitalWrite(m12,LOW);
          digitalWrite(m21,LOW);
          digitalWrite(m22,LOW);

   }
   delay(1000);
}
