void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // check if data is available
  if (Serial.available() > 0) {
    // read the incoming string:
    String incomingString = Serial.readStringUntil('\n');

    // prints the received data
    Serial.print("I received: ");
    Serial.println(incomingString);
  }
}
