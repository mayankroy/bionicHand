#ifndef Actuators_h
#define Actuators_h

#include <Servo.h>
#include "Arduino.h"

class Actuators
{
  public:

  	Servo servo1;
  	Servo servo2;
  	Servo servo3;
  	Servo servo4;
  	Servo servo5;
    
    Actuators();

    void attach_servos(int pwmpin1, int pwmpin2, int pwmpin3, int pwmpin4, int pwmpin5);

    void control_servo(float angleservo1, float angleservo2, float angleservo3, float angleservo4, float angleservo5);
    void control_servo(float angleservo1, float angleservo2, float angleservo3, float angleservo4);
    void control_servo(float angleservo1, float angleservo2, float angleservo3);
    void control_servo(float angleservo1, float angleservo2);
    void control_servo(float angleservo, int number);

  private:
    
    
};

#endif

