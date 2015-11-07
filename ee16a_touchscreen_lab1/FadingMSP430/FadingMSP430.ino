/*
 Fading
 
 This example shows how to fade an LED using the analogWrite() function.
 
 The circuit:
 * LED attached from digital pin 9 to ground.
 
 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe
 
 http://arduino.cc/en/Tutorial/Fading
 
 This example code is in the public domain.
 
 */


int ledPin = 35;    // LED connected to digital pin 9
int gled = GREEN_LED;
int blinkrate = 30; //ms

void setup()  { 
  Serial.begin(9600);  // nothing happens in setup 
} 

void loop()  { 
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=2) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);      
 analogWrite(gled, fadeValue);            
    // wait for 30 milliseconds to see the dimming effect    
    delay(blinkrate);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=2) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue); 
 analogWrite(gled, fadeValue);     
    // wait for 30 milliseconds to see the dimming effect    
    delay(blinkrate); 
Serial.println(fadeValue);

  } 
}


