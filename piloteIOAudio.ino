//piloteIOAudio:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteIOAudio.h"

//Definitions privees
//pas de d�finitions privees

//Declarations de fonctions privees:
//pas de fonction privees

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
// pas de variables publiques

//Definitions de fonctions publiques:
void piloteIOAudio_Select(unsigned char Valeur)
{
  digitalWrite(PILOTEIOAUDIOSELECT_SORTIE, Valeur);
}

void piloteIOAudio_Mute(unsigned char Valeur)
{
  digitalWrite(PILOTEIOAUDIOMUTE_SORTIE, Valeur);
}

void piloteIOAudio_initialise(void)
{
  pinMode(PILOTEIOAUDIOSELECT_SORTIE, OUTPUT);
  pinMode(PILOTEIOAUDIOMUTE_SORTIE, OUTPUT);
}




