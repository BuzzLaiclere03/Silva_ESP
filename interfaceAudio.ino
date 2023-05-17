//interfaceAudio:
//Historique:
// 2018-09-08, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "piloteIOAudio.h"
#include "interfaceRPi.h"
#include "interfaceAudio.h"

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
void interfaceAudio_gere(void) {

  piloteIOAudio_Select(interfaceRPi.btactions.bits.Source);

  if (interfaceRPi.Volume == 0) {
    piloteIOAudio_Mute(INTERFACEAUDIO_MUTE);
    
  } else {
    piloteIOAudio_Mute(INTERFACEAUDIO_UNMUTE);
  }
}

INTERFACEAUDIO interfaceAudio;

void interfaceAudio_initialise(void) {
  interfaceAudio.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceAudio.information = INFORMATION_TRAITEE;
  piloteIOAudio_Select(INTERFACEAUDIO_SELECTRPI);
  serviceBaseDeTemps_execute[INTERFACEAUDIO_PHASE] = interfaceAudio_gere;
}