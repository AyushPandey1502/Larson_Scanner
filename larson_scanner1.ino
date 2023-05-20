// AYUSH PANDEY
//22BIT0624

int led_pin[] = {2, 3, 4, 5, 6, 7, 8, 9};
int numLEDs = 8;
int delayTime = 100;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(led_pin[i], HIGH);
    delay(delayTime);
    digitalWrite(led_pin[i], LOW);
  }
  
  for (int i = numLEDs - 2; i > 0; i--) {
    digitalWrite(led_pin[i], HIGH);
    delay(delayTime);
    digitalWrite(led_pin[i], LOW);
  }
}
