/************************************

Header file for sensors, includes
function for any sensor (analog) 
functioning. Create an instance 
of this for one sensor.

************************************/
#ifndef sensor_h
#define sensor_h

#include "Arduino.h"


class sensor
{
  public:

    int pin;                    // stores the Analog pin no. for example if sensor is connected to A0 pin then store 0 in this
    signed long time1, time2;   /* time1 stores the time stamp when sensor crossed the reference value
                                   and time2 stores the time stamp when sensor reading falls from the reference value */     
    float duration;             // stores the time period when sensor crossed the reference value
    float lastreading;          // stores the reading of sensor
    bool currentstatus;         // tells whether the sensor is currently above the reference value or not
    float reference;            // stores the reference value

    sensor();                   // construtor to initialize the above variables

    void attach_sensor(int spin);           // function to pass the pin on which the sensor is connected
    float read_sensor();                    // function to read the sensor and return the value
    void set_reference(float ref);          // function to set the reference value
    bool verify_read();                     // function returns a boolean value by asssessing the current status of sensor (reference value)

    private:
  
};

#endif

