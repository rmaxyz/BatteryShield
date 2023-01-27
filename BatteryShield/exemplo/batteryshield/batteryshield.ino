
/*
   BatteryShield com Wemos d1 mini pro
   Monitorar o estado de uma bateria 
   Este código de exemplo é de domínio público
    Autor: Richard M. Alba
*/
#include <BatteryShield.h>

BatteryShield battery;

void setup() {
  Serial.begin(9600);
  battery.begin();
}

void loop() {
  // get the current battery voltage
  float voltage = battery.getVoltage();
  Serial.print("Battery voltage: ");
  Serial.println(voltage);

  // check if the battery is charging
  if (battery.isCharging()) {
    Serial.println("Battery is charging");
  } else {
    Serial.println("Battery is not charging");
  }

  // check if the battery is full
  if (battery.isFull()) {
    Serial.println("Battery is full");
  } else {
    Serial.println("Battery is not full");
  }

  delay(1000);
}
