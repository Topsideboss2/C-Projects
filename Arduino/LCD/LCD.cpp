// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{
  lcd.begin(16,2); /*Initialize the interface to LCD and dimensions i.e columns and rows*/
}

void loop()
{
  lcd.setCursor(0,0); /*Position the LCD cursor*/
  lcd.blink();
  lcd.leftToRight();
  lcd.print("Today is Tuesday....."); /*The character written on the display*/
  lcd.setCursor(5,1); /*Position the LCD cursor*/
  lcd.print("Send titties :)");  /*The character written on the display*/
  lcd.blink();
  lcd.scrollDisplayLeft();
  delay(33);
}
