#include "motor.h"

static bool button_State;

void PIN_MotorConfig(void) {
  pinMode(MOTORIN1_PIN, OUTPUT);
  pinMode(MOTORIN2_PIN, OUTPUT);

  digitalWrite(MOTORIN1_PIN, LOW);
  digitalWrite(MOTORIN2_PIN, LOW);
}

void PIN_ButtonConfig(void) {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void INPUT_Process(bool state) {
  button_State = !state;
}

void OUTPUT_Update(void) {
  digitalWrite(MOTORIN1_PIN, button_State);
  Serial.println("IN1: " + String(digitalRead(MOTORIN1_PIN)) + "\tButton: " + String(button_State));
}