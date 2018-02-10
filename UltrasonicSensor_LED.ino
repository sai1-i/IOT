 int trigpin=9;
  int echopin=10;
  float duration,distance;

void setup()
{ 
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 Serial.begin(9600);

 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
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

    if(distance>=20)
    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);

    
    if(distance>=10 || distance<=20)
    digitalWrite(3,HIGH);
     delay(1000);
    digitalWrite(3,LOW);

    if(distance<=10)
    digitalWrite(4,HIGH);
     delay(1000);
    digitalWrite(4,LOW);
  

}
