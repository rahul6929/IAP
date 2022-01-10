/*
 * gpgp.c
 *
 *  Created on: Jan 6, 2022
 *      Author: Rahul Dhiman
 */


#include "Header.h"
#include "stm32l552xx.h"
//#include "stm32l5xx_hal_gpio.h"
//#include "testheader.h"
void gpioInit(void)
{

	blueLed.port = GPIOB;
	blueLed.pin = GPIO_P_7;

	redLed.port = GPIOA;
	redLed.pin  = GPIO_P_9;

	greenLed.port = GPIOC;
	greenLed.pin = GPIO_P_7;


	lampRelay.port 		= GPIOF;
	lampRelay.pin 		= GPIO_P_3;

	aqiSensor.port 		= GPIOC;
	aqiSensor.pin  		= GPIO_P_3;

	uvcSensor.port 		= GPIOB;
	uvcSensor.pin 		= GPIO_P_0;

	mode.port	  		= GPIOD;
	mode.pin	  		= GPIO_P_7;

	modeNormalLed.port	= GPIOC;
	modeNormalLed.pin	= GPIO_P_14;

	modeSleepLed.port	= GPIOC;
	modeSleepLed.pin	= GPIO_P_15;

	modeAutoLed.port	= GPIOH;
	modeAutoLed.pin		= GPIO_P_0;

	modePowerSaveLed.port= GPIOH;
	modePowerSaveLed.pin = GPIO_P_1;

	fanSpeedLed25.port	= GPIOD;
	fanSpeedLed25.pin	= GPIO_P_7;

	fanSpeedLed50.port	= GPIOE;
	fanSpeedLed50.pin	= GPIO_P_3;

	fanSpeedLed75.port	= GPIOD;
	fanSpeedLed75.pin	= GPIO_P_1;

	fanSpeedLed100.port	= GPIOD;
	fanSpeedLed100.pin	= GPIO_P_0;

}
