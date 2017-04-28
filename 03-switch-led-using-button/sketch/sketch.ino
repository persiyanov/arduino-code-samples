#define LED_PIN 4
#define PIN_INP 7

bool led_on = false;
bool button_prev = false;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIN_INP, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  bool button_current = digitalRead(PIN_INP);
  if (button_current && !button_prev)
    led_on = !led_on;
  button_prev = button_current;
  digitalWrite(LED_PIN, led_on);
}
