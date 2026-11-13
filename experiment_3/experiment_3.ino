
const int led = 10;
const int button =2;
void setup() {
pinMode(led, OUTPUT);
pinMode(button, INPUT_PULLUP);
}

void loop() {
int state = digitalRead(button);
if (state == LOW){
   digitalWrite(led , HIGH);
 } else {
  digitalWrite(led , LOW);} 
delay(200);
}
