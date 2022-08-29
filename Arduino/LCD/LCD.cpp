// C++ code
//
#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("ANENO NYAKO MORO");
  delay(200);
  lcd.setCursor(0,1);
  lcd.print("KAE NYINGE NG'A?");
  delay(500);
  lcd.clear();
  lcd.setCursor(8,0);
  lcd.print("ATOTI!!");
  delay(800);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("TO BENDO NYAL");
  delay(500);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("OMIELO NGOMA");
  lcd.setCursor(0,1);
  lcd.print("NYINGE NG'A");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,1);
  lcd.print("ATOTI!!");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("TO BEO NYAL");
  delay(800);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("OMIEL KODA");
  lcd.setCursor(0,1);
  lcd.print("NYING'ENGA");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("ATOTI!!");
  delay(800);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ATOTI SUDIKAI");
  delay(500);
  lcd.setCursor(0,1);  
  lcd.print("MOND IMIEL KODA");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("YAWA ATOTI");
  delay(500);
  lcd.setCursor(5,1);
  lcd.print("SUDIKAI");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("MOND AMIEL KODI");
  delay(1000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("ATOTI");
  delay(500);
  lcd.setCursor(0,0);
  lcd.print("LOVELY DEADLY");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("NYAKONI");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ATOTI KISS ME");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("TEASE ME");
  delay(500);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("NYAKONI");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ATOTI MIX ME");
  lcd.setCursor(0,1);
  lcd.print("FIX ME NYAKONI");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ATOTI TAKE ME");
  delay(200);
  lcd.setCursor(0,1);
  lcd.print("FEK ME NYAKONI");
  delay(2500);
  lcd.clear();
}
