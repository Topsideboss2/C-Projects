// C++ code
//
#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
  lcd.begin(16,2);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  double A=analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print("Sensed value is ");
  lcd.setCursor(16,0);
  lcd.print(A);
  double B=map(A,0,1004,100,0);
  lcd.setCursor(0,1);
  lcd.print("Particle concentration is ");
  lcd.setCursor(26,1);
  lcd.print(B);
  lcd.setCursor(32,1);
  lcd.print("%");
  lcd.scrollDisplayLeft();
}
