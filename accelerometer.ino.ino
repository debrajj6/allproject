#include<Wire.h>
#include "I2Cdev.h"
#include "MPU6050.h"
const int MPU_addr=0x68;
int16_t AcX,AcY,AcZ;

void setup()
{
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  Serial.begin(9600);
}

void loop()
{
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr,14,true);
  AcX=Wire.read()<<8|Wire.read();
  AcY=Wire.read()<<8|Wire.read();
  AcZ=Wire.read()<<8|Wire.read();
  Serial.print("AcX = "); Serial.print(AcX/1000); Serial.print("\t");
  Serial.print("AcY = "); Serial.print(AcY/1000); Serial.print("\t");
  Serial.print("AcZ = "); Serial.print(AcZ/1000); Serial.println("\t");
  delay(100);
}
