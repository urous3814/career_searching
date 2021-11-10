int L, R;
void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
//  pinMode(5, OUTPUT);
//  pinMode(6, OUTPUT);
//  pinMode(9, OUTPUT);
//  pinMode(10, OUTPUT);
//  Serial.begin(9600);
  forward(150);
  backward(150);
  left(150);
  right(150);
  Stop();
}

void Stop(){
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000);
}

void forward(int spd){
  analogWrite(5, spd);
  analogWrite(6, 0);
  analogWrite(9, spd);
  analogWrite(10, 0);
  delay(1000);
}


void backward(int spd){
  analogWrite(5, 0);
  analogWrite(6, spd);
  analogWrite(9, 0);
  analogWrite(10, spd);
  delay(1000);
}

void left_turn(int spd){
  analogWrite(5, spd);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, spd);
  delay(1000);
}

void right_turn(int spd){
  analogWrite(5, 0);
  analogWrite(6, spd);
  analogWrite(9, spd);
  analogWrite(10, 0);
  delay(1000);
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
