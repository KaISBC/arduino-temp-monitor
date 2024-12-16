#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configurazione LCD (indirizzo I2C e dimensioni)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pin del sensore di temperatura
const int sensorPin = A0;

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Leggi il valore dal sensore
  int sensorValue = analogRead(sensorPin);
  
  // Converti il valore in temperatura (in Celsius, per LM35)
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100;

  // Mostra la temperatura sul display
  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.print(" C");

  delay(1000);
}
