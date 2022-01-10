/*
 * Header.h
 *
 *  Created on: Jan 5, 2022
 *      Author: Rahul Dhiman
 */

#ifndef INC_HEADER_H_
#define INC_HEADER_H_



//#include "stm32l5xx_hal_gpio.h"

#include "stm32l552xx.h"
#include <stdio.h>
#include <stdint.h>


#define GPIO_P_0                 ((uint16_t)0x0001)  /* Pin 0 selected    */
#define GPIO_P_1                 ((uint16_t)0x0002)  /* Pin 1 selected    */
#define GPIO_P_2                 ((uint16_t)0x0004)  /* Pin 2 selected    */
#define GPIO_P_3                 ((uint16_t)0x0008)  /* Pin 3 selected    */
#define GPIO_P_4                 ((uint16_t)0x0010)  /* Pin 4 selected    */
#define GPIO_P_5                 ((uint16_t)0x0020)  /* Pin 5 selected    */
#define GPIO_P_6                 ((uint16_t)0x0040)  /* Pin 6 selected    */
#define GPIO_P_7                 ((uint16_t)0x0080)  /* Pin 7 selected    */
#define GPIO_P_8                 ((uint16_t)0x0100)  /* Pin 8 selected    */
#define GPIO_P_9                 ((uint16_t)0x0200)  /* Pin 9 selected    */
#define GPIO_P_10                ((uint16_t)0x0400)  /* Pin 10 selected   */
#define GPIO_P_11                ((uint16_t)0x0800)  /* Pin 11 selected   */
#define GPIO_P_12                ((uint16_t)0x1000)  /* Pin 12 selected   */
#define GPIO_P_13                ((uint16_t)0x2000)  /* Pin 13 selected   */
#define GPIO_P_14                ((uint16_t)0x4000)  /* Pin 14 selected   */
#define GPIO_P_15                ((uint16_t)0x8000)  /* Pin 15 selected   */
#define GPIO_P_All               ((uint16_t)0xFFFF)  /* All pins selected */

typedef struct gpio_pin
{
	GPIO_TypeDef *port;
	uint16_t pin;
}Gpio_Name_t;


///////////////////////////////// GPIO Pin Name //////////////////////////////////////////////

Gpio_Name_t blueLed;			//PB7
Gpio_Name_t greenLed;			//PC7
Gpio_Name_t redLed;				//PA9

Gpio_Name_t lampRelay;			// PF3
Gpio_Name_t aqiSensor;			// PA4
Gpio_Name_t uvcSensor;			// PB0

Gpio_Name_t mode;				// PE2
Gpio_Name_t modeNormalLed;		// PC14
Gpio_Name_t modeSleepLed;		// PC15
Gpio_Name_t modeAutoLed;		// PH0
Gpio_Name_t modePowerSaveLed;	// PH1

Gpio_Name_t fanSpeedLed25;		// PD7
Gpio_Name_t fanSpeedLed50;		// PE3
Gpio_Name_t fanSpeedLed75;		// PD1
Gpio_Name_t fanSpeedLed100;		// PD0



//////////////////////////////// Function prototype /////////////////////////////////////////
void gpioInit(void);



#endif /* INC_HEADER_H_ */
