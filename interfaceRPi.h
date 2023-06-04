#ifndef INTERFACERPI_H
#define INTERFACERPI_H

//MODULE: interfaceRPi
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
//#define INTERFACERPI_PHASE 0
//#define INTERFACERPI_ADR 0xD2

//INFORMATION PUBLIQUE:
//Definitions publiques:
struct BITS{
    unsigned char Source : 1;
    unsigned char Disconnect : 1;
    unsigned char Next : 1;
    unsigned char State : 1;
    unsigned char Back : 1;
    unsigned char Unused : 3;
  };

union BtActions 
{
  unsigned char All;
  struct BITS bits; 
};

typedef struct
{
  union BtActions btactions;  
  unsigned char Led_B;
  unsigned char Led_W;
  unsigned char Led_R;
  unsigned char Led_G;
  unsigned char Volume;
  unsigned char Bass;
  unsigned char Mid;
  unsigned char Treble;
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACERPI;

//Fonctions publiques:
void interfaceRPi_initialise(void);
void interfaceRPi_gere(int);

//Variables publiques:
extern INTERFACERPI interfaceRPi;

#endif
