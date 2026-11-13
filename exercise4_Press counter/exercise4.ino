
const int button = 2;
int lastState = HIGH;
int count = 0;

void setup() {
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(button);
  if (lastState == HIGH && state == LOW) { 
    count++;
    Serial.println(count);
    delay(50);
  }
  lastState = state;
}
