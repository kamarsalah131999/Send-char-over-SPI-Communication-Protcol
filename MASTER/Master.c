/*
 * Master.c
 *
 * Created: 6/16/2023 5:22:14 AM
 * Author : kamar
 */ 

#include <avr/io.h>
#include "SPI driver.h"
#define F_CPU 8000000UL
#include <util/delay.h>


int main(void)
{
    SPI_MasterInit();
	unsigned char counter=0;
	
	while (counter<10)
	{
		SPI_MasterTransmitchar(counter+48);
		_delay_ms(250);
		counter++;
	}
    
    
}

