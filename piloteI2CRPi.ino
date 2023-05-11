//piloteI2CRPi:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2CRPi.h"
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
SoftwareWire I2CRPi(piloteI2CRPi_SDA, piloteI2CRPi_SCL);

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:

void piloteI2CRPi_initialise(void)
{
  I2CRPi.begin();
}

void piloteI2CRPi_read(*unsigned char[NBBYTEARECEVOIR] ucData)
{
  I2CRPi.requestFrom();
  for (int i = 0; i < NBBYTEARECEVOIR; i++)
  {
    if(I2CRPi.available())
    {
      ucData[i] = I2CRPi.read(); // receive a byte as character
    }
  }
}


