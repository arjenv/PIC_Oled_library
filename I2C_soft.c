/**********************************
*
*	I2C (software) routines
*
*	ARV November 2025
*
**********************************/



#include <htc.h>
#include "I2C_soft.h"

void I2C_startBit(void)
{
    SDA=0;
    __delay_us(5);
    SCL=0;

}

//Software I2C
void I2C_sendData(unsigned char dataB)
{
    for(unsigned char b=0;b<8;b++){
       SDA=(dataB >> (7-b)) % 2;
       I2C_clock();
    }
    SDA_DIR=1;   //SDA input
    I2C_clock();
    __delay_us(5);
    SDA_DIR=0;   //SDA output

}

void I2C_clock(void)
{
   __delay_us(1);
   SCL=1;
   __delay_us(5);
   SCL=0;
   __delay_us(1);
}

void I2C_stopBit(void)
{
    SCL=1;
    __delay_us(5);
    SDA=1;

}

void init_I2C() {
	SDA_DIR = 0; // set to output
	SCL_DIR = 0;
    SCL=1;	
    SDA=1;
}