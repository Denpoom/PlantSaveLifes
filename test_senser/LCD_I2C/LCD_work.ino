#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{

 
  // Print a message to the LCD.
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(" Happy New Year! 2018.Thanks for Watching ");
 
   
}


void loop()
{
   lcd.setCursor(16,1);
   lcd.autoscroll();    // Setea el display para scroll automatico
   lcd.print(" ");      // imprime un character en blanco
   delay(700);    
}
