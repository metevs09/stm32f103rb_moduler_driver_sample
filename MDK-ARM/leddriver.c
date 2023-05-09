/*
 * leddriver.c
 *
 * Created on: 07.05.2023
 *   
 *   Author: Metehan Kemal KAYAALP
 *
 *
 */

#include "stm32f1xx_hal.h"

void leddriver_init(void){
	
	RCC->APB2ENR |=(1<<3);
	
	GPIOB->CRL &= ~(1<<0);
	GPIOB->CRL |=(1<<1);
	
	GPIOB->CRL |=(1<<2);
	GPIOB->CRL &= ~(1<<3);

}
void leddriver_on(void){
	
	GPIOB->BRR = (1<<0);

}
void leddriver_off(void){
	
	GPIOB->BSRR = (1<<0);

}