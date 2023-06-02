//interfaceDGPT:
//Historique:
// 2018-09-24, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "interfaceDGPT.h"
#include "interfaceRPi.h"
#include "piloteI2CDGPT.h"

//Definitions privees

//Declarations de fonctions privees:

//Definitions de variables privees:

//Definitions de fonctions privees:
unsigned char interfaceDGPT_read(unsigned int Adr, unsigned char NbBytes) {
  interfaceDGPT.setup.All = Adr;
  piloteI2CDGPT_beginR(interfaceDGPT.setup.bytes.Adr, NbBytes);
  unsigned char Recu = piloteI2CDGPT_read();
  return Recu;
}

void interfaceDGPT_write(unsigned int Adr, unsigned char Valeur) {
  interfaceDGPT.setup.All = Adr;
  piloteI2CDGPT_beginW(interfaceDGPT.setup.bytes.Adr);
  piloteI2CDGPT_write(interfaceDGPT.setup.bytes.Instruction);
  piloteI2CDGPT_write(Valeur);
  piloteI2CDGPT_end();
}

void interfaceDGPT_gere(void) {
  interfaceDGPT_write(INTERFACEDGPT_ADRBASS, 255 - interfaceRPi.Bass);
  interfaceDGPT_write(INTERFACEDGPT_ADRMID, interfaceRPi.Mid);
  interfaceDGPT_write(INTERFACEDGPT_ADRTREBLE, 255 - interfaceRPi.Treble);
  interfaceDGPT_write(INTERFACEDGPT_ADRVOLUME, interfaceRPi.Volume);
}
//Definitions de variables publiques:
INTERFACEDGPT interfaceDGPT;

//Definitions de fonctions publiques:
void interfaceDGPT_initialise(void) {
  interfaceRPi.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceRPi.information = INFORMATION_TRAITEE;
  interfaceDGPT_write(INTERFACEDGPT_ADRBASS, 50);
  interfaceDGPT_write(INTERFACEDGPT_ADRMID, 50);
  interfaceDGPT_write(INTERFACEDGPT_ADRTREBLE, 50);
  interfaceDGPT_write(INTERFACEDGPT_ADRVOLUME, 50);
  serviceBaseDeTemps_execute[INTERFACEDGPT_PHASE] = interfaceDGPT_gere;
}