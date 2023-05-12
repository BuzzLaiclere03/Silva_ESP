//interfaceSource:
//Historique: 
// 2018-09-08, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "piloteIOAudioSelect.h"
#include "interfaceSource.h"

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
//pas de fonction privees

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
//pas de variables publiques

//Definitions de fonctions publiques:
void interfaceSource_changeSource(unsigned char Source)
{
  piloteIOAudioSelect_metLaSortieA(Source);
}

void interfaceSource_initialise(void)
{
  piloteIOAudioSelect_metLaSortieA(INTERFACESOURCE_SELECTRPI);
}
