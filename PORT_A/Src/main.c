volatile unsigned int *RCC_CR     =(volatile unsigned int*)0X40023800;
volatile unsigned int *RCC_CFGR   =(volatile unsigned int*)0x40023808;
volatile unsigned int *RCC_AHB1ENR=(volatile unsigned int*)0x40023830;

volatile unsigned int *GPIOB_MODER=(volatile unsigned int*)0x40020000;
volatile unsigned int *GPIOB_ODR  =(volatile unsigned int*)0x40020014;

int main()
{
	*RCC_CR     &= ~(1<<16);
	*RCC_CR     |=  (1<<16);

	*RCC_CFGR   &= ~(1<<3);
	*RCC_CFGR   |=  (1<<3);

	*RCC_AHB1ENR |=  (1<<0);

	*GPIOB_MODER &= ~(1<<0);
	*GPIOB_MODER |=  (1<<0);

	*GPIOB_ODR  |=  (1<<0);

	*GPIOB_MODER &= ~(1<<2);
	*GPIOB_MODER |=  (1<<2);

	*GPIOB_ODR  |=  (1<<1);

	*GPIOB_MODER &= ~(1<<4);
	*GPIOB_MODER |=  (1<<4);

	*GPIOB_ODR  |=  (1<<2);

	*GPIOB_MODER &= ~(1<<6);
	*GPIOB_MODER |=  (1<<6);

	*GPIOB_ODR  |=  (1<<3);

	*GPIOB_MODER &= ~(1<<8);
	*GPIOB_MODER |=  (1<<8);

	*GPIOB_ODR  |=  (1<<4);

	*GPIOB_MODER &= ~(1<<10);
	*GPIOB_MODER |=  (1<<10);

	*GPIOB_ODR  |=  (1<<5);

	*GPIOB_MODER &= ~(1<<12);
	*GPIOB_MODER |=  (1<<12);

	*GPIOB_ODR  |=  (1<<6);

	*GPIOB_MODER &= ~(1<<14);
	*GPIOB_MODER |=  (1<<14);

	*GPIOB_ODR  |=  (1<<7);

	*GPIOB_MODER &= ~(1<<16);
	*GPIOB_MODER |=  (1<<16);

	*GPIOB_ODR  |=  (1<<8);
}
