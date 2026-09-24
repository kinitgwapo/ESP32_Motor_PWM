#include "motor.h"

void setup() {
  Serial.begin(115200);
  PIN_MotorConfig();
  PIN_ButtonConfig();
}

void loop() {
  bool state = digitalRead(BUTTON_PIN);
  INPUT_Process(state);
  OUTPUT_Update();
  delay(20);
}
