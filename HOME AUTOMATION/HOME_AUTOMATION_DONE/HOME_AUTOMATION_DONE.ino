int input;
void setup()
{
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
  //digitalWrite(9, HIGH);  
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available() > 0){     
      input = Serial.read();
      Serial.println(input);
    } 
    if (input == '1') {
         digitalWrite(2, HIGH); 
         Serial.println("Light OFF");
         
      }
      else if (input== 'A'){
         digitalWrite(2, LOW); 
         Serial.println("Light ON");
        
      }
      else if (input == '2') {
    
         digitalWrite(3, HIGH); 
         Serial.println("Fan OFF");
         
      }
      else if (input=='B'){
         digitalWrite(3, LOW);
         delay(1000);
         digitalWrite(3, HIGH);
         Serial.println("Fan ON");
        
      }
      else if (input=='3'){
         digitalWrite(4, HIGH);
         Serial.println("Fan OFF");
        
      }
      else if (input=='C'){
         digitalWrite(4, LOW); 
         Serial.println("Fan ON");
        
      }
      else if (input=='4'){
         digitalWrite(5, HIGH); 
         Serial.println("Fan OFF");
        
      }
      else if (input=='D'){
         digitalWrite(5, LOW); 
         Serial.println("Fan ON");
      }
      else if (input=='5'){
         digitalWrite(6, HIGH); 
         Serial.println("Fan OFF");
        
      }
      else if (input=='E'){
         digitalWrite(6, LOW); 
         Serial.println("Fan ON");
      }
      else if (input=='6'){
         digitalWrite(7, HIGH); 
         Serial.println("Fan OFF");
      }
      else if (input=='F'){
         digitalWrite(7, LOW); 
         Serial.println("Fan ON");
      }
      else if (input=='7'){
         digitalWrite(8, HIGH); 
         Serial.println("Fan OFF");
        
      }
      else if (input=='G'){
         digitalWrite(8, LOW); 
         Serial.println("Fan ON");

      }
      else if (input=='8'){
         digitalWrite(9, HIGH); 
         Serial.println("Fan OFF");
      }
      
      else if (input=='H'){
         digitalWrite(9, LOW); 
         Serial.println("Fan ON");
      }
}
