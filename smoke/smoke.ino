
int LED1 = 2;
int buzzer = 10;
int smokeA0 = 4;
int sensorThreshold = 120;
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThreshold)
  {
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    Serial.println("Thresh crossed");
  }
  else
  {
    digitalWrite(LED1, LOW);
    delay(2000);
    digitalWrite(LED1, HIGH);
    Serial.println("Thresh not crossed");
  }
  delay(100);
}
