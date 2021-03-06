#pragma once

#ifdef V3

//sample times for F4: 3,15,28,56,84,112,144,480
#define RES_SampleTime ADC_SampleTime_3Cycles

// ADC_TIMER_FREQ / RES_TIMER_FREQ / ADC_TR_COUNT \in \N
#define ADC_TR_COUNT 6  // ADC_TR_COUNT * (ADC_OVER_FB0 + ADC_OVER_FB1) == 60
#define PID_WAVES 4
#define ADC_OVER_FB0 10
#define ADC_OVER_FB1 0
#define ADC_TIMER_FREQ 84000000
#define RES_TIMER_FREQ 20000

#define FB0_SIN_ADC ADC1
#define FB0_SIN_ADC_RCC RCC_APB2Periph_ADC1
#define FB0_SIN_ADC_CHAN ADC_Channel_14
#define FB0_SIN_PIN GPIO_Pin_4
#define FB0_SIN_PORT GPIOC

#define FB0_COS_ADC ADC2
#define FB0_COS_ADC_RCC RCC_APB2Periph_ADC2
#define FB0_COS_ADC_CHAN ADC_Channel_15
#define FB0_COS_PIN GPIO_Pin_5
#define FB0_COS_PORT GPIOC

#define ADC_REF 3.3  //analog reference voltage
#define ADC_RES 4096.0  //analog resolution, 12 bit

#define OP_R_INPUT 1000.0  //opamp input
#define OP_R_FEEDBACK 3900.0  //opamp feedback
#define OP_R_OUT_LOW 180.0  //opamp out low
#define OP_R_OUT_HIGH 470.0  //opamp out high
#define OP_REF 5.0  //opamp reference voltage

//FB UART
#define FB0_UART USART3
#define FB0_UART_RCC RCC_APB1Periph_USART3
#define FB0_UART_CLOCK_COMMAND RCC_APB1PeriphClockCmd

#define FB0_UART_RX_DMA DMA1_Stream1
#define FB0_UART_RX_DMA_CHAN DMA_Channel_4
#define FB0_UART_RX_DMA_TCIF DMA_FLAG_TCIF1

#define FB0_UART_TX_DMA DMA1_Stream3
#define FB0_UART_TX_DMA_CHAN DMA_Channel_4
#define FB0_UART_TX_DMA_TCIF DMA_FLAG_TCIF3

#define FB0_UART_RX_PIN GPIO_Pin_11
#define FB0_UART_RX_PORT GPIOB
#define FB0_UART_RX_PIN_SOURCE GPIO_PinSource11
#define FB0_UART_RX_AF_SOURCE GPIO_AF_USART3

#define FB0_UART_TX_PIN GPIO_Pin_10
#define FB0_UART_TX_PORT GPIOB
#define FB0_UART_TX_PIN_SOURCE GPIO_PinSource10
#define FB0_UART_TX_AF_SOURCE GPIO_AF_USART3

//HV UART
#define UART_DRV USART2
#define UART_DRV_RCC RCC_APB1Periph_USART2
#define UART_DRV_CLOCK_COMMAND RCC_APB1PeriphClockCmd

#define UART_DRV_RX_DMA DMA1_Stream5
#define UART_DRV_RX_DMA_CHAN DMA_Channel_4
#define UART_DRV_RX_DMA_TCIF DMA_FLAG_TCIF5

#define UART_DRV_TX_DMA DMA1_Stream6
#define UART_DRV_TX_DMA_CHAN DMA_Channel_4
#define UART_DRV_TX_DMA_TCIF DMA_FLAG_TCIF6

#define UART_DRV_RX_PIN GPIO_Pin_3
#define UART_DRV_RX_PORT GPIOA
#define UART_DRV_RX_PIN_SOURCE GPIO_PinSource3
#define UART_DRV_RX_AF_SOURCE GPIO_AF_USART2

