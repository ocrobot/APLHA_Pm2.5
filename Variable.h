#ifndef VARIABLE_H_
#define VARIABLE_H_

/*
*ocrobot-����ǿ
2017��1��6��
�������Ͳ��
*/
#if defined(ARDUINO) && ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/****************************/
 typedef union
  {
	  uint8_t  Hex[4];
	  float   Val;
  }Hex2float;
/****************************/
/****************************/
 typedef union
  {
	  uint8_t  Hex[4];
	  int   Val;
  }Hex2int;
/****************************/
/****************************/
 typedef union
  {
	  uint8_t  Hex[4];
	  uint16_t   Val;
  }Hex2Uint16;
/****************************/
/****************************/
 typedef union
  {
	  uint8_t  Hex[4];
	  long   Val;
  }Hex2long;
/****************************/
/****************************/
 typedef union
  {
	  uint8_t  Hex[4];
	  uint32_t   Val;
  }Hex2Uint32;
/****************************/



/*float*/
static void ByteToFloat(float &Num,uint8_t *Byte);
static void FloatToByte(float Num,uint8_t *Byte);

/*int*/
static void ByteToInt(int &Num,uint8_t *Byte);
static void IntToByte(int Num,uint8_t *Byte);
/*Uint*/
static void ByteToUint(uint16_t &Num,uint8_t *Byte);
static void UintToByte(uint16_t Num,uint8_t *Byte);
/*long*/
static void ByteToLong(long &Num,uint8_t *Byte);
static void LongToByte(long Num,uint8_t *Byte);
/*ULong*/
static void ByteToUlong(uint32_t &Num,uint8_t *Byte);
static void UlongToByte(uint32_t Num,uint8_t *Byte);





/***************************************************/
/*�ϲ�FLOAT*/
static void ByteToFloat(float &Num,uint8_t *Byte)
{
	Hex2float Conversion;
	for(byte a =0;a<4;a++)
	{
		Conversion.Hex[a] = *(Byte + a);
	}
	Num = Conversion.Val;
	

}
/*���float*/
static void FloatToByte(float Num,uint8_t *Byte)
{
	Hex2float Conversion;
	Conversion.Val = Num; 
	for(byte a =0;a<4;a++)
	{
		*(Byte + a) = Conversion.Hex[a];
	}
	
}
/***************************************************/
/*�ϲ�int*/
static void ByteToInt(int &Num,uint8_t *Byte)
{
	Hex2int Conversion;
	for(byte a =0;a<2;a++)
	{
		Conversion.Hex[a] = *(Byte + a);
	}
	Num = Conversion.Val;
}

/*���int*/

static void IntToByte(int Num,uint8_t *Byte)
{
	Hex2int Conversion;
	Conversion.Val = Num; 
	for(byte a =0;a<2;a++)
	{
		*(Byte + a) = Conversion.Hex[a];
	}
	
}
/***************************************************/
/*�ϲ�Uint*/
static void ByteToUint(uint16_t &Num,uint8_t *Byte)
{
	Hex2Uint16 Conversion;
	for(byte a =0;a<2;a++)
	{
		Conversion.Hex[a] = *(Byte + a);
	}
	Num = Conversion.Val;
}

/*���Uint*/

static void UintToByte(uint16_t Num,uint8_t *Byte)
{
	Hex2Uint16 Conversion;
	Conversion.Val = Num; 
	for(byte a =0;a<2;a++)
	{
		*(Byte + a) = Conversion.Hex[a];
	}
	
}
/***************************************************/

/*�ϲ�long*/
static void ByteToLong(long &Num,uint8_t *Byte)
{
	Hex2long Conversion;
	for(byte a =0;a<4;a++)
	{
		Conversion.Hex[a] = *(Byte + a);
	}
	Num = Conversion.Val;
}

/*���long*/

static void LongToByte(long Num,uint8_t *Byte)
{
	Hex2long Conversion;
	Conversion.Val = Num; 
	for(byte a =0;a<4;a++)
	{
		*(Byte + a) = Conversion.Hex[a];
	}
	
}

/***************************************************/
/*�ϲ�Ulong*/
static void ByteToUlong(uint32_t &Num,uint8_t *Byte)
{
	Hex2Uint32 Conversion;
	for(byte a =0;a<4;a++)
	{
		Conversion.Hex[a] = *(Byte + a);
	}
	Num = Conversion.Val;
}

/*���Ulong*/

static void UlongToByte(uint32_t Num,uint8_t *Byte)
{
	Hex2Uint32 Conversion;
	Conversion.Val = Num; 
	for(byte a =0;a<4;a++)
	{
		*(Byte + a) = Conversion.Hex[a];
	}
	
}
#endif