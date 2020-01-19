/*
 * state_machine.c
 *
 * Created: 18/01/2020 09:29:54 م
 *  Author: mo
 */ 
#include "registers.h"
#include "std_types.h"
#include "gpio.h"
#include "led.h"
#include "ledConfig.h"
#include "softwareDelay.h"

int main(void)
{
	Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);
	
    while(1)
    {
		Led_On(LED_1);
		softwareDelayMs(1000);
		Led_Off(LED_1);
		Led_On(LED_3);
		softwareDelayMs(1000);
		Led_Off(LED_3);
		Led_On(LED_2);
		softwareDelayMs(1000);
		Led_Off(LED_2);
        //TODO:: Please write your application code 
    }
}