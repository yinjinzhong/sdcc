/*
Project:
Compiler:MCS-51 MCU SDCC Compiler
 */

#include "main.h"
#include "delay.h"

void main(void)
{
    LED01 = 0;
    LEDFlash = 1;

    timer0_update();

    while(1)
    {
        if(TF0)
        {
            LED01 ^= 1;
            LEDFlash ^= 1;

	    delay(1000);
            timer0_update();
        }


    }
}

void timer0_init(void)
{
    TMOD &= 0xF0;
    TMOD |= 0x01;
    TF0  = 1;
    TR0  = 1;
}

void timer0_update(void)
{
    TF0  = 0;
    TL0  = 0x00;
    TH0  = 0xC0;
}
