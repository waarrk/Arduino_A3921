#ifndef PARAMETRS_H_
#define PARAMETRS_H_

// Handle mode Def
#define NO_HANDLE 1
#define CH1_HANDLE 2
#define CH2_HANDLE 3
#define BOTH_HANDLE 4

// Err buz use
#define LED_ON 1
#define ERROR_UNDER_MAIN_VOLTAGE 1

// HX711 Coefficient
#define READINT_RATIO 8000
#define SPEED_ERROR_COUNT 50
#define SPEED_ZERO_COUNT 50

#define BLANK_READ_TIME 100

// Voltage Limmits
#define UNDER_MAIN_VOLTAGE 12
#define UNDER_MAIN_VOLTAGE_COUNT 50
#define VOLTAGE_CAL_TOLERANCE 0.04

// PIDControl Gains
#define OFFSET 10
#define KP 0.1
#define KI 0
#define KD 0

#endif