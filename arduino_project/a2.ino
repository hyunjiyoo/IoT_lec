void setup() { 
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Red
  pinMode(4, OUTPUT); // Green
  pinMode(8, OUTPUT); // Blue
}

void loop() {
  Serial.println("\nRed Lignt:ON");
  digitalWrite(2, HIGH);  
  delay(1000);                      
  Serial.println("Red Lignt:Off");
  digitalWrite(2, LOW);   
  delay(1000);                       

  Serial.println("\nGreen Lignt:ON");
  digitalWrite(4, HIGH);  
  delay(2000);                  
  Serial.println("Green Lignt:Off");
  digitalWrite(4, LOW); 
  delay(1000);  

  Serial.println("\nBlue Lignt:ON");
  digitalWrite(8, HIGH);  
  delay(3000);                  
  Serial.println("Blue Lignt:Off");
  digitalWrite(8, LOW); 
  delay(1000);
}
