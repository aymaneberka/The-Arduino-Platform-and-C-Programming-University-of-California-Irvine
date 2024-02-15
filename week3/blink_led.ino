 int LED_PIN = 13;

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Blink the LED quickly 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(500); // LED on for 0.5 seconds
    digitalWrite(LED_PIN, LOW);
    delay(500); // LED off for 0.5 seconds
  }

  // Blink the LED slowly 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(2000); // LED on for 2 seconds
    digitalWrite(LED_PIN, LOW);
    delay(2000); // LED off for 2 seconds
  }
}