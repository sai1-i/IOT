

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  
}

void loop() 
{
  int k=analogRead(A3);
  int  brightness=(k/1023.0)*255;
  analogWrite(3,brightness);
  delay(20);
}
