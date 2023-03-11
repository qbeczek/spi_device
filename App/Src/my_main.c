/*
 * my_main.c
 *
 *  Created on: Feb 17, 2023
 *      Author: KUBA
 */
#include "my_main.h"
#include "led.h"
#include "stm32f1xx_hal.h"


#include "usb_device.h"

#include "usbd_cdc_if.h"
#include "string.h"

uint8_t *data = "Dobry wieczór Polsko!!!\n\t";

void my_main_run(){
	for (;;) {
		led_toggle();
		CDC_Transmit_FS(data, strlen(data));
		HAL_Delay(1150);
	}
}
