#ifndef PILOTEPWM_H
#define PILOTEPWM_H

//MODULE: pilotePWM
//DESCRIPTION: pour commander la sortie IOAudioSelect
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define PILOTEPWM_LEDG        16
//#define PILOTEPWM_LEDR        16
//#define PILOTEPWM_LEDW        16
//#define PILOTEPWM_LEDB        16

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
// pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void pilotePWM_initialise(void);
void pilotePWM_metLaSortieA(unsigned char Pin, unsigned char Valeur);

//Variables publiques:
// pas de variables publiques

#endif
