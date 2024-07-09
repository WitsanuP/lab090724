const int BUTTON_1 =  9;  

const int LED_red = 6;
const int LED_yellow = 7;
const int LED_green = 8;

int buttonState1 = 0;

void setup() {
  pinMode(BUTTON_1, INPUT);

  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);
}

void loop() {
  buttonState1 = digitalRead(BUTTON_1);
  if (buttonState1 == HIGH) {
    digitalWrite(LED_red, HIGH);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, LOW);
    delay(300);

    digitalWrite(LED_yellow, HIGH);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_green, LOW);
    delay(300);

    digitalWrite(LED_green, HIGH);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, LOW);
    delay(300);
  } else {
    digitalWrite(LED_green, HIGH);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, LOW);
    delay(300);

    digitalWrite(LED_yellow, HIGH);
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_green, LOW);
    delay(300);

    digitalWrite(LED_red, HIGH);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, LOW);
    delay(300);
  }
}