const int LED_red = 6;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_red, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_red, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_red, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}