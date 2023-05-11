//piloteI2S:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2S.h"
#include "BluetoothA2DPSink.h"

//Definitions privees
//pas de d�finitions privees

//Declarations de fonctions privees:
//pas de fonction privees

//Definitions de variables privees:
//pas de variables privees

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
// pas de variables publiques

//Definitions de fonctions publiques:
unsigned char piloteIOB1_litLEntree(void)
{
  return digitalRead(PILOTEIOB1_BROCHE);
}

void piloteIOB1_initialise(void)
{
  i2s_pin_config_t my_pin_config = {
        .bck_io_num = 15,
        .ws_io_num = 14,
        .data_out_num = 13,
        .data_in_num = I2S_PIN_NO_CHANGE
  }
}




