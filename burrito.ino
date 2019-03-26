const int ledPin = 7;
const int audioPinDigital = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(audioPinDigital, INPUT);
}

void loop() {
  if (digitalRead(audioPinDigital)) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
