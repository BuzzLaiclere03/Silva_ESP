//interfaceLeds:
//Historique: 
// 2018-09-08, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "pilotePWM.h"
#include "interfaceLeds.h"
#include "interfaceRPi.h"

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
void interfaceLeds_changeetat(void)
{
  pilotePWM_metLaSortieA(PILOTEPWM_LEDG, interfaceRPi.Led_G);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDR, interfaceRPi.Led_R);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDW, interfaceRPi.Led_W);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDB, interfaceRPi.Led_B);
  
  Serial.print(interfaceRPi.Led_G);
  Serial.print(" - ");
  Serial.print(interfaceRPi.Led_R);
  Serial.print(" - ");
  Serial.print(interfaceRPi.Led_W);
  Serial.print(" - ");
  Serial.print(interfaceRPi.Led_B);
  Serial.print("\n");
}

void interfaceLeds_initialise(void)
{
  Serial.begin(115200);
  interfaceLeds.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceLeds.information = INFORMATION_TRAITEE;
  pilotePWM_metLaSortieA(PILOTEPWM_LEDG, 0);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDR, 0);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDW, 0);
  pilotePWM_metLaSortieA(PILOTEPWM_LEDB, 0);
  serviceBaseDeTemps_execute[INTERFACELEDS_PHASE] = interfaceLeds_changeetat;
}
