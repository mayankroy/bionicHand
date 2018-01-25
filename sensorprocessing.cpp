#include "Arduino.h"
#include "sensorprocessing.h"


sensorprocessing::sensorprocessing()
{
}

// function that reads the current reading off all sensors that are passed as argument

void sensorprocessing::reading(sensor all[], int size)      // all is sensor type array containing instances of sensor class and size is the no. of instances stored in that array
{
  for(int i=0; i<size; i++)
  {
    all[i].read_sensor();
  }
}

// function determines the last ACTIVE (sensor reading more than refernce value) duration of sensors

void sensorprocessing::sensoring(sensor all[], int size)    // all is sensor type array containing instances of sensor class and size is the no. of instances stored in that array
{
  unsigned long t1;
  bool verify;
  t1 = millis();                                            // millis() is a predefined function in Arduino that tells the program current time stamp
  reading(all,size);                                        // call to reading() to get the current sensor value

  for (int i = 0; i < size; i++)                            // loop to determine the ACTIVE duration of all sensors that are passeed in all[] array
  {
    
    verify = all[i].verify_read();                          // returns the current ACTIVE status of the particular sensor (TRUE or FALSE)

    if(all[i].currentstatus == false && verify == true)     // checks for RISING EDGE by checking their last status and current verify value
    {
      all[i].time1 = t1;
      all[i].time2 = 0;
    }
    
    if(all[i].currentstatus == true && verify == false)     // checks for FALLING EDGE
    {
      all[i].time2 = t1;
    }
    
    if(all[i].currentstatus == false && verify == false)    // checks for sensor is currently in INACTIVE mode
    {

    }

    if(all[i].currentstatus == true && verify == true)      // checks for sensor is currently in ACTIVE mode
    {
      all[i].time2 = t1;
    }

    all[i].currentstatus=verify;                            // storing the verify value back into currentstatus variable
    

    if((all[i].time2 - all[i].time1)>0)                     // calcuating the duration
    all[i].duration =  all[i].time2 - all[i].time1;

  }
} 

