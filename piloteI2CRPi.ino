//piloteI2CRPi:
//Historique:
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2CRPi.h"
#include "interfaceRPi.h"
#include <Wire.h>

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
//pas de fonctions privees

//Definitions de variables privees:
TwoWire I2CRPi = TwoWire(0);

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:

//Definitions de fonctions publiques:
// pas de definitions publiques

//Fonctions publiques:
/*
void piloteI2CRPi_initialise(void) {
  I2CRPi.begin(PILOTEI2CRPI_SDA, PILOTEI2CRPI_SCL, 400000);
}

void piloteI2CRPi_beginW(unsigned char ucAdr) {
  I2CRPi.beginTransmission(ucAdr >> 1);
}

void piloteI2CRPi_beginR(int Adr) {
  I2CRPi.requestFrom((Adr >> 1), (int)PILOTEI2CRPI_NBBYTEARECEVOIR);
}

void piloteI2CRPi_write(unsigned char ucData) {
  I2CRPi.write(ucData);
}

void piloteI2CRPi_read(unsigned char *Data) {
  int i = 0;
  while(I2CRPi.available()){
    Data[i] = I2CRPi.read();
    i++;
  }
}

void piloteI2CRPi_end(void) {
  I2CRPi.endTransmission();
}*/

void piloteI2CRPi_initialise(void) {
  I2CRPi.begin(PILOTEI2CRPI_SDA, PILOTEI2CRPI_SCL, 0x69);
  I2CRPi.onReceive(interfaceRPi_gere);
}

void piloteI2CRPi_beginW(unsigned char ucAdr) {
  I2CRPi.beginTransmission(ucAdr >> 1);
}

void piloteI2CRPi_beginR(int Adr) {
  I2CRPi.requestFrom((Adr >> 1), (int)PILOTEI2CRPI_NBBYTEARECEVOIR);
}

void piloteI2CRPi_write(unsigned char ucData) {
  I2CRPi.write(ucData);
}

void piloteI2CRPi_read(unsigned char *Data) {
  int i = 0;
  while(1 < I2CRPi.available()){
    Data[i] = I2CRPi.read();
    i++;
  }
}

void piloteI2CRPi_end(void) {
  I2CRPi.endTransmission();
}