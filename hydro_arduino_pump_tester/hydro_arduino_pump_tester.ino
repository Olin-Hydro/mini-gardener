void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(30000);
  digitalWrite(8, LOW);
  delay(60000*90);
}