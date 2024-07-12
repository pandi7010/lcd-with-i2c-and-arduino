#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);
  lcd.backlight();
  
  // Display the message
  lcd.setCursor(0, 0);
  lcd.print("Pandiselvam");
}

void loop() {
  // The loop function is empty because we only need to display the message once in the setup function
}
