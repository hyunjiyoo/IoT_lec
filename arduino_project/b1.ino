void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // 초음파 센서
  pinMode(12, INPUT); // 초음파 센서
  //pinMode(11, OUTPUT); // 소리 센서
  
  pinMode(9, INPUT_PULLUP); // red
  pinMode(7, INPUT_PULLUP); // green
  pinMode(6, INPUT_PULLUP); // blue
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);

  long a = pulseIn(12, HIGH); // echo
  long d = a / 58.2; // 거리 계산식
  Serial.println(d);
  delay(1000);
  
  analogWrite(6, 0);
  digitalWrite(7, 0);
  analogWrite(9, 0);
  
  if(d<5) {
    Serial.println("red light on"); 
    analogWrite(6, 0);
    digitalWrite(7, 0);
    analogWrite(9, 50);
    
  } else if(d<10){
    Serial.println("green light on");
    analogWrite(9, 0);
    analogWrite(6, 0);
    digitalWrite(7, 1);
  
  } else if(d<15) {
    Serial.println("blue light on");
    analogWrite(9, 0);
    digitalWrite(7, 0);
    analogWrite(6, 50);
    
  }
}
