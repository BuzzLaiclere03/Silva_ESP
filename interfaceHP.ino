//interfaceHP:
//Historique:
// 2018-09-24, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "interfaceHP.h"
#include "interfaceRPi.h"
#include "piloteI2SBT.h"

//Definitions privees

//Declarations de fonctions privees:
void interfaceHP_gere(void);

//Definitions de variables privees:

//Definitions de fonctions privees:
void interfaceHP_gere(*INTERFACERPI interfaceRPi) {

  if (interfaceRPi.btactions.bits.State) {
    a2dp_sink.play();
  } else {
    a2dp_sink.pause();
  }

  a2dp_sink.set_volume(interfaceRPi.Volume);

  if (interfaceRPi.Disconnect) {
    a2dp_sink.pause();
    a2dp_sink.disconnect();
  }

  if (interfaceRPi.btactions.bits.Next) {
    a2dp_sink.next();
  }

  if (interfaceRPi.btactions.bits.Back) {
    a2dp_sink.previous();
  }
}
//Definitions de variables publiques:
INTERFACEHP interfaceHP;

//Definitions de fonctions publiques:
void interfaceHP_initialise(void) {
  interfaceHP.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceHP.information = INFORMATION_TRAITEE;
  a2dp_sink.pause();
  serviceBaseDeTemps_execute[INTERFACEHP_PHASE] = interfaceHP_gere;
}