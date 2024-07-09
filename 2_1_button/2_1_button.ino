const int BUTTON_1 = 9;  // the number of the pushbutton pin
const int LED_red = 6;    // the number of the LED pin

int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED_red, OUTPUT);
  pinMode(BUTTON_1, INPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON_1);
  if (buttonState == HIGH) {
    digitalWrite(LED_red, HIGH);
  } else {
    digitalWrite(LED_red, LOW);
  }
}
