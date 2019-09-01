//DECLARING PINS...
//motor 1
#define DIR1 2
#define pwm1 3
//motor 2
#define DIR2 4
#define pwm2 5

#define p 60

#define pwm 70

void setup() {  
  Serial.begin(9600);
  
  //Power motor 1
  pinMode(pwm1,OUTPUT);
  pinMode(DIR1,OUTPUT);
   
  //Power motor 2
  pinMode(pwm2,OUTPUT);
  pinMode(DIR2,OUTPUT);
  
}

void loop() {
    forward();
    delay(2000);
   
    left();
    delay(2000);

    forward();
    delay(2000);
    
    backward();
    delay(2000);
    
    right();
    delay(2000);

    backward();
    delay(2000);
   /*
    sideLeft();
    delay(2000);
    stopbot();
    delay(2000);

    sideRight();
    delay(2000);
    stopbot();
    delay(2000);
*/
  /*  
    sideBackLeft();
    delay(2000);
    stopbot();
    delay(2000);

    sideBackRight();
    delay(2000);*/
    stopbot();
    delay(2000);
    }

void forward()
{
  //motor 1 and motor 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,LOW);

  //motor 2 and motor 3
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,LOW);
}

void backward()
{
  //motor 1 and 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,HIGH);

  //motor 2 and 3 
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,HIGH);
}

void right()
{
  //motor 1 and 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,HIGH);
  
  //motor 2 and 3
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,LOW);
}

void left()
{ 
  //motor 1 and 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,LOW);
  
  //motor 2 and 3
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,HIGH);
}

void sideRight()
{ 
  //motor 1 and 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,HIGH);
  
  //motor 2 and 3
  analogWrite(pwm2,0);
}

void stopbot()
{
  analogWrite(pwm1,0); 
  analogWrite(pwm2,0);
}

void sideLeft()
{
  //motor 1 and 4
  analogWrite(pwm1,0);
 // digitalWrite(DIR1,HIGH);
  
  //motor 2 and 3
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,HIGH);
}

void sideBackLeft()
{
  //motor 1 and 4
  analogWrite(pwm1,p);
  digitalWrite(DIR1,HIGH);
  
  //motor 2 and 3
  analogWrite(pwm2,0);
  //digitalWrite(DIR2,LOW);
}

void sideBackRight()
{
  
  //motor 1 and 4
  analogWrite(pwm1,0);
  //digitalWrite(DIR1,HIGH);
  
  //motor 2 and 3
  analogWrite(pwm2,pwm);
  digitalWrite(DIR2,HIGH);
}

void turnLeft()
{
  
}

void turnRight()
{
  
}
