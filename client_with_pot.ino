#include<ESP8266WiFi.h>
#include<ESP8266HTTPClient.h>


const char* ssid="Kossine Lobby";
const char* pass="ganeshkaralkar";


void setup() 
{
  Serial.begin(115200);
  Serial.print("Connecting to ");
  Serial.print("ssid");
  WiFi.begin(ssid,pass);

  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.print(".");
    delay(100);
  }
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(ssid);
  
  Serial.print("Server has began on ip address ");
  Serial.println(WiFi.localIP());
  pinMode(A0,INPUT);
}
void loop() 
{
 if(WiFi.status()==WL_CONNECTED)
  {
    String a="http://192.168.1.101:8080/add/RamManhoars_pot/";
    int pot=analogRead(A0);
    Serial.println(pot);
   HTTPClient http;
   a=a+pot;
   http.begin(a);
   int code=http.GET();
 
   http.end();
  }
  delay(5000);



}
