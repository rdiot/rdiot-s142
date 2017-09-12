/* TT Motor Car Gear Motor [S142] : http://rdiot.tistory.com/286 [RDIoT Demo] */

void setup() {
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
}

void loop() {
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  delay(1000);

  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  delay(1000);

  digitalWrite(A0,LOW);
  digitalWrite(A1,LOW);
  delay(2000);
}
