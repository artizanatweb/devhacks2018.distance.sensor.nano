#ifndef TOF_H_
#define TOF_H_

#include <Arduino.h>
#include <SparkFun_RFD77402_Arduino_Library.h>

class Tof {
public:
  Tof();
  Tof(RFD77402* sensor);
  void setup();
  int read();
private:
  RFD77402* sensor;
  int distance;
};

#endif
