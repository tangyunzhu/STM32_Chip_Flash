/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2014, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#include "PeripheralPins.h"

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have also to modify the corresponding xxx_api.c file
//       for pwmout, analogin, analogout, ...
// =====

//*** ADC ***

const PinMap PinMap_ADC[] = {
    {PA_0, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN0
    {PA_1, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN1
    {PA_2, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN2
    {PA_3, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN3
    {PA_4, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN4
    {PA_5, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN5
    {PA_6, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN6
    {PA_7, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN7
    {PB_0, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN8
    {PB_1, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN9
    {PC_0, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN10
    {PC_1, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN11
    {PC_2, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN12
    {PC_3, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN13
    {PC_4, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN14
    {PC_5, ADC_1, STM_PIN_DATA(STM_MODE_ANALOG, GPIO_NOPULL, 0)}, // ADC1_IN15
    {NC,   NC,    0}
};

//*** I2C ***

const PinMap PinMap_I2C_SDA[] = {
    {PB_7,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_9,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_11, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C2)},
    {NC,    NC,    0}
};

const PinMap PinMap_I2C_SCL[] = {
    {PB_6,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_8,  I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB_10, I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C2)},
    {NC,    NC,    0}
};

//*** PWM ***

// TIM1 cannot be used because already used by the us_ticker
const PinMap PinMap_PWM[] = {
	{PB_4,  PWM_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM3)},  // TIM3_CH1
	{PB_5,  PWM_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM3)},  // TIM3_CH2
	{PB_0,  PWM_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM3)},  // TIM3_CH3
	{PB_1,  PWM_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF1_TIM3)},  // TIM3_CH4
	
//	{PA_11,  PWM_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM1)},  // TIM1_CH4
//	{PA_8,  PWM_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM1)},  // TIM1_CH1
	{PB_8,  PWM_16,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM16)},  // TIM16_CH1
	{PB_9,  PWM_17,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF2_TIM17)},  // TIM17_CH1
	{PA_2,  PWM_15,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_TIM15)},  // TIM15_CH1
	{PA_3,  PWM_15,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_TIM15)},  // TIM15_CH2

	{PA_6,  PWM_16,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_TIM16)},  // TIM16_CH1
    {NC,    NC,    0}
};

//*** SERIAL ***

const PinMap PinMap_UART_TX[] = {
    {PA_2,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PA_9,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
    {PB_6,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {NC,    NC,     0}
};

const PinMap PinMap_UART_RX[] = {
    {PA_3,  UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PA_10, UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
    {PA_15, UART_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
    {PB_7,  UART_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {NC,    NC,     0}
};

//*** SPI ***

const PinMap PinMap_SPI_MOSI[] = {
    {PA_7,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_5,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_15, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_MISO[] = {
    {PA_6,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_4,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_14, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SCLK[] = {
    {PA_5,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_3,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_13, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLDOWN, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SSEL[] = {
    {PA_4,  SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PA_15, SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI1)},
    {PB_12, SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};
