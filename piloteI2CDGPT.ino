//piloteI2CDGPT:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2CDGPT.h"
#include <SoftwareWire.h>

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
//pas de fonctions privees

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
SoftwareWire I2CDGPT(PILOTEI2CDGPT_SDA, PILOTEI2CDGPT_SCL);

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:

void piloteI2CDGPT_initialise(void)
{
  I2CDGPT.begin();
}

unsigned char piloteI2CDGPT_begin(unsigned char ucAdr)
{
  I2CDGPT.beginTransmission(ucAdr);
}

unsigned char piloteI2CDGPT_write(unsigned char ucData)
{
  I2CDGPT.write(byte(0x00));
}

unsigned char piloteI2CDGPT_end(void)
{
  I2CDGPT.endTransmission();
}


