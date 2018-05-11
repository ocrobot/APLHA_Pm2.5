#include "OCROBOT_MICS5524.h"


PM2_5::PM2_5(byte Addr)
{
	_Addr = Addr;
}

void PM2_5::begin()
{
	 Wire.begin();
}
/*��PM1.0*/
uint16_t PM2_5::GetPM1()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(2); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 /*��PM2.5*/
uint16_t PM2_5::GetPM2_5()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(3); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
  /*��PM10*/
uint16_t PM2_5::GetPM10()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(4); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 /*����PM1.0*/
 uint16_t PM2_5::GetAerospherePM1()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(5); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
  /*����PM2.5*/
 uint16_t PM2_5::GetAerospherePM2_5()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(6); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
 
   /*����PM10*/
 uint16_t PM2_5::GetAerospherePM10()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(7); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
 
 /*������0.3um/0.1L*/
 uint16_t PM2_5::particulates0_3()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(8); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
  
 /*������0.5um/0.1L*/
 uint16_t PM2_5::particulates0_5()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(9); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
 
  
 /*������1um/0.1L*/
 uint16_t PM2_5::particulates1()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(10); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
 
  
 /*������2.5um/0.1L*/
 uint16_t PM2_5::particulates2_5()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(11); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
  
 /*������5um/0.1L*/
 uint16_t PM2_5::particulates5()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(12); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }
 
 
  
 /*������10um/0.1L*/
 uint16_t PM2_5::particulates10()
{
	Wire.beginTransmission(_Addr); 
	Wire.write(13); 
	Wire.endTransmission();
	
	byte Byte[2];
	Wire.requestFrom((int)_Addr, (int)2);
	while(Wire.available())      //read 2 byte
	{
		Byte[0] = Wire.read();
		Byte[1] = Wire.read();
	}
	uint16_t PMData;
	ByteToUint(PMData,Byte);
	return PMData;
 }