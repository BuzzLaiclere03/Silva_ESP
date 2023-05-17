#ifndef PILOTEIOAUDIO_H
#define PILOTEIOAUDIO_H

//MODULE: piloteIOAudio
//DESCRIPTION: pour commander la sortie IOAudioSelect
//HISTORIQUE:
// 2023-05-11 Samuel Hamelin

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define PILOTEIOAUDIOSELECT_SORTIE 16
//#define PILOTEIOAUDIOMUTE_SORTIE 47

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
// pas de d�pendances logicielles

//INFORMATION PUBLIQUE:
//Definitions publiques:
//pas de definitions publiques

//Fonctions publiques:
void piloteIOAudio_initialise(void);
void piloteIOAudio_Mute(unsigned char Valeur);
void piloteIOAudio_Select(unsigned char Valeur);

//Variables publiques:
// pas de variables publiques

#endif
