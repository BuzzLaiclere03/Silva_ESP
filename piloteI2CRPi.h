#ifndef PILOTEI2CRPI_H
#define PILOTEI2CRPI_H

//MODULE: piloteI2CRPi
//DESCRIPTION: pour communiquer avec les potentiomètre digitaux
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielle
//#define PILOTEI2CRPI_SDA 35
//#define PILOTEI2CRPI_SCL 36
//#define PILOTEI2CRPI_NBBYTEARECEVOIR 10

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:

//Fonctions publiques:
void piloteI2CRPi_initialise(void);
void piloteI2CRPi_beginW(unsigned char ucAdr);
void piloteI2CRPi_beginR(unsigned char ucAdr);
void piloteI2CRPi_write(unsigned char ucData);
void piloteI2CRPi_read(unsigned char *Data);
void piloteI2CRPi_end(void);


//Variables publiques:
//pas de variables publiques
#endif
