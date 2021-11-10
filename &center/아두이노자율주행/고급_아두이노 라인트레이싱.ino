int L, R;
void setup() {
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void Stop(){
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}

void forward(int spd){
  analogWrite(5, spd);
  analogWrite(6, 0);
  analogWrite(9, spd);
  analogWrite(10, 0);
  delay(5);
  Stop();
  delay(3);
}


void backward(int spd){
  analogWrite(5, 0);
  analogWrite(6, spd);
  analogWrite(9, 0);
  analogWrite(10, spd);
  delay(5);
  Stop();
  delay(3);
}

void left_turn(int spd){
  analogWrite(5, spd);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(5);
  Stop();
  delay(3);
}

void right_turn(int spd){
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, spd);
  analogWrite(10, 0);
  delay(5);
  Stop();
  delay(3);
}

void loop() {
  L = digitalRead(3);
  R = digitalRead(4);
  Serial.print("Left: ");
  Serial.print(L);
  Serial.print("  Right: ");
  Serial.println(R);
  if(L==1 && R==1)  Stop();
  else if(L==1 && R==0)  right_turn(250);
  else if(L==0 && R==1)  left_turn(250);
  else forward(250);
}
