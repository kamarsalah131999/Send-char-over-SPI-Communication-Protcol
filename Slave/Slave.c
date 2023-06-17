/*
 * Slave.c
 *
 * Created: 6/16/2023 6:07:49 AM
 * Author : kamar
 */ 

#include <avr/io.h>
#include "SPI driver.h"
#include "LCD driver.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
   SPI_SlaveInit();
   LCD_vinit ();
   unsigned char x=0x30;
   unsigned char z=0;
   
   while (z<10)
   {
	   x= SPI_SlaveResivechar(x);
	   LCD_vsend_char (x);
	   z++;
   }
    
}

