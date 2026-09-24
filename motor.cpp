#include "motor.h"

static bool button_State;
static uint16_t duty_State;

void PIN_MotorConfig(void) {
  //pinMode(MOTORIN1_PIN, OUTPUT);
  pinMode(MOTORIN2_PIN, OUTPUT);

  //digitalWrite(MOTORIN1_PIN, LOW);
  digitalWrite(MOTORIN2_PIN, LOW);
}

void PIN_ButtonConfig(void) {
  //pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void PIN_ADCOneShotConfig(void) {
  analogReadResolution(12);
  analogSetPinAttenuation(POTENTIOMETER_PIN, ADC_11db);
}

void PIN_PWMConfig(void) {
  ledcAttach(MOTORIN1_PIN, 1000, 8);
}

void INPUT_Process(/*bool state*/ uint16_t analogValue) {
  //button_State = !state;
  duty_State = constrain(map(analogValue, 0, 4095, 0, 255), 0, 255);
}

void OUTPUT_Update(void) {
  //digitalWrite(MOTORIN1_PIN, button_State);
  ledcWrite(MOTORIN1_PIN, duty_State);
  Serial.println("Duty Value: " + String(duty_State));
}