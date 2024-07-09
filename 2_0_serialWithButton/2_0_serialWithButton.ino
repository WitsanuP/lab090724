const int BUTTON_1 = 9;  // the number of the pushbutton pin

int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
 
  pinMode(BUTTON_1, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(BUTTON_1);
  Serial.println(buttonState); 
  delay(100);
}
