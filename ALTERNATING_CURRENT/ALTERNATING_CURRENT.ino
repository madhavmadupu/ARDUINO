int P1 = 13;
int P2 = 12;
int DELAY = 24;


void setup() {
  pinMode(P1, OUTPUT);
  pinMode(P2, OUTPUT);

}

void loop() {
  digitalWrite(P1, HIGH);
  delay(DELAY);
  digitalWrite(P1, LOW); 
  digitalWrite(P2, HIGH);
  delay(DELAY);
  digitalWrite(P2, LOW);

}
