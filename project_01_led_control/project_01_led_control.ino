#define LED_PIN     8
#define LED_TIMEOUT 5000

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(LED_TIMEOUT);
  digitalWrite(LED_PIN, LOW);
  delay(LED_TIMEOUT);
}
