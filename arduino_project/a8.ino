void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  // 밝기 센서가 작동. 손으로 센서 가리면 숫자 내려감.
  int a = analogRead(A0);
  Serial.println(a);
  delay(1000);

  if (a < 500){
    digitalWrite(8, 1);
    delay(500);
    analogWrite(9, 255);
    delay(500);
    digitalWrite(13, 1);
  } else {
    digitalWrite(13, 0);
    delay(500);
    analogWrite(9, 0);
    delay(500);
    digitalWrite(8, 0);
  }  
}
