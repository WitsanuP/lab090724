const int LED_red = 6;
const int TRIMPOT = 14; 

int analogValue;

void setup() {
  Serial.begin(9600);

  pinMode(LED_red, OUTPUT);
  pinMode(TRIMPOT, INPUT);
}

void loop() {

  int analogValue = analogRead(TRIMPOT);

  Serial.print("Analog value at pin 14: ");
  Serial.println(analogValue);

  if (analogValue > 300) {
    digitalWrite(LED_red, HIGH);
  } else {
    digitalWrite(LED_red, LOW);
  }
  delay(500);
}