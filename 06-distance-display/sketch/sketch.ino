#include <QuadDisplay.h>
#include <NewPing.h>

#define DISPLAY_PIN 2

#define TRIGGER_PIN 12
#define ECHO_PIN 13

NewPing sonar(TRIGGER_PIN, ECHO_PIN);

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  long dist = sonar.ping_cm();
  displayInt(DISPLAY_PIN, dist);
}
