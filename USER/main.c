/*#include "stm32f4xx.h"
  
void Delay(__IO uint32_t nCount);

void Delay(__IO uint32_t nCount)
{
  while(nCount--){}
}

int main(void)
{

  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
  GPIO_Init(GPIOF, &GPIO_InitStructure);

  while(1){
		GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
		Delay(0x7FFFFF);
		GPIO_ResetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
		Delay(0x7FFFFF);
	
	}
}*/


#include "led.h"

#include "beep.h"

#include "stm32f4xx.h"

#include "delay.h"

int main(void)
{
	delay_init(168);

//	LED_Init();
	
	BEEP_Init();
	
		
	while(1)
	{
	
	//led
//		GPIO_SetBits(GPIOF,GPIO_Pin_9);
		
//		delay_ms(500);
		
//		GPIO_SetBits(GPIOF,GPIO_Pin_10 );
		
//		delay_ms(2000);
		
//		GPIO_ResetBits(GPIOF,GPIO_Pin_9 );

//		delay_ms(1000);
		
//		GPIO_ResetBits(GPIOF,GPIO_Pin_9 | GPIO_Pin_10);


		//·äÃùÆ÷

//		GPIO_SetBits(GPIOF, GPIO_Pin_8);
//		
//		delay_ms(500);
//		
//		GPIO_ResetBits(GPIOF, GPIO_Pin_8);
//		
//		delay_ms(500);

	}
}


