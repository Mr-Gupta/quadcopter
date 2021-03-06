#include <wire.h>
#include "IMU.h"

double gyroOffsets[3];
float rawGyro[3];
float rawAccel[3];
float gyroRPY[3];

void setup()
{
  Wire.begin();
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  setupGyro();
  setupAccel();
  
  gyroOffsets = getGyroOffSets();
  setupPinChangeInterrupts();
}

void loop()
{
  updateRawGyro(&rawGyro);
  updateRawAccel(&rawAccel);
}

void setupPinChangeInterrupts()
{
  //TODO
}
