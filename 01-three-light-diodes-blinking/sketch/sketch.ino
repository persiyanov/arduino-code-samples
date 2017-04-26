const int N = 3;
int pins_to_use[N] = {2,9,10};

// the setup function runs once when you press reset or power the board
void setup() {
  for (int i = 0; i < N; i++) {
    pinMode(pins_to_use[i], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < N; i++) {
    digitalWrite(pins_to_use[i], HIGH);
    delay(100);
    digitalWrite(pins_to_use[i], LOW);
    delay(100);
  }
}
