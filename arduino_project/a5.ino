void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool b1 = digitalRead(13);
  if(b1 == false) {
    Serial.println("switch connected!");
    delay(1000);
  }
}
