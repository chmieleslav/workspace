const int LED = 13; // the pin for the LED
const int BUTTON = 7; // the input pin where the pushbutton is connected
int val = 0; // val will be used to store the state of the input pin
int old_val = 0; // this variable stores the previous value of "val"
int state = 0; // 0 = LED off while 1 = LED on
int print_message = 0;

void setup() 
{
  pinMode(LED, OUTPUT); // tell Arduino LED is an output
  pinMode(BUTTON, INPUT); // and BUTTON is an input 

  Serial.begin(9600); // open the serial port to send
  // data back to the computer at
  // 9600 bits per second
}

void loop() 
{
  val = digitalRead(BUTTON); // read input value and store it
  
  // check if the input is HIGH (button pressed)
  // and change the state
  if ((val == HIGH) && (old_val == LOW))
  {
    state = 1 - state;
    Serial.println("pressed");
    print_message = 1;
    delay(10);
  }

  if ((val == LOW) && (old_val == HIGH)) 
  {
    Serial.println("released"); // print the value to the serial port
    delay(10);
  }
  
  if (state == 1) 
  {
    digitalWrite(LED, HIGH); // turn LED ON 

    if (print_message)
    {
      Serial.println("LED ON");
    }
  } 
  else 
  {
    digitalWrite(LED, LOW);

    if (print_message)
    {
      Serial.println("LED OFF");
    }
  }

  old_val = val; // val is now old, let's store it
  print_message = 0;
}
