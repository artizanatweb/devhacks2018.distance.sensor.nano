#include <Arduino.h>
#include <ArduinoJson.h>
#include "Board.h"
#include "Tof.h"

Board::Board() {}

Board::Board(int unitId, Tof *distance) {
  this->unitId = unitId;
  this->distance = distance;
}

void Board::send() {
  StaticJsonBuffer<255> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();

  root["unit_id"] = this->unitId;
  root["distance"] = this->distance->read();

  root.printTo(Serial);
  // root.prettyPrintTo(Serial);
  Serial.println();
}
