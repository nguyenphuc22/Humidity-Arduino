
#include <Arduino.h>

class Humidity
{
	//From analog to humidity
	float parseHumidity(int analog);

	//Check is water or not. There is return true water, no water return false
	bool hasWarter(int sensor);

	// return value Humidity
	int readHumidity(int sensor);

	//Check if current humidity is suitable for plants
	bool Suitable_humidity(float humidity);

};