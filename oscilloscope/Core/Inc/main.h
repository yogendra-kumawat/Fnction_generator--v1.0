/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define indi_Pin GPIO_PIN_13
#define indi_GPIO_Port GPIOC
#define select_1_Pin GPIO_PIN_2
#define select_1_GPIO_Port GPIOA
#define select_1_EXTI_IRQn EXTI2_IRQn
#define select_2_Pin GPIO_PIN_3
#define select_2_GPIO_Port GPIOA
#define select_2_EXTI_IRQn EXTI3_IRQn
#define signal_2_Pin GPIO_PIN_4
#define signal_2_GPIO_Port GPIOA
#define signal_3_Pin GPIO_PIN_5
#define signal_3_GPIO_Port GPIOA
#define sig_out_3_Pin GPIO_PIN_6
#define sig_out_3_GPIO_Port GPIOA
#define select_2A7_Pin GPIO_PIN_7
#define select_2A7_GPIO_Port GPIOA
#define swdio_Pin GPIO_PIN_13
#define swdio_GPIO_Port GPIOB
#define rxd_Pin GPIO_PIN_14
#define rxd_GPIO_Port GPIOB
#define txd_Pin GPIO_PIN_15
#define txd_GPIO_Port GPIOB
#define sig_out_2_Pin GPIO_PIN_15
#define sig_out_2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
