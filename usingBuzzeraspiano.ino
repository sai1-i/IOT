void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=2;i<=9;i++)
  {
    pinMode(i,INPUT);
  }
  
 
}

void loop() 
{
    for(int i=2;i<=9;i++)
    {
    if(digitalRead(i)==1)
    {
      Serial.print(i-1);
         if(i==2)
         {
          tone(10,1046.5,100);
         }
         if(i==3)
         {
          tone(10,1174.7,100);
         }
         if(i==4)
         {
          tone(10,1318.5,100);
         }
         if(i==5)
         {
          tone(10,1396.9,100);
         }
         if(i==6)
         {
          tone(10,1568,100);
         }
         if(i==7)
         {
          tone(10,1760,100);
         }
         if(i==8)
         {
          tone(i,1975.5,100);
         }
         if(i==9)
         {
          tone(10,2093,100);
         } 
    }
    }
    
}
