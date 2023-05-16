//piloteI2CRPi:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2CRPi.h"
#include <Wire.h>

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
//pas de fonctions privees

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:

void piloteI2CRPi_initialise(void)
{
  //Wire.begin();
}

void piloteI2CRPi_read(unsigned char *ucData)
{
  /*Wire.requestFrom(0x69, PILOTEI2CRPI_NBBYTEARECEVOIR, 1);
  for (int i = 0; i < PILOTEI2CRPI_NBBYTEARECEVOIR; i++)
  {
    if(Wire.available())
    {
      ucData[i] = (unsigned char) (Wire.read()); // receive a byte as character
    }
  }*/
}


