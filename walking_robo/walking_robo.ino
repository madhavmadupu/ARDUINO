#define trigPin1 7      
#define echoPin1 8
#include <Servo.h>

Servo servo1; // right 
Servo servo2; //left

int rbyte = 0,d=0; // for incoming serial data 
int sbyte = 0;
long duration, distance,sensor1;
int mode;
int middle = 20;
int endPoint = 20;
int stepDelay = 100;
int wait = 100;


void setup()
{
 pinMode(trigPin1, OUTPUT);
 pinMode(echoPin1, INPUT);
 servo1.attach(9); 
 servo2.attach(10);
 delay(1000);
}

void loop() {
  sensor1 = distance;
  delay(2); 
  straight();
 Serial.print("sensor1=");
 Serial.println(sensor1);
  servo1.write(middle);
  servo2.write(middle);
  delay(stepDelay);

  servo1.write(middle - endPoint);
  delay(stepDelay);
  servo2.write(middle - endPoint);
  delay(stepDelay);
  
}


void straight()
{
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  duration = pulseIn(echoPin1, HIGH);
  distance = (duration/2) / 29.1;
  if(sensor1 <= 10 && sensor1 >= 2)
  {
   delay(1500);
   servo1, servo2.write(20);
   delay(1000);
  }
}
