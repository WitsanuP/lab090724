const int LDR = 15; 
const int LED_red = 6;
int analogValue;

void setup() {
  Serial.begin(9600);
  
  pinMode(LDR, INPUT);
  pinMode(LED_red, OUTPUT);
}

void loop() {

  int analogValue = analogRead(LDR);

  Serial.print("Analog value at pin 15: ");
  Serial.println(analogValue);

  if(analogValue<100){
    digitalWrite(LED_red, HIGH);
  }
  else {
    digitalWrite(LED_red, LOW);
  }
  delay(300);
}