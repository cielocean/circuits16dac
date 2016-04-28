int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, LOW);digitalWrite(5, LOW);
  digitalWrite(6, LOW);digitalWrite(9, LOW);
  Serial.print("one");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, LOW);
  digitalWrite(6, LOW);digitalWrite(9, HIGH);
  Serial.print("two");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, LOW);
  digitalWrite(6, HIGH);digitalWrite(9, LOW);
  Serial.print("three");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, LOW);
  digitalWrite(6, HIGH);digitalWrite(9, HIGH);
  Serial.print("four");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, HIGH);
  digitalWrite(6, LOW);digitalWrite(9, LOW);
  Serial.print("five");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, HIGH);
  digitalWrite(6, LOW);digitalWrite(9, HIGH);
  Serial.print("fivesix");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);digitalWrite(9, LOW);
  Serial.print("six");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, LOW);digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);digitalWrite(9, HIGH);
  Serial.print("seven");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, LOW);
  digitalWrite(6, LOW);digitalWrite(9, LOW);
  Serial.print("eight");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, LOW);
  digitalWrite(6, LOW);digitalWrite(9, HIGH);
  Serial.print("nine");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, LOW);
  digitalWrite(6, HIGH);digitalWrite(9, LOW);
  Serial.print("ten");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, LOW);
  digitalWrite(6, HIGH);digitalWrite(9, HIGH);
  Serial.print("eleven");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, HIGH);
  digitalWrite(6, LOW);digitalWrite(9, LOW);
  Serial.print("twelve");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, HIGH);
  digitalWrite(6, LOW);digitalWrite(9, HIGH);
  Serial.print("twelvethirteen");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);digitalWrite(9, LOW);
  Serial.print("thirteen");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);
  digitalWrite(3, HIGH);digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);digitalWrite(9, HIGH);
  Serial.print("fourteen");
  Serial.println(analogRead(sensorPin)* (5.0 / 1023.0));
  delay(125);

}
