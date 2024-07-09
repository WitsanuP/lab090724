const int TRIMPOT = 14; 

int analogValue;

void setup() {
  Serial.begin(9600);

  pinMode(TRIMPOT, INPUT);
}

void loop() {

  int analogValue = analogRead(TRIMPOT);

  Serial.print("Analog value at pin 14: ");
  Serial.println(analogValue);

  delay(300);
}