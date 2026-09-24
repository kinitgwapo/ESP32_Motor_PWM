#ifndef MOTOR_H
#define MOTOR_H

#define BUTTON_PIN 23
#define MOTORIN1_PIN 21
#define MOTORIN2_PIN 22
#define POTENTIOMETER_PIN 4

#include <Arduino.h>

void PIN_MotorConfig(void); // Configure pin !(21)! & 22 for motor input

void PIN_ButtonConfig(void); // Configure Pin 23 for Button

void PIN_ADCOneShotConfig(void); // Configure Pin 4 for ADC Reading
void PIN_PWMConfig(void); // Configure Pin 21 for PWM Output

void INPUT_Process(/*bool state*/ uint16_t analogValue); // Hardware-Independent Logic
void OUTPUT_Update(void); // Updates pin 21 & 22 based on the INPUT_Process function

#endif