//piloteI2SBT:
//Historique: 
// 2023-05-11 Samuel Hamelin

//INCLUSIONS
#include "main.h"
#include "piloteI2SBT.h"
#include "BluetoothA2DPSink.h"

//Definitions privees
//pas de d�finitions privees

//Declarations de fonctions privees:
//pas de fonction privees

//Definitions de variables privees:
i2s_pin_config_t my_pin_config = {
        .bck_io_num = 15,
        .ws_io_num = 14,
        .data_out_num = 13,
        .data_in_num = I2S_PIN_NO_CHANGE
  }

//Definitions de fonctions privees:
//pas de fonctions privees

//Definitions de variables publiques:
BluetoothA2DPSink a2dp_sink;

//Definitions de fonctions publiques:

void piloteI2SBT_initialise(void)
{
  a2dp_sink.set_pin_config(my_pin_config);
  a2dp_sink.start("Silva");
}




