const int LDR = 15; 

int analogValue;

void setup() {
  Serial.begin(9600);

  pinMode(LDR, INPUT);
}

void loop() {

  int analogValue = analogRead(LDR);

  Serial.print("Analog value at pin 15: ");
  Serial.println(analogValue);

  delay(300);
}