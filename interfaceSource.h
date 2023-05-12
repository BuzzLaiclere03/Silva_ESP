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
//#define INTERFACESOURCE_SELECTRPI 0
//#define INTERFACESOURCE_SELECTESP 1

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void interfaceLeds_changeetat(unsigned char Pin, unsigned char Valeur);
void interfaceLeds_initialise(void);

//Variables publiques:
//pas de variables publiques

#endif
