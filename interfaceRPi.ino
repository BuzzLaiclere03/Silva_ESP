//interfaceRPi:
//Historique:
// 2018-09-24, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "piloteI2CRPi.h"
#include "interfaceRPi.h"

//Definitions privees

//Declarations de fonctions privees:
//void interfaceRPi_gere(void);

//Definitions de variables privees:

//Definitions de fonctions privees:
void interfaceRPi_gere(int howMany) {

  unsigned char DataRecue[PILOTEI2CRPI_NBBYTEARECEVOIR] = { 0 };
  unsigned char DataVerifie[PILOTEI2CRPI_NBBYTEARECEVOIR] = { 0 };

  //piloteI2CRPi_beginR(INTERFACERPI_ADR);
  piloteI2CRPi_read(DataRecue);

  unsigned int CheckSum = 0;
  unsigned char Start;
  for (int i = 0; i < (PILOTEI2CRPI_NBBYTEARECEVOIR); i++) {
    CheckSum += DataRecue[i];
    if (DataRecue[i] == 0x24) {
      Start = i;
    }
    Serial.print(DataRecue[i]);
    Serial.print(" - ");
  }

  unsigned char Check = Start + 9;
  if (Check >= 10) {
    Check -= 10;
  }

  CheckSum = CheckSum - DataRecue[Check];

  CheckSum = CheckSum % 255;

  Serial.print(" - - - - ");
  Serial.print(CheckSum);
  Serial.print("\n");

  if ((CheckSum == DataRecue[Check]) || (CheckSum == DataRecue[Check] + 1)) {
    int i = Start + 1;
    interfaceRPi.Led_B = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Led_W = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Led_R = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Led_G = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Volume = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Bass = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Mid = DataRecue[i];
    i++;
    if (i >= 10) {
      i -= 10;
    }
    interfaceRPi.Treble = DataRecue[i];
  }
  //interfaceRPi.Volume = 10;
  //interfaceRPi.Bass = 230;
  //interfaceRPi.Mid = 20;
  //interfaceRPi.Treble = 255;
}

//Definitions de variables publiques:
INTERFACERPI interfaceRPi;

//Definitions de fonctions publiques:
void interfaceRPi_initialise(void) {
  interfaceRPi.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceRPi.information = INFORMATION_TRAITEE;
  interfaceRPi.btactions.All = 0;
  interfaceRPi.Led_B = 0;
  interfaceRPi.Led_W = 0;
  interfaceRPi.Led_R = 0;
  interfaceRPi.Led_G = 0;
  interfaceRPi.Volume = 0;
  interfaceRPi.Bass = 0;
  interfaceRPi.Mid = 0;
  interfaceRPi.Treble = 0;
  //I2CRPi.onReceive(interfaceRPi_gere);
  //serviceBaseDeTemps_execute[INTERFACERPI_PHASE] = interfaceRPi_gere;
}