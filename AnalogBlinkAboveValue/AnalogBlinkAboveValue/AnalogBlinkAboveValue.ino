/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  modified 08/02/2021 by Steven Kelly

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
const int LEDPin =  3; 
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  //If analog value exceeds, blink LED
  if(sensorValue > 500)
  {
    //Blink the Led
    digitalWrite(LEDPin, HIGH);       // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LEDPin, LOW);        // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
  }
  else 
  {
    // turn LED off:
    digitalWrite(LEDPin, LOW);
  }
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
