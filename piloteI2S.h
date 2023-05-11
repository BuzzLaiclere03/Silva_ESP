#ifndef PILOTEI2S_H
#define PILOTEI2S_H

//MODULE: piloteI2S
//DESCRIPTION: pour sortir du I2S
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define PILOTEIOB1_ENTREE P3_bit.P32_INT0  

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void piloteI2S_initialise(void);
unsigned char piloteI2S_litLEntree(void);

//Variables publiques:
//pas de variables publiques

#endif
