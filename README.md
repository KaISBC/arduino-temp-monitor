# arduino-temp-monitor
Un progetto Arduino per monitorare la temperatura utilizzando un sensore (es. LM35 o DHT11) e visualizzarla su un display LCD.

# Arduino Temperature Monitor

Un progetto Arduino per monitorare la temperatura utilizzando un sensore (es. LM35 o DHT11) e visualizzarla su un display LCD.

## Funzionalità
- Misura la temperatura in tempo reale.
- Visualizza il valore sul display LCD.

## Materiali Necessari
- Arduino Uno (o equivalente)
- Sensore di temperatura (LM35 o DHT11)
- Display LCD (16x2 con interfaccia I2C)
- Resistenze e cavi jumper

## Schema di Collegamento
- **LM35**:
  - VCC → 5V di Arduino
  - OUT → Pin analogico A0
  - GND → GND di Arduino
- **Display LCD (I2C)**:
  - SDA → Pin A4
  - SCL → Pin A5
  - VCC → 5V di Arduino
  - GND → GND di Arduino

## Come eseguire?
1. Clona il repository:
   ```bash
   git clone https://github.com/KaISBC/arduino-temp-monitor.git
