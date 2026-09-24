#ifndef MOTOR_H
#define MOTOR_H

#define BUTTON_PIN 23
#define MOTORIN1_PIN 21
#define MOTORIN2_PIN 22

#include <Arduino.h>

void PIN_MotorConfig(void); // Configure pin 21 & 22 for motor input
void PIN_ButtonConfig(void); // Configure Pin 23

void INPUT_Process(bool state); // Hardware-Independent Logic
void OUTPUT_Update(void); // Updates pin 21 & 22 based on the INPUT_Process function

#endif