#include "Arduino.h"
#include "Actuators.h"

Actuators::Actuators()
{
  
}

void Actuators::attach_servos(int pwmpin1, int pwmpin2, int pwmpin3, int pwmpin4, int pwmpin5)
{
  servo1.attach(pwmpin1);
  servo2.attach(pwmpin2);
  servo3.attach(pwmpin3);
  servo4.attach(pwmpin4);
  servo5.attach(pwmpin5);
}

void Actuators::control_servo(float angleservo1, float angleservo2, float angleservo3, float angleservo4, float angleservo5)
{
  servo1.write(angleservo1);
  servo2.write(angleservo2);
  servo3.write(angleservo3);
  servo4.write(angleservo4);
  servo5.write(angleservo5);
}

void Actuators::control_servo(float angleservo1, float angleservo2, float angleservo3, float angleservo4)
{
  servo1.write(angleservo1);
  servo2.write(angleservo2);
  servo3.write(angleservo3);
  servo4.write(angleservo4);
}

void Actuators::control_servo(float angleservo1, float angleservo2, float angleservo3)
{
  servo1.write(angleservo1);
  servo2.write(angleservo2);
  servo3.write(angleservo3);
}

void Actuators::control_servo(float angleservo1, float angleservo2 )
{
  servo1.write(angleservo1);
  servo2.write(angleservo2);
}

void Actuators::control_servo(float angleservo, int number)
{
  switch(number)
  {
    case 1:
      servo1.write(angleservo);
      break;
    case 2:
      servo1.write(angleservo);
      break;
    case 3:
      servo1.write(angleservo);
      break;
    case 4:
      servo1.write(angleservo);
      break;
    case 5:
      servo1.write(angleservo);
      break;
    default:
     int ac;
  }
}
  

