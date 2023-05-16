//247-527Atelier3a: programme de depart pour faire operer le ESP32 en mode cooperatif
//Historique:
// 2022-10-18, Yves Roy, creation a partir du programme 247-527Atelier3a

//INCLUSIONS
#include "main.h"
#include "piloteI2CDGPT.h"
#include "piloteI2CRPi.h"
#include "piloteIOAudioSelect.h"
#include "pilotePWM.h"

//#include "xserviceBaseDeTemps.h"
//#include "serviceProtocole637.h"

#include "interfaceDGPT.h"
#include "interfaceLeds.h"
#include "interfaceRPi.h"
#include "interfaceSource.h"

//#include "processusBoutonConnecte.h"
//#include "processusClignotant.h"
//#include "xserviceTaskServer.h"


//Definitions privees
//pas de definitions privees

//Declarations de fonctions privees:
void main_initialise(void);

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
void main_initialise(void) {
  piloteI2CDGPT_initialise();
  //piloteI2CRPi_initialise();
  //piloteI2SBT_initialise();
  piloteIOAudioSelect_initialise();
  //pilotePWM_initialise();

  //serviceTaskServer_initialise();
  //serviceBaseDeTemps_initialise();
  
  interfaceDGPT_initialise();
  //interfaceHP_initialise();
  //interfaceLeds_initialise();
  interfaceRPi_initialise();
  interfaceSource_initialise();

  //processusClignotant_initialise();
  //processusBoutonConnecte_initialise();
}

void setup(void) {
  main_initialise();
  //serviceTaskServer_DemarreLesTachesALaTouteFinDeSetup();
  Serial.begin(115200);
}


void loop(void) {
  //serviceTaskServer_gestion.execute();
  //serviceBaseDeTemps_gereDansLoop();
  interfaceRPi.Volume = 100;
  interfaceDGPT_gere();
  Serial.write("\nWant 100--- Got ");
  Serial.print(interfaceDGPT_read(INTERFACEDGPT_ADRVOLUME, 1));
  Serial.write("\nWrote to ");
  Serial.print(interfaceDGPT.setup.bytes.Adr, HEX);
  Serial.print(interfaceDGPT.setup.bytes.Instruction, HEX);
  delay(2000);
  interfaceRPi.Volume = 0;
  interfaceDGPT_gere();
  Serial.write("\nWant 0--- Got ");
  Serial.print(interfaceDGPT_read(INTERFACEDGPT_ADRVOLUME, 1));
  Serial.write("\nWrote to ");
  Serial.print(interfaceDGPT.setup.bytes.Adr, HEX);
  Serial.print(interfaceDGPT.setup.bytes.Instruction, HEX);
  delay(2000);

}

//Definitions de variables publiques:
//pas de variables publiques

//Definitions de fonctions publiques:
void neFaitRien(void) {
}