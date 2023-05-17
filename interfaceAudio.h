#ifndef INTERFACEAUDIO_H
#define INTERFACEAUDIO_H

//MODULE: interfaceAudio
//DESCRIPTION: pour s'interfacer avec la strip de leds. 

//HISTORIQUE:
// 2018-09-08, Yves Roy, creation

//DEFINITIONS REQUISES PAR LE MODULE:
//Dependances materielles

//Dependances logicielles
//(copiez et adaptez ce qui suit dans "main.h")
//#define INTERFACEAUDIO_PHASE 0
//#define INTERFACEAUDIO_SELECTRPI 0
//#define INTERFACEAUDIO_SELECTESP 1
//#define INTERFACEAUDIO_MUTE 0
//#define INTERFACEAUDIO_UNMUTE 1

//INFORMATION PUBLIQUE:
//Definitions publiques:
typedef struct
{
  unsigned char etatDuModule;
  unsigned char information;
} INTERFACEAUDIO;

//Fonctions publiques:
void interfaceAudio_gere(void);
void interfaceAudio_initialise(void);

//Variables publiques:
extern INTERFACEAUDIO interfaceAudio;

#endif
