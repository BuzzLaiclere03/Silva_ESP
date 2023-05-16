#ifndef PILOTEI2CDGPT_H
#define PILOTEI2CDGPT_H

//MODULE: piloteI2CDGPT
//DESCRIPTION: pour communiquer avec les potentiomètre digitaux
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielle
//#define PILOTEI2CDGPT_SDA 45
//#define PILOTEI2CDGPT_SCL 46

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:

//Fonctions publiques:
void piloteI2CDGPT_initialise(void);
void piloteI2CDGPT_begin(unsigned char ucAdr);
void piloteI2CDGPT_write(unsigned char ucData);
void piloteI2CDGPT_end(void);

//Variables publiques:
//pas de variables publiques

#endif
