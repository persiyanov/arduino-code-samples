#define LED1 2
#define LED10 11

void setup() {
  for (int i = LED1; i < LED10+1; ++i)
    pinMode(i, OUTPUT);

}

void switch_all_and_delay(int value, int delay_value=100) {
  for (int i = LED1; i < LED10+1; ++i)
    digitalWrite(i, value);
  delay(delay_value);
}


void loop() {
  // put your main code here, to run repeatedly:
  for (int i = LED1; i < LED10+1; ++i) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  delay(100);
  for (int i = 0; i < 3; ++i) {
    switch_all_and_delay(HIGH, 200);
    switch_all_and_delay(LOW, 200);
  }
}
