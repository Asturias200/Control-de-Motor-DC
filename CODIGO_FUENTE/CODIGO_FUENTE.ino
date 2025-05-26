const int pinIN3 = 7;  
const int pinIN4 = 8;  
const int pinENB = 9;  

void setup() {
  pinMode(pinIN3, OUTPUT);
  pinMode(pinIN4, OUTPUT);
  pinMode(pinENB, OUTPUT);
}

void loop() {

  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, HIGH);
  analogWrite(pinENB, 128);  
  delay(5000);

  digitalWrite(pinIN3, LOW);
  digitalWrite(pinIN4, LOW);
}