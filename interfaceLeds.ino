//interfaceLeds:
//Historique: 
// 2018-09-08, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "pilotePWM.h"
#include "interfaceLeds.h"

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
void interfaceLeds_changeetat(unsigned char Pin, unsigned char Valeur)
{
  pilotePWM_metLaSortieA(Pin, Valeur);
}

void interfaceLeds_initialise(void)
{
  pilotePWM_metLaSortieA(PILOTEPWMLEDG, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDR, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDW, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDB, 0);
}
