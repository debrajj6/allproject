#include<SoftwareSerial.h>
SoftwareSerial gsm(10,11);

void setup()
{
  delay(1000);
  Serial.begin(9600);
  gsm.begin(9600);
  gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("AT+CMGS=\"+918910739206\"\r"); 
  delay(1000);
  gsm.println("test gsm module");
  delay(100);
  gsm.println((char)26);
  delay(1000);
}
void loop()
{
  
}
