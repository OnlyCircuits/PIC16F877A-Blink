/*
 * File:   BLink.c
 * Author: OnlyCircuits
 */
#define _XTAL_FREQ 8000000              //Frecuencia del cristal

#include <xc.h>                         //Librería estándar 
#include "pic16f877a_configuration.h"   //Define los fusibles 

void main(void) {
    
    TRISD = 0x00;                       //Puerto D como salida
    PORTD = 0x00;                       //Puerto D en bajo
    
    while(1)
    {
        PORTD ^= 0x02;                  //Conmuta RD1
        __delay_ms(500);                //Retardo
    }
    return;
}