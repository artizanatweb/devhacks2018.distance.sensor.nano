#ifndef BOARD_H_
#define BOARD_H_

#include <Arduino.h>
#include <ArduinoJson.h>
#include "Tof.h"

class Board {
public:
  Board();
  Board(int unitId, Tof *distance);
  void send();
private:
  int unitId;
  long lastEvent;
  int interval = 150;
  Tof* distance;
};

#endif
