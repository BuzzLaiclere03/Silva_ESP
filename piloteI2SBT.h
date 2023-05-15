#ifndef PILOTEI2SBT_H
#define PILOTEI2SBT_H

//MODULE: piloteI2SBT
//DESCRIPTION: pour sortir du I2S par du bluetooth
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h") 

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void piloteI2SBT_initialise(void);

//Variables publiques:
extern BluetoothA2DPSink a2dp_sink;
#endif
