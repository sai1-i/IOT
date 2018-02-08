#include<SoftwareSerial.h>
SoftwareSerial s1(9,11);

void setup() 
{
  Serial.begin(9600);
  s1.begin(38400);
  pinMode(3,OUTPUT);
  
}



void loop() 
{
  if(s1.available())
  {
    String data=s1.readString();
    Serial.println(data);
    if(data=="on")
    digitalWrite(3,HIGH);
    else
    {
      digitalWrite(3,LOW);
    }
   // s1.flush();
  }
  
}
