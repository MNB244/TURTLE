#include "tortuga.h"
#include "stm32f4xx_hal_gpio.h"

uint16_t t= 0;

void set() 
{
    HAL_GPIO_WritePin(GPIOA, IZQ1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER3_Pin, GPIO_PIN_SET);
}

void adelante(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, IZQ1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, IZQ2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, DER3_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void atras(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, IZQ1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, IZQ3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, DER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER3_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void izquierda(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, IZQ1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, IZQ3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, DER3_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void derecha(uint16_t t) 
{
    HAL_GPIO_WritePin(GPIOA, IZQ1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, IZQ2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, IZQ3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, DER2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, DER3_Pin, GPIO_PIN_SET);
    HAL_Delay(t);
    set();
}

void secuencia()
{
    set();
    adelante(1500);
    derecha(500);
    adelante(2500);
    izquierda(500);
    atras(1500);
    izquierda(500);
    adelante(2500);
    derecha(500);
}