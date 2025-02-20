int temp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(A0); 
  temp = (5.0 * temp * 100) / 1023.0; 

  Serial.println(temp); 

  delay(1000); 
}
