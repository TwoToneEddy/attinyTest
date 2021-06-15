#include <Arduino.h>


#include <SoftwareSerial.h>


#define Ledpin 1 // Select the pin where the led is attached

SoftwareSerial mySerial(2, 3); // RX, TX

void Toggle(void)
{
  if(digitalRead(Ledpin)==HIGH)
  { 
    digitalWrite(Ledpin, LOW); 
  }
  else
  { 
    digitalWrite(Ledpin, HIGH); 
  }
}

void setup() { 
  pinMode(Ledpin, OUTPUT); // initialize the digital pin as an output.
  digitalWrite(Ledpin, LOW); // Set it in Low state
  mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Toggle();
mySerial.println("Hello, world\n");
delay(100);
}

