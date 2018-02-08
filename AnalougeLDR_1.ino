int val;

void setup() 
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  digitalWrite(3,LOW);
  int val=analogRead(A3);
 // Serial.println(val);
  double volt;
  volt=(val/1023.0)*5;
  while(volt<1.25)
  {
    int val=analogRead(A3);
    volt=(val/1023.0)*5;
    Serial.println(volt);
    digitalWrite(3,HIGH);
    delay(100);
  }
}
