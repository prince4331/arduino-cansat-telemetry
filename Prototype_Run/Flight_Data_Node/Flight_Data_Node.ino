#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Define LCD address and dimensions
#define LCD_ADDRESS 0x27
#define LCD_COLUMNS 16
#define LCD_ROWS 2

// Initialize LCD object
LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);

void setup() {
  // Initialize LCD
  lcd.begin();
  lcd.backlight();

  // Display "Good Morning" on LCD
  lcd.setCursor(0, 0); // Set cursor to the first column of the first row
  lcd.print("Good Morning");
}

void loop() {
  // Nothing to do in the loop for displaying a static message
}
