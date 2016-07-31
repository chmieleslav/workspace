#include <IRremote.h>
 
int RECEIVE_PIN= 2;
IRrecv irreceiver(RECEIVE_PIN);
decode_results results;
 
void setup()
{
  irreceiver.enableIRIn(); // Start the receiver
}
 
void loop() {
  if (irreceiver.decode(&results)) {
    Serial.println(results.value, HEX);
  }
}