#define UART_DRV_TX_PIN GPIO_Pin_2
#define UART_DRV_TX_PORT GPIOA
#define UART_DRV_TX_PIN_SOURCE GPIO_PinSource2
#define UART_DRV_TX_AF_SOURCE GPIO_AF_USART2

#define FB0_A_PIN GPIO_Pin_6
#define FB0_A_PIN_SOURCE GPIO_PinSource6
#define FB0_A_PORT GPIOC

#define FB0_B_PIN GPIO_Pin_7
#define FB0_B_PIN_SOURCE GPIO_PinSource7
#define FB0_B_PORT GPIOC
//TODO: PB10 Z TX, resolver out
#define FB0_Z_PIN GPIO_Pin_11
#define FB0_Z_PIN_SOURCE GPIO_PinSource11
#define FB0_Z_PORT GPIOB

#define FB0_Z_TXEN_PIN GPIO_Pin_12
#define FB0_Z_TXEN_PORT GPIOB

#define FB0_ENC_TIM TIM3
#define FB0_ENC_TIM_AF GPIO_AF_TIM3
#define FB0_ENC_TIM_RCC RCC_APB1Periph_TIM3

#define FB0_RES_TIM TIM2
#define FB0_RES_TIM_AF GPIO_AF_TIM2  //sync to slave timer for resolver
#define FB0_RES_TIM_RCC RCC_APB1Periph_TIM2

#define TIM_MASTER TIM4
#define TIM_MASTER_RCC RCC_APB1Periph_TIM4
#define TIM_MASTER_ADC_OC_INIT TIM_OC4Init
#define TIM_MASTER_ADC_OC_PRELOAD TIM_OC4PreloadConfig
#define TIM_MASTER_ADC ADC_ExternalTrigConv_T4_CC4

#define TIM_SLAVE TIM2
#define TIM_SLAVE_RCC RCC_APB1Periph_TIM2
#define TIM_SLAVE_ITR TIM_TS_ITR3
#define TIM_SLAVE_IRQ TIM2_IRQn
#define TIM_SLAVE_HANDLER TIM2_IRQHandler

#elif defined V4

//sample times for F4: 3,15,28,56,84,112,144,480
#define RES_SampleTime ADC_SampleTime_3Cycles

// ADC_TIMER_FREQ / RES_TIMER_FREQ / ADC_TR_COUNT \in \N
#define ADC_TR_COUNT 6  // ADC_TR_COUNT * (ADC_OVER_FB0 + ADC_OVER_FB1) == 60
#define PID_WAVES 4
#define ADC_OVER_FB0 9
#define ADC_OVER_FB1 1
#define ADC_TIMER_FREQ 84000000
#define RES_TIMER_FREQ 20000

#define FB0_SIN_ADC ADC1
#define FB0_SIN_ADC_RCC RCC_APB2Periph_ADC1
#define FB0_SIN_ADC_CHAN ADC_Channel_6
#define FB0_SIN_PIN GPIO_Pin_6
#define FB0_SIN_PORT GPIOA

#define FB0_COS_ADC ADC2
#define FB0_COS_ADC_RCC RCC_APB2Periph_ADC2
#define FB0_COS_ADC_CHAN ADC_Channel_7
#define FB0_COS_PIN GPIO_Pin_7
#define FB0_COS_PORT GPIOA

#define FB1

#define FB1_SIN_ADC ADC1
#define FB1_SIN_ADC_RCC RCC_APB2Periph_ADC1
#define FB1_SIN_ADC_CHAN ADC_Channel_4
#define FB1_SIN_PIN GPIO_Pin_4
#define FB1_SIN_PORT GPIOA

#define FB1_COS_ADC ADC2
#define FB1_COS_ADC_RCC RCC_APB2Periph_ADC2
#define FB1_COS_ADC_CHAN ADC_Channel_5
#define FB1_COS_PIN GPIO_Pin_5
#define FB1_COS_PORT GPIOA

#define ADC_REF 3.3  //analog reference voltage
#define ADC_RES 4096.0  //analog resolution, 12 bit

