/*
 * First_Challenge.c
 *
 * Created: 17/01/2020 12:59:52 م
 *  Author: mo
 */ 
#include "softwareDelay.h"
#include "gpio.h"
#include "registers.h"
#include "std_types.h"
#include "led.h"
#include "ledConfig.h"
#include "pushButton.h"
#include "pushButtonConfig.h"
int main()

{//gpioPinDirection(BTN_0_GPIO,BTN_0_BIT,LOW);
pushButtonInit(BTN_0);
pushButtonInit(BTN_2);
pushButtonInit(BTN_1);
pushButtonInit(BTN_3);
//gpioPinDirection(LED_0_GPIO,LED_0_BIT,HIGH);
Led_Init(LED_0);
Led_Init(LED_1);
//Led_Init(LED_2);
//Led_Init(LED_3);

while (1)
{//Led_On(LED_0);

//if ((gpioPinRead(GPIOC,BIT4) == Pressed)&&(gpioPinRead(GPIOB,BIT2) == Pressed))
if ((pushButtonGetStatus(BTN_0))&&(pushButtonGetStatus(BTN_1)))
{
	Led_On(LED_0);
Led_On(LED_1);
//PORTD_DATA=255;
//gpioPinWrite(LED_0_GPIO,LED_0_BIT,HIGH);
}
else{
Led_Off(LED_0);
Led_Off(LED_1);
}
	
}

}