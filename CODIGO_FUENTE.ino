const int pinIN1 = 8;
const int pinIN2 = 9;
const int pinENA = 10;

void setup() {
  pinMode(pinIN1, OUTPUT);
  pinMode(pinIN2, OUTPUT);
  pinMode(pinENA, OUTPUT);

  // Configuración por defecto
  int velocidad = 128;         // Velocidad media
  bool horario = true;         // Sentido horario

  girarMotor(velocidad, horario);
}

void loop() {
}

void girarMotor(int velocidad, bool sentidoHorario) {
  if (sentidoHorario) {
    digitalWrite(pinIN1, HIGH);
    digitalWrite(pinIN2, LOW);
  } else {
    digitalWrite(pinIN1, LOW);
    digitalWrite(pinIN2, HIGH);
  }
  analogWrite(pinENA, velocidad);
}