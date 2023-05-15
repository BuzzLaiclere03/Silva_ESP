//interfaceRPi:
//Historique:
// 2018-09-24, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "piloteI2CRPi.h"

//Definitions privees

//Declarations de fonctions privees:
void interfaceRPi_gere(void);

//Definitions de variables privees:

//Definitions de fonctions privees:
void interfaceRPi_gere(void) {
  unsigned char[10] DataRecue;
  piloteI2CRPi_read(&DataRecue);

  unsigned char CheckSum = 0;
  for (int i = 0; i < 9; i++) {
    CheckSum += DataRecue[i];
  }
  if (CheckSum == DataRecue[9]) {
    interfaceRPi.btactions.All = DataRecue[0];
    interfaceRPi.Led_B = DataRecue[1];
    interfaceRPi.Led_W = DataRecue[2];
    interfaceRPi.Led_R = DataRecue[3];
    interfaceRPi.Led_G = DataRecue[4];
    interfaceRPi.Led_B = DataRecue[5];
    interfaceRPi.Led_B = DataRecue[6];
    interfaceRPi.Led_B = DataRecue[7];
    interfaceRPi.Led_B = DataRecue[8];
  }
}

//Definitions de variables publiques:
INTERFACERPI interfaceRPi;

//Definitions de fonctions publiques:
void interfaceRPi_initialise(void) {
  interfaceRPi.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceRPi.information = INFORMATION_TRAITEE;
  interfaceRPi.btaction.All = 0;
  interfaceRPi.Led_B = 0;
  interfaceRPi.Led_W = 0;
  interfaceRPi.Led_R = 0;
  interfaceRPi.Led_G = 0;
  interfaceRPi.Volume = 0;
  interfaceRPi.Bass = 0;
  interfaceRPi.Mid = 0;
  interfaceRPi.Treble = 0;
  serviceBaseDeTemps_execute[INTERFACERPi_PHASE] = interfaceRPi_gere;
}