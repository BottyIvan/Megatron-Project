/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo r;  // create servo object to control a servo 
Servo l;  // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
int pos_r = 360;
void setup() 
{ 
  l.attach(2);  // attaches the servo on pin 9 to the servo object 
  r.attach(3);
} 
 
void loop() 
{ 
  go();
} 

void go(){
  pos_r = 360;
  for(pos = 0; pos <= 360; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    l.write(pos);              // tell servo to go to position in variable 'pos' 
    r.write(pos_r);
    delay(15);                       // waits 15ms for the servo to reach the position 
    if(pos == 360 ){
      pos = 0;
    }
    if(pos_r == 0 ){
      pos_r = 360;
    }
    pos_r -=1;
  } 
}
