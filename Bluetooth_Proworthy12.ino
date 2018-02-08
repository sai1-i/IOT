#include<SoftwareSerial.h>
SoftwareSerial s1(9,11);

void setup() 
{
  Serial.begin(9600);
  s1.begin(38400);
  for(int i=2;i<=6;i++)
  pinMode(i,OUTPUT);
 }



void loop() 
{
  int a=0,b=0,sum=0,sub=0;  
   if(s1.available())
  {
    String operator1=s1.readString();
    Serial.println(operator1);
    if(operator1=="+")
    {    
                s1.println("Enter two numbers whose addition is less than 5");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                sum=a+b-48-48;
                s1.println(sum);
                switchon(sum);
    }
    else if(operator1=="-")
    {
                s1.println("Enter two numbers whose subraction is less than 5 and more than 0");
                while(!s1.available())
                {           
                }
                a=s1.read();
                while(!s1.available())
                {
                }
                b=s1.read();
                sub=a-b;
                switchon(sub);
    }
  } 
} 

void switchon(int a)
{
  for(int i=2;i<a+2;i++)
  {
    digitalWrite(i,HIGH);
  }
}

  


