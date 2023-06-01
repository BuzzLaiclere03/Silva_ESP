//247-527Atelier3a: programme de depart pour faire operer le ESP32 en mode cooperatif
//Historique:
// 2022-10-18, Yves Roy, creation a partir du programme 247-527Atelier3a

//INCLUSIONS
#include "main.h"
#include "piloteI2CDGPT.h"
#include "piloteI2CRPi.h"
#include "piloteIOAudio.h"
#include "pilotePWM.h"

#include "xserviceBaseDeTemps.h"
#include "xserviceTaskServer.h"

#include "interfaceDGPT.h"
#include "interfaceLeds.h"
#include "interfaceRPi.h"
#include "interfaceAudio.h"
#include "interfaceI2S.h"

//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
void main_initialise(void);

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
void main_initialise(void) {

  piloteI2CDGPT_initialise();
  piloteI2CRPi_initialise();
  piloteIOAudio_initialise();
  pilotePWM_initialise();

  serviceTaskServer_initialise();
  serviceBaseDeTemps_initialise();
  
  interfaceDGPT_initialise();
  interfaceLeds_initialise();
  interfaceRPi_initialise();
  interfaceAudio_initialise();
}

void setup(void) {
  main_initialise();
  serviceTaskServer_DemarreLesTachesALaTouteFinDeSetup();
  //Serial.begin(115200);
  //interfaceRPi.btactions.bits.Source = 0;
  //interfaceAudio_gere();
  //app_main();
}


void loop(void) {

  serviceTaskServer_gestion.execute();
  serviceBaseDeTemps_gereDansLoop();

  //interfaceRPi_gere();
  //interfaceDGPT_gere();
  //interfaceLeds_changeetat();
  //interfaceAudio_gere();
  //delay(100);
}

//Definitions de variables publiques:
//pas de variables publiques

//Definitions de fonctions publiques:
void neFaitRien(void) {
}