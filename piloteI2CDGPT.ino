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
TwoWire I2CDGPT = TwoWire(1);

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:

void piloteI2CDGPT_initialise(void) {
  I2CDGPT.begin(PILOTEI2CDGPT_SDA, PILOTEI2CDGPT_SCL, 400000);
}

void piloteI2CDGPT_beginW(unsigned char ucAdr) {
  I2CDGPT.beginTransmission(ucAdr >> 1);
}

void piloteI2CDGPT_beginR(int Adr, int NbBytes) {
  I2CDGPT.requestFrom((Adr >> 1), NbBytes);
}

void piloteI2CDGPT_write(unsigned char ucData) {
  I2CDGPT.write(ucData);
}

unsigned char piloteI2CDGPT_read(void) {
  return I2CDGPT.read();
}

void piloteI2CDGPT_end(void) {
  I2CDGPT.endTransmission();
}