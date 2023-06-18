
#include<IRremote.h>

int RECV_PIN = A0;
int LED_PIN = 13;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);
  irrecv.enableIRIn();
}



void loop()
{
  if (irrecv.decode())
  {
    Serial.println(irrecv.decodedIRData.decodedRawData, HEX);
    irrecv.resume(); // Receive the next value

    

    if (irrecv.decodedIRData.decodedRawData == 0x6D92FD01) // Replace with the hex code for your remote button
    {
      int pinState1 = digitalRead(LED_PIN);
      if (LED_PIN == LOW){
        digitalWrite(LED_PIN, HIGH);
      }
      else{
        digitalWrite(LED_PIN, LOW);
      }
      
    }
  }
}