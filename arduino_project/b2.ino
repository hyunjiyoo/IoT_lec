#include <SoftwareSerial.h>
// 블루투스는 시리얼 통신을 하는 것.
SoftwareSerial bluetooth(2,3); // Serial number 지정.

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  // Serial.print(Serial.available());
  if (Serial.available()){
    bluetooth.write(Serial.read());
    // Serial.print(b.read());
  }
}
