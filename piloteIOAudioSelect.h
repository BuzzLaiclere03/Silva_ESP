#ifndef PILOTEIOAUDIOSELECT_H
#define PILOTEIOAUDIOSELECT_H

//MODULE: piloteIOAudioSelect
//DESCRIPTION: pour commander la sortie IOAudioSelect
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define PILOTEIOAUDIOSELECT_SORTIE 16

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
// pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void piloteIOAudioSelect_initialise(void);
void piloteIOAudioSelect_metLaSortieA(unsigned char Valeur);

//Variables publiques:
// pas de variables publiques

#endif
