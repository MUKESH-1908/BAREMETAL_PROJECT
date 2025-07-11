volatile unsigned int *RCC_CR     =(volatile unsigned int*)0X40023800;
volatile unsigned int *RCC_CFGR   =(volatile unsigned int*)0x40023808;
volatile unsigned int *RCC_AHB1ENR=(volatile unsigned int*)0x40023830;

volatile unsigned int *GPIOA_MODER=(volatile unsigned int*)0x40020000;
volatile unsigned int *GPIOA_ODR  =(volatile unsigned int*)0x40020014;

void delay()
{
    for (unsigned int i = 0; i < 90000; i++) __asm("NOP");
}

int main(void)
{
	*RCC_CR     &= ~(1<<16);
	*RCC_CR     |=  (1<<16);
	 while (!(*RCC_CR & (1 << 17)));

	*RCC_CFGR   &= ~(1<<0);
	*RCC_CFGR   |=  (1<<0);
	 while (((*RCC_CFGR >> 2) & 0x3) != 1);

	*RCC_AHB1ENR |=  (1<<0);

	*GPIOA_MODER &= ~(1<<0);
	*GPIOA_MODER |=  (1<<0);

	while(1)
	{

	*GPIOA_ODR  &=  ~(1<<0);
	delay(100000);
	*GPIOA_ODR  |=   (1<<0);
	delay(300);


	*GPIOA_MODER &= ~(1<<2);
	*GPIOA_MODER |=  (1<<2);



	*GPIOA_ODR  &= ~(1<<1);
	delay(200000);
	*GPIOA_ODR  |=  (1<<1);
	delay(400);


	*GPIOA_MODER &= ~(1<<4);
	*GPIOA_MODER |=  (1<<4);


	*GPIOA_ODR  &= ~(1<<2);
	delay(300000);
	*GPIOA_ODR  |=  (1<<2);
	delay(500);


	*GPIOA_MODER &= ~(1<<6);
	*GPIOA_MODER |=  (1<<6);


	*GPIOA_ODR  &= ~(1<<3);
	delay(400000);
	*GPIOA_ODR  |=  (1<<3);
	delay(600);


	*GPIOA_MODER &= ~(1<<8);
	*GPIOA_MODER |=  (1<<8);


	*GPIOA_ODR  &= ~(1<<4);
	delay(500000);
	*GPIOA_ODR  |=  (1<<4);
	delay(700);


	*GPIOA_MODER &= ~(1<<10);
	*GPIOA_MODER |=  (1<<10);


	*GPIOA_ODR  &= ~(1<<5);
	delay(600000);
	*GPIOA_ODR  |=  (1<<5);
    delay(800);


	*GPIOA_MODER &= ~(1<<12);
	*GPIOA_MODER |=  (1<<12);


	*GPIOA_ODR  &= ~(1<<6);
	delay(700000);
	*GPIOA_ODR  |=  (1<<6);
	delay(900);


	*GPIOA_MODER &= ~(1<<14);
	*GPIOA_MODER |=  (1<<14);


	*GPIOA_ODR  &= ~(1<<7);
	delay(800000);
	*GPIOA_ODR  |=  (1<<7);
	delay(100);

	}
}
