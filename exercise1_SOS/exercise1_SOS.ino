const int led = 10;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void blink(int onMs) {
  digitalWrite(led, HIGH);
  delay(onMs);
  digitalWrite(led, LOW);
  delay(100);
}
void loop() {
  Serial.println("S");
  for (int i = 0; i < 3; i++) {
    blink(150);
  }
  Serial.println("O");
  for (int i = 0; i < 3; i++) {
    blink(400);
  }
  Serial.println("S");
  for (int i = 0; i < 3; i++) {
    blink(150);
  }
  delay(2000);
}