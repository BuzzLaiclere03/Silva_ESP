//piloteI2CDGPT:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2CDGPT.h"
#include <Wire.h>

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
//pas de fonctions privees

//Definitions de variables privees:
TwoWire I2CDGPT = TwoWire(0);

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:

void piloteI2CDGPT_initialise(void)
{
  I2CDGPT.begin(PILOTEI2CDGPT_SDA, PILOTEI2CDGPT_SCL, 100000);
}

void piloteI2CDGPT_beginW(unsigned char ucAdr)
{
  I2CDGPT.beginTransmission(ucAdr);
}

void piloteI2CDGPT_beginR(unsigned char ucAdr, unsigned char ucNbBytes)
{
  I2CDGPT.requestFrom(ucAdr, ucNbBytes);
}

void piloteI2CDGPT_write(unsigned char ucData)
{
  I2CDGPT.write(ucData);
}

unsigned char piloteI2CDGPT_read()
{
  return I2CDGPT.read();
}

void piloteI2CDGPT_end(void)
{
  I2CDGPT.endTransmission();
}


