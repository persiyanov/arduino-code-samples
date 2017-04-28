#define BUZZER_PIN 7
#define PHOTO_SENS A0
#define DIODE_PIN 4

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(DIODE_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photo_sens = analogRead(PHOTO_SENS);
  if (photo_sens > 870)
    digitalWrite(DIODE_PIN, HIGH);
  else
    digitalWrite(DIODE_PIN, LOW);

  tone(BUZZER_PIN, photo_sens * 4);
  Serial.println(photo_sens);
}
