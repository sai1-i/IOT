unsigned long time=0;

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() 
{
    lcd.begin(16,2);
    lcd.clear();
    lcd.print("Hello from aurdino");

}

void loop() 
{
  time=millis();
  lcd.setCursor(0,1);
  lcd.print(time/1000);

}
