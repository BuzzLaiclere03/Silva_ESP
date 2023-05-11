//piloteIOAudioSelect:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteIOAudioSelect.h"

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
void piloteIOAudioSelect_metLaSortieA(unsigned char Valeur)
{
  digitalWrite(PILOTEIOAUDIOSELECT_SORTIE, Valeur);
}

void piloteIOAudioSelect_initialise(void)
{
  pinMode(PILOTEIOAUDIOSELECT_SORTIE, OUTPUT);
}




