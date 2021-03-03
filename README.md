# Humidity-Arduino

This is a library of soil moisture sensors. The letter set will help you read the humidity easily and steadily. Avoid interference from sensors. Libraries can also tell when there's water, when there's no water.

Function:

- bool hasWarter(int sensor) : //Check is water or not. There is return true water, no water return false
- float parseHumidity(int analog) : //From analog to humidity
- int readHumidity(int sensor) : // return int value Humidity
- bool Suitable_humidity(float humidity): //Check if current humidity is suitable for plants

Instructions to install the library:

1. Download Library: https://github.com/nguyenphuc22/Humidity-Arduino -> Download ZIP
2. Open Adruino IDE -> Sketch -> Include Library -> Add ZIP Library -> Humidity-Arduino-main