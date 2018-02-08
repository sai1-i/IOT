#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
SoftwareSerial s1(9,10);

void setup() 
{
  lcd.begin(16,2);
  lcd.clear();
  Serial.begin(9600);
  s1.begin(9600); 
}

void loop() 
{
   if(s1.available())
  {
    String operator1=s1.readString();
    lcd.print(operator1);
    while(!s1.available())
    {  
    }
    lcd.clear();
  }
}
