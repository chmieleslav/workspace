const int LED = 13; // the pin for the LED
const int BUTTON = 7; // the input pin where the pushbutton is connected
int val = 0; // val will be used to store the state of the input pin
int old_val = 0; // this variable stores the previous value of "val"
int state = 0; // 0 = LED off while 1 = LED on

void setup() 
{
  pinMode(LED, OUTPUT); // tell Arduino LED is an output
  pinMode(BUTTON, INPUT); // and BUTTON is an input
}

void loop() 
{
  val = digitalRead(BUTTON); // read input value and store it
  
  // check if the input is HIGH (button pressed)
  // and change the state
  if ((val == HIGH) && (old_val == LOW))
  {
    state = 1 - state;
    delay(10);
  }

  if ((val == LOW) && (old_val == HIGH)) 
  {
    delay(10);
  }

  old_val = val; // val is now old, let's store it
  
  if (state == 1) 
  {
    digitalWrite(LED, HIGH); // turn LED ON
  } 
  else 
  {
    digitalWrite(LED, LOW);
  }
}
