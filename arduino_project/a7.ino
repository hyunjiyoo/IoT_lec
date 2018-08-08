void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0); // 가변저항 800까지 나오므로
  analogWrite(11, a/3);
}
