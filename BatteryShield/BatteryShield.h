#ifndef BATTERYSHIELD_H
#define BATTERYSHIELD_H

#include <Arduino.h>

class BatteryShield {
  public:
    // construtor
    BatteryShield();
    // begin function
    void begin();
    // obter voltagem da bateria
    float getVoltage();
    // verifique se a bateria está carregando
    bool isCharging();
    // verifica se a bateria está carregada.
    bool isFull();
  private:
    // número do pino analógico para medição de tensão da bateria
    int _voltagePin;
    // tensão limite para bateria cheia
    float _fullVoltage;
    // tensão limite para carregar a bateria
    float _chargeVoltage;
};
#endif
