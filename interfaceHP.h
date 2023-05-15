#ifndef INTERFACEHP_H
#define INTERFACEHP_H

//MODULE: interfaceHP
//DESCRIPTION: pour s'interfacer avec le bouton B1. 
//L'etat du bouton est lu periodiquement et les decisions rendues par rapport a
//son etat se base sur un nombre minimum de lecture afin de reduire les risques
//d'erreurs causees par des rebondissements ou du bruit.
//La fr�quence INTERFACEB1_FREQUENCE_DES_LECTURES_EN_HZ des lectures 
//du bouton doit �tre un multiple de la fr�quence de la base de temps utilis�e.
//Le nombre minimum de lecture est donne par
//INTERFACEB1_NOMBRE_MINIMUM_DE_LECTURES_PAR_DECISION

//HISTORIQUE:
// 2018-09-08, Yves Roy, creation

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define INTERFACEHP_PHASE 0

//INFORMATION PUBLIQUE:
//Definitions publiques:
typedef struct
{
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACEHP;

//Fonctions publiques:
void interfaceHP_initialise(void);
void interfaceHP_gere(*INTERFACERPI);

//Variables publiques:
extern INTERFACEHP interfaceHP;

#endif
