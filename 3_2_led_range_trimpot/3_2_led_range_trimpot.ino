const int LED_red = 6;
const int LED_yellow = 7;
const int LED_green = 8;

const int ANALOG_PIN = 14; 
void setup() {
  Serial.begin(9600);

  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);

  pinMode(ANALOG_PIN, INPUT);
}

void loop() {
  int analogValue = analogRead(ANALOG_PIN);

  Serial.print("Analog value at pin 14: ");
  Serial.println(analogValue);

  if (analogValue >= 0 && analogValue <= 226) {
    digitalWrite(LED_red, HIGH);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, LOW);
  } else if (analogValue > 226 && analogValue <= 453) {
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, HIGH);
    digitalWrite(LED_green, LOW);
  } else{
    digitalWrite(LED_red, LOW);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_green, HIGH);
  } }

  delay(500);
}