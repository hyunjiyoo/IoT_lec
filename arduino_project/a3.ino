void setup() { 
  Serial.begin(9600);
  pinMode(3, OUTPUT); // Red
  pinMode(5, OUTPUT); // Green
  pinMode(11, OUTPUT); // Blue
}

void loop() {
  Serial.println("\nRed Lignt:ON");
  for(int i=50; i<=255; i++){
    analogWrite(3, i);
    delay(50);
  }
  analogWrite(3, 0);
  delay(500);
  Serial.println("\nGreen Lignt:ON");
  for(int i=0; i<=255; i++){
    analogWrite(5, i);
    delay(50);
  }
  analogWrite(5, 0);
  delay(500);
  Serial.println("\nBlue Lignt:ON");
  for(int i=0; i<=255; i++){
    analogWrite(11, i);
    delay(50);
  }
  analogWrite(11, 0);
  delay(500);
}
