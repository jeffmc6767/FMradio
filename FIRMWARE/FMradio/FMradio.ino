#include <Wire.h>
#include <RDA5807.h>

#define BUTTON_PIN 8

RDA5807 rx;

const int presets[] = {8810, 9550, 10110, 10790};
const int totalPresets = 4;
int currentPresetIndex = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Wire.begin();
  rx.setup();
  rx.setVolume(6);
  
  rx.setFrequency(presets[currentPresetIndex]);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50); 
    if (digitalRead(BUTTON_PIN) == LOW) {
      currentPresetIndex = (currentPresetIndex + 1) % totalPresets;
      rx.setFrequency(presets[currentPresetIndex]);
      
      while (digitalRead(BUTTON_PIN) == LOW); 
    }
  }
}
