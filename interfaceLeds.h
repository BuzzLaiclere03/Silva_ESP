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
//pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void interfaceLeds_changeetat(unsigned char Pin, unsigned char Valeur);
void interfaceLeds_initialise(void);

//Variables publiques:
//pas de variables publiques

#endif
