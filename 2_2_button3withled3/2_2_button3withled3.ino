const int BUTTON_1 =  9;  
const int BUTTON_2 = 10;  
const int BUTTON_3 = 11;  
const int LED_red    = 6;
const int LED_yellow = 7;
const int LED_green  = 8;

int buttonState1 = 0;  
int buttonState2 = 0;  
int buttonState3 = 0;

void setup() {
  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);

  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(BUTTON_3, INPUT);
}

void loop() {
  buttonState1 = digitalRead(BUTTON_1);
  if (buttonState1 == LOW) {
    digitalWrite(LED_red, HIGH);
  } else {
    digitalWrite(LED_red, LOW);
  }

  buttonState2 = digitalRead(BUTTON_2);
  if (buttonState2 == LOW) {
    digitalWrite(LED_yellow, HIGH);
  } else {
    digitalWrite(LED_yellow, LOW);
  }

  buttonState3 = digitalRead(BUTTON_3);
  if (buttonState3 == LOW) {
    digitalWrite(LED_green, HIGH);
  } else {
    digitalWrite(LED_green, LOW);
  }
}
