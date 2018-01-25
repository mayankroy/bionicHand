#include "Arduino.h"
#include "sensor.h"

sensor::sensor()
{
	time1 = 0.00;
	time2 = 0.00;

	duration = 0.00;

	lastreading = 0.00;
	currentstatus = false;
}

void sensor::attach_sensor(int spin)
{
	pin = spin;
}

float sensor::read_sensor()
{
	lastreading = analogRead(pin);
	return lastreading;
}

void sensor::set_reference(float ref)
{
	reference = ref;
}

bool sensor::verify_read()
{
	if (lastreading>reference)
		return true;
	else
		return false;
}