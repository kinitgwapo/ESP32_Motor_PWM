#include "motor.h"

void setup() {
  Serial.begin(115200);
  PIN_MotorConfig();
  //PIN_ButtonConfig();
  PIN_ADCOneShotConfig();
  PIN_PWMConfig();
}

void loop() {
  //bool state = digitalRead(BUTTON_PIN);
  uint16_t analogValue = analogRead(POTENTIOMETER_PIN);
  INPUT_Process(/*state*/ analogValue);
  OUTPUT_Update();
  delay(20);
}
