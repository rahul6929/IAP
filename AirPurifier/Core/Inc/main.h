/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l5xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define mode_Pin GPIO_PIN_2
#define mode_GPIO_Port GPIOE
#define fanSpeedLed50_Pin GPIO_PIN_3
#define fanSpeedLed50_GPIO_Port GPIOE
#define modeNormalLed_Pin GPIO_PIN_14
#define modeNormalLed_GPIO_Port GPIOC
#define modeSleepLed_Pin GPIO_PIN_15
#define modeSleepLed_GPIO_Port GPIOC
#define lampRelay_Pin GPIO_PIN_3
#define lampRelay_GPIO_Port GPIOF
#define modeLedAuto_Pin GPIO_PIN_0
#define modeLedAuto_GPIO_Port GPIOH
#define modeLedPS_Pin GPIO_PIN_1
#define modeLedPS_GPIO_Port GPIOH
#define aqisensor_Pin GPIO_PIN_4
#define aqisensor_GPIO_Port GPIOA
#define uvcSensor_Pin GPIO_PIN_0
#define uvcSensor_GPIO_Port GPIOB
#define greenLed_Pin GPIO_PIN_7
#define greenLed_GPIO_Port GPIOC
#define redLed_Pin GPIO_PIN_9
#define redLed_GPIO_Port GPIOA
#define fanSpeedLed100_Pin GPIO_PIN_0
#define fanSpeedLed100_GPIO_Port GPIOD
#define fanSpeedLed75_Pin GPIO_PIN_1
#define fanSpeedLed75_GPIO_Port GPIOD
#define fanSpeedLed25_Pin GPIO_PIN_7
#define fanSpeedLed25_GPIO_Port GPIOD
#define blueLed_Pin GPIO_PIN_7
#define blueLed_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
