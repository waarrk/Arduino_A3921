#ifndef PINCONFIG_H_
#define PINCONFIG_H_

#define MRPWM 5
#define MLPWM 6
#define MEN 7

/* pinconfig.h ver.1 AVRBoard 2022/01/26 */

// SW Power Control Pins
#define SW_I 43
#define SW_O 42
#define B2B_ON 14

// User Switches
#define BREAK_SW 44
#define HANDLE_SW1 45
#define HANDLE_SW2 46

// AD Converters
#define TEMP_ADC A15
#define CURRENT_CH1_ADC A8
#define CURRENT_CH2_ADC A9
#define CURRENT_CH3_ADC A10
#define CURRENT_CH4_ADC A11
#define POWER_18V_ADC A12

// A3921 Order
#define RESET_MOVE 15
#define PHASE 40
#define SR 41
#define PWML_CH1 10
#define PWML_CH2 11
#define PWML_CH3 12
#define PWML_CH4 13
#define PWMH_CH1 4
#define PWMH_CH2 5
#define PWMH_CH3 2
#define PWMH_CH4 3
#define FF_CH1_1 34
#define FF_CH1_2 33
#define FF_CH2_1 35
#define FF_CH2_2 32
#define FF_CH3_1 36
#define FF_CH3_2 31
#define FF_CH4_1 37
#define FF_CH4_2 30

// HX711
#define HX_CH1_SCK 38
#define HX_CH1_DOUT 79
#define HX_CH2_SCK 78
#define HX_CH2_DOUT 77

// Encoder
#define ENCODER_A 72
#define ENCODER_B 71

// ACC Sensor
#define SCL 21
#define SDA 20
#define ACC_INT1 19
#define ACC_INT2 18

// SPI Line
#define SPI_SCK 52
#define SPI_MOSI 51
#define SPI_MISO 50

// Serial Line
#define SERIAL1_TXD 1
#define SERIAL1_RXD 0
#define SERIAL2_TXD 16
#define SERIAL2_RXD 17

// LED
#define SET_LED 27
#define MAIN_LED 26
#define ERR_LED 25

// Buzzer
#define BUZ 24

// SD Card Communication
#define SW_CW 23
#define SD_CS 22

#endif