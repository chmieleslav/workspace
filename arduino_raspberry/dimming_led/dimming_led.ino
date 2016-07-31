const int LED = 9; // the pin for the LED
int i = 0; // We'll use this to count up and down

void setup() 
{
  pinMode(LED, OUTPUT);
}

void loop() 
{
  // Fade in
  for (i=0; i<255; i++)
  {
    analogWrite(LED, i);
    delay(10);
  }

  // Fade out
  for (i=255; i>0; i--)
  {
    analogWrite(LED, i);
    delay(10);
  }  
}
