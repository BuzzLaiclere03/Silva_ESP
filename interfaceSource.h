#ifndef INTERFACESOURCE_H
#define INTERFACESOURCE_H

//MODULE: interfaceSource
//DESCRIPTION: pour s'interfacer avec la strip de leds. 

//HISTORIQUE:
// 2018-09-08, Yves Roy, creation

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define INTERFACESOURCE_PHASE 0
//#define INTERFACESOURCE_SELECTRPI 0
//#define INTERFACESOURCE_SELECTESP 1

//INFORMATION PUBLIQUE:
//Definitions publiques:
typedef struct
{
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACEHP;

//Fonctions publiques:
void interfaceSource_gere(*INTERFACERPI);
void interfaceSource_initialise(void);

//Variables publiques:
extern INTERFACEHP interfaceHP;

#endif
