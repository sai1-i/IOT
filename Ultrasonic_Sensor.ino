  int trigpin=9;
  int echopin=10;
  float duration,distance;

void setup()
{ 
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delay(1);
  digitalWrite(trigpin,HIGH);
  delay(1); 
  digitalWrite(trigpin,LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=(duration*0.034)/2;
  Serial.println("Distance");
  Serial.println(distance);
  delay(100);


}
