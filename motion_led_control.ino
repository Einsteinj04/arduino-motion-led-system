// Motion-Activated LED Control using PIR Sensor
// Hardware: Arduino Uno + HC-SR501 PIR Sensor + BC547 Transistor + LED
#define pirPin 2      // Digital pin connected to PIR sensor output
#define ledPin 9      // LED control pin via transistor

int motionState = LOW;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  motionState = digitalRead(pirPin);
  Serial.print("Motion: ");
  Serial.println(motionState);

  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn LED ON
    delay(5000);                  // Keep LED ON for 5 seconds
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED OFF
  }
}