#define OP_R_INPUT 10000.0  //opamp input
#define OP_R_FEEDBACK 15000.0  //opamp feedback
#define OP_R_OUT_LOW 470.0  //opamp out low
#define OP_R_OUT_HIGH 22.0  //opamp out high
#define OP_REF 1.83  //opamp reference voltage

//FB UART
#define FB0_UART USART6
#define FB0_UART_RCC RCC_APB2Periph_USART6
#define FB0_UART_CLOCK_COMMAND RCC_APB2PeriphClockCmd

#define FB0_UART_RX_DMA DMA2_Stream1
#define FB0_UART_RX_DMA_CHAN DMA_Channel_5
#define FB0_UART_RX_DMA_TCIF DMA_FLAG_TCIF1

#define FB0_UART_TX_DMA DMA2_Stream6
#define FB0_UART_TX_DMA_CHAN DMA_Channel_5
#define FB0_UART_TX_DMA_TCIF DMA_FLAG_TCIF6

//v4 does not have dedicated rx pin, use pc6 as rx and tx.
//#define FB0_UART_RX_PIN GPIO_Pin_11
//#define FB0_UART_RX_PORT GPIOB
//#define FB0_UART_RX_PIN_SOURCE GPIO_PinSource11
//#define FB0_UART_RX_AF_SOURCE GPIO_AF_USART3

#define FB0_UART_TX_PIN GPIO_Pin_6
#define FB0_UART_TX_PORT GPIOC
#define FB0_UART_TX_PIN_SOURCE GPIO_PinSource6
#define FB0_UART_TX_AF_SOURCE GPIO_AF_USART6

//HV UART
#define UART_DRV USART2
#define UART_DRV_RCC RCC_APB1Periph_USART2
#define UART_DRV_CLOCK_COMMAND RCC_APB1PeriphClockCmd

#define UART_DRV_RX_DMA DMA1_Stream5
#define UART_DRV_RX_DMA_CHAN DMA_Channel_4
#define UART_DRV_RX_DMA_TCIF DMA_FLAG_TCIF5

#define UART_DRV_TX_DMA DMA1_Stream6
#define UART_DRV_TX_DMA_CHAN DMA_Channel_4
#define UART_DRV_TX_DMA_TCIF DMA_FLAG_TCIF6

#define UART_DRV_RX_PIN GPIO_Pin_3
#define UART_DRV_RX_PORT GPIOA
#define UART_DRV_RX_PIN_SOURCE GPIO_PinSource3
#define UART_DRV_RX_AF_SOURCE GPIO_AF_USART2

#define UART_DRV_TX_PIN GPIO_Pin_2
#define UART_DRV_TX_PORT GPIOA
#define UART_DRV_TX_PIN_SOURCE GPIO_PinSource2
#define UART_DRV_TX_AF_SOURCE GPIO_AF_USART2

// CMD
#define CMD_ENC_TIM TIM2
#define CMD_ENC_TIM_AF GPIO_AF_TIM2
#define CMD_ENC_TIM_RCC RCC_APB1Periph_TIM2

#define CMD_A_PIN GPIO_Pin_15
#define CMD_A_PIN_SOURCE GPIO_PinSource15
#define CMD_A_PORT GPIOA

#define CMD_B_PIN GPIO_Pin_3
#define CMD_B_PIN_SOURCE GPIO_PinSource3
#define CMD_B_PORT GPIOB

#define CMD_C_PIN GPIO_Pin_5
#define CMD_C_PIN_SOURCE GPIO_PinSource5
#define CMD_C_PORT GPIOB

#define CMD_D_PIN GPIO_Pin_8
#define CMD_D_PIN_SOURCE GPIO_PinSource8
#define CMD_D_PORT GPIOB

#define CMD_A_EN_PIN GPIO_Pin_6
#define CMD_A_EN_PIN_SOURCE GPIO_PinSource6
#define CMD_A_EN_PORT GPIOB

