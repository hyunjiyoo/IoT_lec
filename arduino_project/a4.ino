void setup() { 
  Serial.begin(9600);
  pinMode(11, OUTPUT); // Blue
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  bool btn = digitalRead(7);
  if (btn == false) {
    digitalWrite(11, 1);
  } else {
    digitalWrite(11, 0);
  }
}
