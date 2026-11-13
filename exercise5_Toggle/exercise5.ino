
const int led = 10;
const int button = 2;
int lastState = HIGH;
bool ledOn = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  int state = digitalRead(button);
  if (lastState == HIGH && state == LOW) {
    ledOn = !ledOn;
    if (ledOn == true) {
       digitalWrite(led, HIGH);  
    } else {
       digitalWrite(led, LOW);   
     }
    delay(300);  
  }
  lastState = state;
}