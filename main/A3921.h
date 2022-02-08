#ifndef A3921_H_
#define A3921_H_
#include <Arduino.h>

#define CW 0
#define ACW 1
#define FREEBREAK 0
#define SHORTBREAK 1

class A3921
{
public:
    A3921(uint8_t tRESET, uint8_t tSR, uint8_t tPHASE, uint8_t tPWMH, uint8_t tPWML);
    void activate();
    void diactivate();

    void shortbreak();
    void freebreak();

    void setspeed(int speed, bool drivemode = FREEBREAK);

private:
    void order(uint8_t speed, bool DIR);

    uint8_t _RESET;
    uint8_t _SR;
    uint8_t _PHASE;
    uint8_t _PWMH;
    uint8_t _PWML;
    uint8_t _speed;
    bool _DIR;
};

#endif