int L, R;
void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  L = digitalRead(3);
  R = digitalRead(4);
  Serial.print("Left: ");
  Serial.print(L);
  Serial.print("  Right: ");
  Serial.print(R);
  Serial.print("\n");
}
