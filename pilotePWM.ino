//pilotePWM:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteIOAudioSelect.h"
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
  pwm.write(Pin, Valeur);
}

void pilotePWM_initialise(void)
{
  pinMode(PILOTEPWMLEDG, OUTPUT);
  pinMode(PILOTEPWMLEDR, OUTPUT);
  pinMode(PILOTEPWMLEDW, OUTPUT);
  pinMode(PILOTEPWMLEDB, OUTPUT);
}






