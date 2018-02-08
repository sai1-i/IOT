#include<LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);

void setup() 
{
  lcd.begin(16,2);
  lcd.clear();

}

void loop() 
{
  for(int i=1;i<=9;i++)
  {
    lcd.print(i);
    delay(1500);
    if(i==9)
    {
      lcd.clear();
      lcd.print("All clear lets party");
      break;
    } 
  }
}
