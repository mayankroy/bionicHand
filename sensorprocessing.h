/************************************

Header file for processing the sensors, 
includes the sensor header file. It 
caters to as many sensor instances in 
form of array which are passed as argument.
Create an instance to use it.

************************************/
#ifndef sensorprocessing_h
#define sensorprocessing_h

#include "Arduino.h"
#include "sensor.h"

class sensorprocessing
{
  public:

    sensorprocessing();
    void reading(sensor all[], int size);     // function that reads the current reading off all sensors that are passed as argument
    void sensoring(sensor all[], int size);   // function determines the last ACTIVE (sensor reading more than refernce value) duration of sensors

  private:
    
    
};

#endif

