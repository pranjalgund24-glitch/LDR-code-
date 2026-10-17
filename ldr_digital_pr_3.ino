

#define ldrPin 2      // LDR Digital Output connected to GPIO2
#define ledPin 4      // LED connected to GPIO4
#define buzzerPin 5   // Buzzer connected to GPIO5

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightStatus = digitalRead(ldrPin);

  if (lightStatus == HIGH) {
    // Light detected
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(1000);
    Serial.println("Darkness detected");
  } else {
    // No light
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(1000);
    Serial.println("Light detected");
  }

  delay(500); // Small delay
}
