
void setup() { 
  Serial.begin(9600);    
  pinMode(4, OUTPUT);    // LED 
  pinMode(6, OUTPUT);    // Buzzer 
}

void loop() { 
  int value = analogRead(A3); 
  Serial.print("Value: "); 
  Serial.println(value);

  if (value < 500) { 
    
    digitalWrite(4, HIGH); 
    digitalWrite(6, HIGH);  
    Serial.println("Heavy rain - LED and Buzzer on");
  } 
  else if (value >= 500 && value < 800) { 
    
    digitalWrite(4, HIGH);  
    digitalWrite(6, LOW);   
    Serial.println("Moderate rain - LED on");
  } 
  else { 
    
    digitalWrite(4, LOW);   
    digitalWrite(6, LOW);   
    Serial.println("No rain");
  }
}
