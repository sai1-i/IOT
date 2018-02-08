void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(2,INPUT);
  
  
}



void loop() 
{
  for(int i=2;i<=4;i++)
  {
       if(digitalRead(i)==1)
      {
        Serial.print(i);
        Serial.println(" Button was pressed");
       }
  }
  

}
