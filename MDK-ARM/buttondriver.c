/*
 * buttondriver.c
 *
 * Created on: 07.05.2023
 *   
 *   Author: Metehan Kemal KAYAALP
 *
 *
 */
 
 #include "stm32f1xx_hal.h"

void buttondriver_init(){
	
	RCC->APB2ENR |=(1<<2);
	
	GPIOA->CRL &= ~(1<<0);
	GPIOA->CRL &= ~(1<<1);
	
	GPIOA->CRL &= ~(1<<2);
	GPIOA->CRL |= (1<<3);
	

}
int buttondriver_get_state(){

	if (!(GPIOA->IDR & (1<<0)))
		 {
			 
		 return 1;
			 
	   }
	else{
	     
		 return 0; 
	   
     	}
}