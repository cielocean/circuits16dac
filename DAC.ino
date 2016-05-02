int Ain = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (byte i=0; i <=1111; i++){
    digitalWrite(1,bitRead(i,0));
    digitalWrite(2,bitRead(i,1));
    digitalWrite(3,bitRead(i,2));
    digitalWrite(4,bitRead(i,3));
    Serial.println(analogRead(Ain)* (5.0 / 1023.0));
  }
}
