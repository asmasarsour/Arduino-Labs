
const int led = 10;   
const int button = 2;  

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); 
}
void loop() {
  int speedDelay = 500; 
  if (digitalRead(button) == LOW) {
    speedDelay = 100; 
  }
  digitalWrite(led, HIGH);
  delay(speedDelay);
  digitalWrite(led, LOW);
  delay(speedDelay);
}