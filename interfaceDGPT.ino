//interfaceDGPT:
//Historique:
// 2018-09-24, Yves Roy, creation

//INCLUSIONS
#include "main.h"
#include "interfaceDGPT.h"
#include "piloteI2CDGPT.h"

//Definitions privees

//Declarations de fonctions privees:
void interfaceDGPT_gere(void);

//Definitions de variables privees:

//Definitions de fonctions privees:
void interfaceDGPT_gere(unsigned char Adr, unsigned char Valeur) {
    interfaceDGPT.setup.All = Adr;
    piloteI2CDGPT_begin(interfaceDGPT.setup.bytes.Adr);
    piloteI2CDGPT_write(interfaceDGPT.setup.bytes.Instruction);
    piloteI2CDGPT_write((unsigned char)((Valeur/100)*255));
    piloteI2CDGPT_end();
}

//Definitions de variables publiques:
INTERFACEDGPT interfaceDGPT;

//Definitions de fonctions publiques:
void interfaceDGPT_initialise(void) {
  interfaceRPi.etatDuModule = MODULE_PAS_EN_FONCTION;
  interfaceRPi.information = INFORMATION_TRAITEE;
  
  serviceBaseDeTemps_execute[INTERFACEDGPT_PHASE] = interfaceDGPT_gere;
}