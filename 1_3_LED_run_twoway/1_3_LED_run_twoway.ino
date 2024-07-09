const int LED_red = 6;
const int LED_yellow = 7;
const int LED_green = 8;
void setup() {
  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);
}

void loop() {
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

  digitalWrite(LED_yellow, HIGH);
  digitalWrite(LED_red, LOW);
  digitalWrite(LED_green, LOW);
  delay(300);
}