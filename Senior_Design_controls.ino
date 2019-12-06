#include <PRIZM.h>    // include the PRIZM library in the sketch
PRIZM prizm;          // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {
  prizm.PrizmBegin();         // initialize the PRIZM controller
  prizm.setServoSpeed(1,100); //Servo1 at 100% speed
}

void loop() {                     // repeat in a loop
  prizm.setServoPosition(1,120);  // rotate servo1 to 120 degrees
  delay(1500);                    // wait for 1.5 seconds to give servo1 time to open                                  
  prizm.setServoPosition(1,0);    // rotate servo1 to 0 degrees
  delay(500);                     // wait for 0.5 seconds to give servo1 time to close
                              
  prizm.setMotorPower(1,-24);     //motor set to spin CCW at 24% power
  delay(2250);                    //run motor forward for 2.25 seconds
  prizm.setMotorPower(1,0);       
  delay(750);                     //motor off for 0.75 seconds
  
  prizm.setServoPosition(1,120);  // rotate servo1 to 120 degrees to open
  delay(1500);                    //wait 1.5 seconds to give servo1 time to open
  prizm.setServoPosition(1,0);    // rotate servo1 to 0 degrees
  delay(500);                     // wait for 0.5 seconds to give servo1 time to close
                                    
  prizm.setMotorPower(1,24);      //motor set to spin CW at 24% power  
  delay(2350);                    //run motor forward for 2.35 seconds
  prizm.setMotorPower(1,0);       
  delay(750);                     //motor off for 0.75 seconds
  
  prizm.setServoPosition(1,0);    // rotate servo1 to 0 degrees
  delay(500);                     // wait 0.5 seconds for servo1 to close
}                                 //end of loop
