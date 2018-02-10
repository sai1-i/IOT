int pir=9;
int state=LOW;
int led=8;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  
}
void loop()
{
  int value=digitalRead(9);
  if(value==HIGH)
  {
    digitalWrite(led, HIGH);
    delay(100);
    if(state==LOW)
    {
     Serial.println("motion detected");
     state=HIGH;
     }
  }
  else
  {
   digitalWrite(led, LOW);
   delay(100);
   if(state==HIGH)
   {
    Serial.println("motion not detected");
    state=LOW;
    }
    
  }
}

