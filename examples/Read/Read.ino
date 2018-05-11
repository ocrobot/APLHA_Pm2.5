#include "PM2_5.h"
PM2_5 pm(0x0A);
void setup()
{
  pm.begin();
  Serial.begin(9600);
}

void loop()
{
  Serial.print("PM1:");
  Serial.println(pm.GetPM1());
  Serial.print("PM2.5:");
  Serial.println(pm.GetPM2_5());
  Serial.print("PM10:");
  Serial.println(pm.GetPM10());

  Serial.print("particulates0.3um/0.1L:");
  Serial.println(pm.particulates0_3());
  Serial.print("particulates0.5um/0.1L:");
  Serial.println(pm.particulates0_5());
  Serial.print("particulates1um/0.1L:");
  Serial.println(pm.particulates1());
  Serial.print("particulates2.5um/0.1L:");
  Serial.println(pm.particulates2_5());
  Serial.print("particulates5um/0.1L:");
  Serial.println(pm.particulates5());
  Serial.print("particulates10um/0.1L:");
  Serial.println(pm.particulates10());
  delay(1000);
}