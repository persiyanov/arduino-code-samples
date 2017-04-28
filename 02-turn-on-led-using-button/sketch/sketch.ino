#define LED_PIN 4
#define PIN_INP 7

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIN_INP, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, digitalRead(PIN_INP));
}
