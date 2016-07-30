// Blinking LED
const int LED = 13; // LED connected to digital pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH); // turns the LED on
  delay(3000); // waits for 3 seconds
  digitalWrite(LED, LOW); // turns the LED off
  delay(500); // waits for 3 seconds
}
