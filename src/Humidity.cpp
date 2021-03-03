#include "Humidity.h"

//From analog to humidity
float Humidity::parseHumidity(int analog)
{
	float humidity;
	humidity = (100 - ((analog / 1023.00) * 100));
	return humidity;
}

//Check is water or not. There is return true water, no water return false
bool Humidity::hasWarter(int sensor)
{
	int analog_sensor1 = analogRead(sensor);
	delay(1000);
	int analog_sensor2 = analogRead(sensor);

	while (analog_sensor1 != analog_sensor2)
	{
		analog_sensor1 = analogRead(sensor);
		delay(1000);
		analog_sensor2 = analogRead(sensor);
	}

	float humidity = 0.0;

	humidity = parseHumidity(analog_sensor1);

	if (humidity >= 50.0)
	{
		return true;
	}
	return false;
}

// return value Humidity
int Humidity::readHumidity(int sensor)
{
	int value = analogRead(sensor);
	int percent = map(value, 0, 1023, 0, 100);
	return 100 - percent;
}

//Check if current humidity is suitable for plants
bool Humidity::Suitable_humidity(float humidity)
{

	if (humidity >= 60.0)
	{
		return true;
	}
	else
	{
		return false;
	}
}