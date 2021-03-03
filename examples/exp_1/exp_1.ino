/*
 Name:    Humidity.ino
 Created: 3/3/2021 8:29:48 PM
 Author:  Asus
*/

#include <Humidity.h> //https://github.com/nguyenphuc22/Humidity-Arduino

const int water_sensor_1 = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  Humidity humidity;
  pinMode(water_sensor_1, INPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {

  if (humidity.hasWarter(water_sensor_1))
  {
    Serial.println("Has Warter");
  }
  else {
    Serial.println("Has't Warter");
  }
}
