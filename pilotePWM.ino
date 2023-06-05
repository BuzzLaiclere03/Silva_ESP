//pilotePWM:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "pilotePWM.h"
#include <pwmWrite.h>

//Definitions privees
//pas de d�finitions privees

//Declarations de fonctions privees:
//pas de fonction privees

//Definitions de variables privees:
Pwm pwm = Pwm();

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
// pas de variables publiques

//Definitions de fonctions publiques:
void pilotePWM_metLaSortieA(unsigned char Pin, unsigned char Valeur)
{
  Serial.print(pwm.write(Pin, Valeur /*& 15*/));
  Serial.print(" - ");
  Serial.print(Valeur);
  Serial.print("\n");
}

void pilotePWM_initialise(void)
{
  pinMode(PILOTEPWM_LEDG, OUTPUT);
  pinMode(PILOTEPWM_LEDR, OUTPUT);
  pinMode(PILOTEPWM_LEDW, OUTPUT);
  pinMode(PILOTEPWM_LEDB, OUTPUT);
}







