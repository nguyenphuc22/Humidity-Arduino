/*
 Name:    Humidity.ino
 Created: 3/3/2021 8:29:48 PM
 Author:  Asus
*/

#include <Humidity.h> //https://github.com/nguyenphuc22/Humidity-Arduino

const int water_sensor_1 = A0;
Humidity humidity;
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);

  pinMode(water_sensor_1, INPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {

  int analog = analogRead(water_sensor_1);
  if (humidity.Suitable_humidity(humidity.parseHumidity(analog)))
  {
    Serial.println("Suitable humidity");
  }
  else {
    Serial.println("Not suitable humidity");
  }
}
