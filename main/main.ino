#include "pinconfig.h"
#include "parameters.h"

#include "A3921.h"

A3921 motor[]{
    A3921(RESET_MOVE, SR, PHASE, PWMH_CH1, PWML_CH1),
    A3921(RESET_MOVE, SR, PHASE, PWMH_CH2, PWML_CH2),
    A3921(RESET_MOVE, SR, PHASE, PWMH_CH3, PWML_CH3),
    A3921(RESET_MOVE, SR, PHASE, PWMH_CH4, PWML_CH4)};

static float speed = 0;

void setup()
{
  pinMode(B2B_ON, OUTPUT);
  digitalWrite(B2B_ON, 1);
}

void loop()
{
  for (int i = 0; i < 4; i++)
  {
    motor[i].setspeed(50, FREEBREAK);
  }
  delay(5000);
  for (int i = 0; i < 4; i++)
  {
    motor[i].setspeed(0, FREEBREAK);
  }
  delay(2000);
  for (int i = 0; i < 4; i++)
  {
    motor[i].setspeed(-50, FREEBREAK);
  }
  delay(5000);
}