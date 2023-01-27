#include "BatteryShield.h"

BatteryShield::BatteryShield() {
  _voltagePin = A0;
  _fullVoltage = 4.2;
  _chargeVoltage = 4.1;
}

void BatteryShield::begin() {
  //inicializar o pino de tensão como uma entrada
  pinMode(_voltagePin, INPUT);
}

float BatteryShield::getVoltage() {
  //lê a voltagem do pino de tensão
  int voltage = analogRead(_voltagePin);
  //converter a tensão para um valor de tensão real
  return (voltage * 3.3) / 1024;
}

bool BatteryShield::isCharging() {
  return getVoltage() > _chargeVoltage;
}

bool BatteryShield::isFull() {
return getVoltage() >= _fullVoltage;
}
