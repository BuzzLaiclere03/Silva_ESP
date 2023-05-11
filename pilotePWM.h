#ifndef PILOTEPWM_H
#define PILOTEPWM_H

//MODULE: pilotePWM
//DESCRIPTION: pour commander la sortie IOAudioSelect
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define PILOTEPWMLEDG        16
//#define PILOTEPWMLEDR        16
//#define PILOTEPWMLEDW        16
//#define PILOTEPWMLEDB        16

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
