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
INTERFACELEDS interfaceLeds;

//Definitions de fonctions publiques:
void interfaceLeds_changeetat(*INTERFACERPI interfaceRPi)
{
  pilotePWM_metLaSortieA(PILOTEPWMLEDG, interfaceRPi.LED_G);
  pilotePWM_metLaSortieA(PILOTEPWMLEDR, interfaceRPi.LED_R);
  pilotePWM_metLaSortieA(PILOTEPWMLEDW, interfaceRPi.LED_W);
  pilotePWM_metLaSortieA(PILOTEPWMLEDB, interfaceRPi.LED_B);
}

void interfaceLeds_initialise(void)
{
  interfaceLeds.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceLeds.information = INFORMATION_TRAITEE;
  pilotePWM_metLaSortieA(PILOTEPWMLEDG, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDR, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDW, 0);
  pilotePWM_metLaSortieA(PILOTEPWMLEDB, 0);
  serviceBaseDeTemps_execute[INTERFACELEDS_PHASE] = interfaceLeds_gere;
}
