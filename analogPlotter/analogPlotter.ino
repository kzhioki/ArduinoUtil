void setup() {
  Serial.begin(115200);
  while (!Serial);
}

void loop() {
  Serial.print(analogRead(A0)); Serial.print(",");
  Serial.print(analogRead(A1)); Serial.print(",");
  Serial.print(analogRead(A2)); Serial.print(",");
  Serial.print(analogRead(A3)); Serial.print(",");
  Serial.print(analogRead(A4)); Serial.print(",");
  Serial.print(analogRead(A5)); Serial.println();
  delay(10);
}
