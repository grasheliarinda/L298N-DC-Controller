int In1 = 9;
int In2 = 8;
int ENA = 6;

int Speed;

void setup() {
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(ENA,OUTPUT);

}

void loop() {
  Speed = 255;
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA,Speed);
  delay(5000);

  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  delay(3000);

  Speed = 100;
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA,Speed);
  delay(2000);

  Speed = 175;
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA,Speed);
  delay(2000);

  Speed = 255;
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA,Speed);
  delay(3000);
  
  Speed = 255;
  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  analogWrite(ENA,Speed);
  delay(2000);
  
  digitalWrite(In1,LOW);
  digitalWrite(In2,LOW);
  delay(3000);

  Serial.println(Speed);

}