#define CMD_B_EN_PIN GPIO_Pin_7
#define CMD_B_EN_PIN_SOURCE GPIO_PinSource7
#define CMD_B_EN_PORT GPIOB

#define CMD_C_EN_PIN GPIO_Pin_9
#define CMD_C_EN_PIN_SOURCE GPIO_PinSource9
#define CMD_C_EN_PORT GPIOB

#define CMD_D_EN_PIN GPIO_Pin_2
#define CMD_D_EN_PIN_SOURCE GPIO_PinSource2
#define CMD_D_EN_PORT GPIOB

//FB0 TIM4
#define FB0_A_PIN GPIO_Pin_12
#define FB0_A_PIN_SOURCE GPIO_PinSource12
#define FB0_A_PORT GPIOD

#define FB0_B_PIN GPIO_Pin_13
#define FB0_B_PIN_SOURCE GPIO_PinSource13
#define FB0_B_PORT GPIOD

#define FB0_Z_PIN GPIO_Pin_14
#define FB0_Z_PIN_SOURCE GPIO_PinSource14
#define FB0_Z_PORT GPIOD

#define FB0_A_EN_PIN GPIO_Pin_11
#define FB0_A_EN_PIN_SOURCE GPIO_PinSource11
#define FB0_A_EN_PORT GPIOD

#define FB0_B_EN_PIN GPIO_Pin_10
#define FB0_B_EN_PIN_SOURCE GPIO_PinSource10
#define FB0_B_EN_PORT GPIOD

#define FB0_Z_EN_PIN GPIO_Pin_15
#define FB0_Z_EN_PIN_SOURCE GPIO_PinSource15
#define FB0_Z_EN_PORT GPIOD

#define FB0_Z_TXEN_PIN GPIO_Pin_15
#define FB0_Z_TXEN_PORT GPIOD

#define FB0_ENC_TIM TIM4
#define FB0_ENC_TIM_AF GPIO_AF_TIM4
#define FB0_ENC_TIM_RCC RCC_APB1Periph_TIM4

#define FB0_RES_TIM TIM4
#define FB0_RES_TIM_AF GPIO_AF_TIM4  //sync to slave timer for resolver
#define FB0_RES_TIM_RCC RCC_APB1Periph_TIM4
//FB1, TIM1
#define FB1_A_PIN GPIO_Pin_9
#define FB1_A_PIN_SOURCE GPIO_PinSource9
#define FB1_A_PORT GPIOE

#define FB1_B_PIN GPIO_Pin_11
#define FB1_B_PIN_SOURCE GPIO_PinSource11
#define FB1_B_PORT GPIOE

#define FB1_Z_PIN GPIO_Pin_13
#define FB1_Z_PIN_SOURCE GPIO_PinSource13
#define FB1_Z_PORT GPIOE

#define FB1_Z_TXEN_PIN GPIO_Pin_14
#define FB1_Z_TXEN_PIN_SOURCE GPIO_PinSource14
#define FB1_Z_TXEN_PORT GPIOE

#define FB1_ENC_TIM TIM1
#define FB1_ENC_TIM_AF GPIO_AF_TIM1
#define FB1_ENC_TIM_RCC RCC_APB2Periph_TIM1

#define TIM_MASTER TIM3
#define TIM_MASTER_RCC RCC_APB1Periph_TIM3
#define TIM_MASTER_ADC_OC_INIT TIM_OC1Init
#define TIM_MASTER_ADC_OC_PRELOAD TIM_OC1PreloadConfig
#define TIM_MASTER_ADC ADC_ExternalTrigConv_T3_CC1

#define TIM_SLAVE TIM5
#define TIM_SLAVE_RCC RCC_APB1Periph_TIM5
#define TIM_SLAVE_ITR TIM_TS_ITR1
#define TIM_SLAVE_IRQ TIM5_IRQn
#define TIM_SLAVE_HANDLER TIM5_IRQHandler

#else

#error "No hardware version defined"

#endif
