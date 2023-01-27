# BatteryShield
Uma biblioteca para controlar e monitorar o estado de uma bateria conectada a um escudo de bateria WeMos D1 mini ou WeMos D1 mini Pro.

# Instalação
Para instalar essa biblioteca, você pode baixar o arquivo .zip ou clonar o repositório e adicioná-lo à sua pasta de bibliotecas do Arduino.

# Uso
Para usar essa biblioteca em seu projeto, inclua o arquivo "BatteryShield.h" e crie uma instância da classe:

  #include "BatteryShield.h"

  BatteryShield battery;

Em seguida, chame a função begin() na configuração:

  void setup() {
    battery.begin();
  }

E finalmente, você pode usar as funções da biblioteca para ler a tensão da bateria, verificar se a bateria está carregando e verificar se a bateria está cheia:

  void loop() {
    float voltage = battery.getVoltage();
    bool charging = battery.isCharging();
    bool full = battery.isFull();
    // use the battery status in your project
  }

# Configuração
As configurações padrão para o pino de tensão da bateria e os limites de tensão para carregamento e estado de bateria cheia são definidos no construtor da classe. Você pode modificá-los de acordo com as especificações do seu escudo de bateria.

# Licença
Este código é de domínio público

# Créditos
Desenvolvido por Richard M. Alba
