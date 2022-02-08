#include <arduino.h>
#include "A3921.h"

// Create Instance
A3921::A3921(uint8_t tRESET, uint8_t tSR, uint8_t tPHASE, uint8_t tPWMH, uint8_t tPWML)
{
    _RESET = tRESET;
    _SR = tSR;
    _PHASE = tPHASE;
    _PWMH = tPWMH;
    _PWML = tPWML;

    pinMode(_RESET, OUTPUT);
    pinMode(_SR, OUTPUT);
    pinMode(_PHASE, OUTPUT);
    pinMode(_PWMH, OUTPUT);
    pinMode(_PWML, OUTPUT);

    digitalWrite(_RESET, 1);
    digitalWrite(_SR, 1);
    digitalWrite(_PHASE, 0);
    digitalWrite(_PWMH, 0);
    digitalWrite(_PWML, 0);
}

// Control by RESET Pin
void A3921::activate()
{
    digitalWrite(_RESET, 0);
}

void A3921::diactivate()
{
    digitalWrite(_RESET, 1);
}

// Motor Order
void A3921::order(uint8_t speed, bool DIR)
{
    if (DIR == CW)
    {
        digitalWrite(_PWMH, 1);
        analogWrite(_PWML, speed);

        digitalWrite(_PHASE, 0);
    }
    else if (DIR == ACW)
    {
        digitalWrite(_PWMH, 1);
        analogWrite(_PWML, speed);

        digitalWrite(_PHASE, 1);
    }
}

void A3921::shortbreak()
{
    digitalWrite(_PWMH, 1);
    digitalWrite(_PWML, 1);
}

void A3921::freebreak()
{
    digitalWrite(_PWMH, 0);
    digitalWrite(_PWML, 0);
}

void A3921::setspeed(int speed, bool drivemode)
{
    activate();
    if (speed > 0)
    {
        order(abs(speed), CW);
    }
    else if (speed < 0)
    {
        order(abs(speed), ACW);
    }
    else if (speed == 0)
    {
        if (drivemode == SHORTBREAK)
            shortbreak();
        else
            freebreak();
    }
    else
        diactivate();
}