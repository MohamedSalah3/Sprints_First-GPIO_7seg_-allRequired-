/*
 * REQ8_APP.c
 *
 * Created: 18/01/2020 09:38:18 م
 *  Author: mo
 */ 


#include "registers.h"
#include "gpio.h"
#include "softwareDelay.h"
#include "led.h"
#include "ledConfig.h"
#include "pushButton.h"
#include "pushButtonConfig.h"
#include "std_types.h"
#define MAX 2
#define START 0
int main(void)
{
	uint8_t local_counter=START;
	Led_Init(LED_0);
	
	pushButtonInit(BTN_0);
    while(1)
    {
	if (pushButtonGetStatus(BTN_0))
	{
	Led_On(LED_0);	
	for(local_counter = START;local_counter<MAX;local_counter++)
{	softwareDelayMs(500);
		if (pushButtonGetStatus(BTN_0))
		{
			softwareDelayMs(1000);
		}
	}
	}
	else
	{
	Led_Off(LED_0);
	
	}
	
	
	}
}