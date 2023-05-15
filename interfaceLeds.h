#ifndef INTERFACELEDS_H
#define INTERFACELEDS_H

//MODULE: interfaceLeds
//DESCRIPTION: pour s'interfacer avec la strip de leds. 

//HISTORIQUE:
// 2018-09-08, Yves Roy, creation

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define INTERFACELEDS_PHASE 0

//INFORMATION PUBLIQUE:
//Definitions publiques:
typedef struct
{
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACELEDS;

//Fonctions publiques:
void interfaceLeds_changeetat(unsigned char Pin, unsigned char Valeur);
void interfaceLeds_initialise(void);

//Variables publiques:
extern INTERFACELEDS interfaceLeds;

#endif
