#include "OCROBOT_MICS5524.h"
PM2_5 PM(0x0A);
void setup() 
{
     PM.begin();
     Serial.begin(9600);
}

void loop() 
{
      Serial.print("PM1:")
      Serial.println(PM.GetPM1());   
	  Serial.print("PM2.5:")
      Serial.println(PM.GetPM2_5()); 
	  Serial.print("PM10:")
      Serial.println(PM.GetPM10());

	  Serial.print("particulates0.3um/0.1L:")
      Serial.println(PM.particulates0_3());
	  Serial.print("particulates0.5um/0.1L:")
      Serial.println(PM.particulates0_5());
	  Serial.print("particulates1um/0.1L:")
      Serial.println(PM.particulates1());
	  Serial.print("particulates2.5um/0.1L:")
      Serial.println(PM.particulates2_5());
	  Serial.print("particulates5um/0.1L:")
      Serial.println(PM.particulates5());
	  Serial.print("particulates10um/0.1L:")
      Serial.println(PM.particulates10());
      delay(1000);
}