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

  s1.println("\nEnter + for addition\nEnter - for subraction\n Enter x for multiplication\nEnter / for division\n ");
}


void loop() 
{
  int a=0,b=0,sum=0,sub=0,mult=0,divi=0;  
   if(s1.available())
  {
    String operator1=s1.readString();
    Serial.println(operator1);
    if(operator1=="+")
    {    
                s1.println("Enter two numbers");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                sum=a+b-48-48;
                lcd.print(sum);
    }
    else if(operator1=="-")
    {
                s1.println("Enter two numbers");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                sub=a-b;
                lcd.print(sub);
    }
    else if(operator1=="x")
    {    
                s1.println("Enter two numbers");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                a=a-48;
                b=b-48;
                mult=a*b;
                lcd.print(mult);
    }
    else if(operator1=="/")
    {    
                s1.println("Enter two numbers");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                a=a-48;
                b=b-48;
                mult=a/b;
                lcd.print(mult);
    }
  } 
} 


  


