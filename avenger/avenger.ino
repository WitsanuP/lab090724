const int BUTTON_1 = 9;
const int BUTTON_2 = 10;
const int BUTTON_3 = 11;
const int LED_red = 6;
const int LED_yellow = 7;
const int LED_green = 8;

const int VR = A0;

// Variables to store button states and speed
int button1State = 0;
int button2State = 0;
int button3State = 0;
int vrValue = 0;
int speed = 0;

void setup() {
  // Set LED pins as OUTPUT
  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);

  // Set button pins as INPUT_PULLUP
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
}

void loop() {
  // Read button states (inverted logic due to pull-up resistors)
  button1State = digitalRead(BUTTON_1);
  button2State = digitalRead(BUTTON_2);
  button3State = digitalRead(BUTTON_3);

  
  vrValue = analogRead(VR);
  //speed = map(vrValue, 0, 600, 10, 1000); // Adjust the range as needed
  speed = vrValue *1000./ 600+10;
  if (button1State == LOW) {
    // Button 1 pressed: LED running to the left
    digitalWrite(LED_red, HIGH);
    delay(speed);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, HIGH);
    delay(speed);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, HIGH);
    delay(speed);
    digitalWrite(LED_green, LOW);
  } else if (button2State == LOW) {
    // Button 2 pressed: LED blinking
    digitalWrite(LED_red, HIGH);
    digitalWrite(LED_yellow, HIGH);
    digitalWrite(LED_green, HIGH);
    delay(speed);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, LOW);
    delay(speed);
  } else if (button3State == LOW) {
    // Button 3 pressed: LED running to the right
    digitalWrite(LED_green, HIGH);
    delay(speed);
    digitalWrite(LED_green, LOW);
    digitalWrite(LED_yellow, HIGH);
    delay(speed);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_red, HIGH);
    delay(speed);
    digitalWrite(LED_red, LOW);
  } else {
    // No button pressed: All LEDs off
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, LOW);
  }
}