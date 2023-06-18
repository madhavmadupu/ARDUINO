#include <IRremote.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

int TYPE = 0;
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);

decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
  
void loop() {
if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC);
    irrecv.resume();
    display.clearDisplay();

    if (TYPE == "12345678") {
      digitalWrite(2, LOW);
      }
    }


}
 
