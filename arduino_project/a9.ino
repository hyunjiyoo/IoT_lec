int sound[] = {262,294,330,349,392,440,494,523};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(11);
  Serial.println(a);
  delay(500);

  if (a<200) {
    for (int i=0; i<8; i++){
    tone(11, sound[i]);
    delay(500);
    }
  } else {
    for (int i=7; i>=0; i--){
    tone(11, sound[i]);
    delay(500);
    }
  //noTone(11);
  }
}
