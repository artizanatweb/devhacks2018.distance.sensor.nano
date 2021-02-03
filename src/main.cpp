#include <Arduino.h>
#include <SparkFun_RFD77402_Arduino_Library.h>
#include "Board.h"
#include "Tof.h"

#define UNIT_ID (1)

RFD77402 sensor; //Hook object to the library
Tof distanceSensor = Tof(&sensor);
Board board = Board(UNIT_ID, &distanceSensor);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  distanceSensor.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  board.send();
}
