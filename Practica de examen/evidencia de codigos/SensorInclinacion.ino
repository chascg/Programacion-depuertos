// Definir los pines
const int tiltSensorPin = 2;  // Pin del sensor de inclinación
const int buzzerPin = 3;      // Pin del buzzer

void setup() {
  // Configurar el pin del sensor como entrada
  pinMode(tiltSensorPin, INPUT);

  // Configurar el pin del buzzer como salida
  pinMode(buzzerPin, OUTPUT);

  // Iniciar la comunicación serial (opcional, para depuración)
  Serial.begin(9600);
}

void loop() {
  // Leer el estado del sensor de inclinación
  int tiltState = digitalRead(tiltSensorPin);

  // Mostrar el estado en el monitor serial (opcional)
  Serial.println(tiltState);

  // Si el sensor está inclinado (posición horizontal, LOW)
  if (tiltState == LOW) {
    // Activar el buzzer (sonido continuo)
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Apagar el buzzer
    digitalWrite(buzzerPin, LOW);
  }

  // Pequeño retardo para evitar lecturas erráticas
  delay(300);
}