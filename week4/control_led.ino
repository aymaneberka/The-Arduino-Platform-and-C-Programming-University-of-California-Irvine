// Define the LED pin
int ledPin = 13;

// Set the initial state of the LED to off
int ledState = LOW;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Turn off the LED initially
  digitalWrite(ledPin, ledState);
}

void loop() {
  // Check if there is incoming serial data
  if (Serial.available() > 0) {
    // Read the incoming character
    char incomingChar = Serial.read();

    // Check if the character is '1'
    if (incomingChar == '1') {
      // Turn on the LED
      ledState = HIGH;
      digitalWrite(ledPin, ledState);
    }

    // Check if the character is '0'
    if (incomingChar == '0') {
      // Turn off the LED
      ledState = LOW;
      digitalWrite(ledPin, ledState);
    }
  }
}
