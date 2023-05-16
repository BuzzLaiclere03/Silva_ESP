#ifndef INTERFACEDGPT_H
#define INTERFACEDGPT_H

//MODULE: interfaceDGPT
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
//#define INTERFACEDGPT_PHASE 0
//#define INTERFACEDGPT_ADRBASS 0x5800
//#define INTERFACEDGPT_ADRMID 0x5880
//#define INTERFACEDGPT_ADRTREBLE 0x5A00
//#define INTERFACEDGPT_ADRVOLUME 0x5A80

//INFORMATION PUBLIQUE:
//Definitions publiques:
struct BYTES{
    unsigned char Instruction : 8;
    unsigned char Adr : 8;
  };

union Setup 
{
  unsigned int All;
  struct BYTES bytes; 
};

typedef struct
{
  union Setup setup;  
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACEDGPT;

//Fonctions publiques:
void interfaceDGPT_initialise(void);
void interfaceDGPT_gere(void);
unsigned char interfaceDGPT_read(unsigned int Adr, unsigned char NbBytes);

//Variables publiques:
extern INTERFACEDGPT interfaceDGPT;

#endif
