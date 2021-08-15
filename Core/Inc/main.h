/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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
#define LASER_ENABLE_Pin GPIO_PIN_2
#define LASER_ENABLE_GPIO_Port GPIOE
#define Photo_Transistor_Pin GPIO_PIN_15
#define Photo_Transistor_GPIO_Port GPIOC
#define Photo_Transistor_EXTI_IRQn EXTI15_10_IRQn
#define LED_GREEN_Pin GPIO_PIN_5
#define LED_GREEN_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_6
#define LED_RED_GPIO_Port GPIOA
#define ETHERNET_RST_Pin GPIO_PIN_0
#define ETHERNET_RST_GPIO_Port GPIOB
#define NERROR_Pin GPIO_PIN_8
#define NERROR_GPIO_Port GPIOE
#define EN_LED_Pin GPIO_PIN_9
#define EN_LED_GPIO_Port GPIOE
#define ENABLE_Step_Pin GPIO_PIN_15
#define ENABLE_Step_GPIO_Port GPIOD
#define STEP_Pin GPIO_PIN_8
#define STEP_GPIO_Port GPIOA
#define DIR_Pin GPIO_PIN_10
#define DIR_GPIO_Port GPIOA
#define TXD_Pin GPIO_PIN_10
#define TXD_GPIO_Port GPIOC
#define RXD_Pin GPIO_PIN_11
#define RXD_GPIO_Port GPIOC
#define BASLER_INPUT_LINE_Pin GPIO_PIN_0
#define BASLER_INPUT_LINE_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

static void inline Step_Motor_Enable(){
	HAL_GPIO_WritePin(ENABLE_Step_GPIO_Port, ENABLE_Step_Pin, GPIO_PIN_RESET);
}
static void inline Step_Motor_Disable(){
	HAL_GPIO_WritePin(ENABLE_Step_GPIO_Port, ENABLE_Step_Pin, GPIO_PIN_SET);
}

static void inline Red_On(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}

static void inline Green_On(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}
static void inline Yellow_On(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}

static void inline LEDs_Off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
}
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
