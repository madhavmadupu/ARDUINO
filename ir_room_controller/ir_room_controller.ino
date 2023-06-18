#include<IRremote.h>

int RECV_PIN = A0;
int LED_PIN = 13;
int Device1 = 2;
// int Device2 = 3;
int Device3 = 4;
// int Device4 = 5;
// int Device5 = 6;
// int Device6 = 7;
// int Device7 = 8;
// int Device8 = 9;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(Device1, OUTPUT);
  // pinMode(Device2, OUTPUT);
  pinMode(Device3, OUTPUT);
  // pinMode(Device4, OUTPUT);
  // pinMode(Device5, OUTPUT);
  // pinMode(Device6, OUTPUT);
  // pinMode(Device7, OUTPUT);
  // pinMode(Device8, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(Device1, LOW);
  // digitalWrite(Device2, LOW);
  digitalWrite(Device3, LOW);
  // digitalWrite(Device4, LOW);
  // digitalWrite(Device5, LOW);
  // digitalWrite(Device6, LOW);
  // digitalWrite(Device7, LOW);
  // digitalWrite(Device8, LOW);
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
      int pinState1 = digitalRead(Device1);
      if (pinState1 == LOW){
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
        digitalWrite(Device1, HIGH);
      }
      else{
        digitalWrite(Device1, LOW);
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
      }
      
    }

    // if (irrecv.decodedIRData.decodedRawData == 0x6C93FD01) // Replace with the hex code for your remote button
    // {
    //   int pinState2 = digitalRead(Device2);
    //   if (pinState2 == LOW){
    //     digitalWrite(Device2, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device2, LOW);
    //   }
    // }

    if (irrecv.decodedIRData.decodedRawData == 0x33CCFD01) // Replace with the hex code for your remote button
    {
      int pinState3 = digitalRead(Device3);
      if (pinState3 == LOW){
        digitalWrite(Device3, HIGH);
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
      }
      else{
        digitalWrite(Device3, LOW);
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
      }
    }
      
    // if (irrecv.decodedIRData.decodedRawData == 0x718EFD01) // Replace with the hex code for your remote button
    // {
    //   int pinState4 = digitalRead(Device4);
    //   if (pinState4 == LOW){
    //     digitalWrite(Device4, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device4, LOW);
    //   }
    // }

    // if (irrecv.decodedIRData.decodedRawData == 0x708FFD01) // Replace with the hex code for your remote button
    // {
    //   int pinState5 = digitalRead(Device5);
    //   if (pinState5 == LOW){
    //     digitalWrite(Device5, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device5, LOW);
    //   }
    // }

    // if (irrecv.decodedIRData.decodedRawData == 0x37C8FD01) // Replace with the hex code for your remote button
    // {
    //   int pinState6 = digitalRead(Device6);
    //   if (pinState6 == LOW){
    //     digitalWrite(Device6, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device6, LOW);
    //   }
    // }

    // if (irrecv.decodedIRData.decodedRawData == 0x758AFD01) // Replace with the hex code for your remote button
    // {
    //   int pinState7 = digitalRead(Device7);
    //   if (pinState7 == LOW){
    //     digitalWrite(Device7, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device7, LOW);
    //   }
    // }

    // if (irrecv.decodedIRData.decodedRawData == 0x748BFD01) // Replace with the hex code for your remote button
    // {
    //   int pinState8 = digitalRead(Device8);
    //   if (pinState8 == LOW){
    //     digitalWrite(Device8, HIGH);
    //   }
    //   else{
    //     digitalWrite(Device8, LOW);
    //   }
    // }

  }
}
