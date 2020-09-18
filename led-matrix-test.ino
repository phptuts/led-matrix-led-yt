 #include "LedControl.h"

// 12 is for the data pin
// 11 is for the CLK pin
// 10 is for the CS pin
LedControl matrix = LedControl(12, 11, 10, 1);

void setup() {
  // put your setup code here, to run once:
  matrix.shutdown(0, false); // wake up the led matrix
  matrix.setIntensity(0, 8); // sets the brigtness of the leds
  matrix.clearDisplay(0); // clear everything
  Serial.begin(115200);
  Serial.setTimeout(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i += 1) {
    matrix.setLed(0, i, 0, true);
    Serial.println("matrix.setLed(0, " + String(i) + ", 0, true);");
    delay(2000);
    matrix.setLed(0, i, 0, false);
    delay(1000);
  }
}
