#include <Arduino.h>
#include <SparkFun_RFD77402_Arduino_Library.h>
#include "Tof.h"

Tof::Tof() {}

Tof::Tof(RFD77402* sensor) {
  this->sensor = sensor;
}

void Tof::setup() {
  this->sensor->begin();
}

int Tof::read() {
  this->sensor->takeMeasurement();

  this->distance = this->sensor->getDistance();

  return this->distance;
}
