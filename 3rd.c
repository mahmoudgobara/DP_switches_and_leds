/*
 * 3rd.c
 *
 *  Created on: Jul 12, 2018
 *      Author: mahmoued
 */
#define F_CPU 12000000
#include<avr/io.h>
#include<avr/delay.h>
void main(void){
	DDRC = 0b11110000;
	PORTC = 0b00001111;
	DDRA = 0b11111111;
	PORTA = 0b00000000;
	//Super Loop//
	while(1){
    	//Activate column 0//
	if(( PINC & 0b00000001) == 0) {
	PORTA = 0b00000001;
	}

	else if((PINC & 0b00000010) == 0) {
	   PORTA = 0b00000010;
   }
	else if((PINC & 0b00000011) == 0){
		   PORTA = 0b00000011;
		}

	else if((PINC & 0b00000100) == 0) {
	   PORTA = 0b00000100;
   }
	else if((PINC & 0b00000101) == 0){
		   PORTA = 0b00000101;
			}
	else if((PINC & 0b00000110) == 0){
		   PORTA = 0b00000110;
				}
	else if((PINC & 0b00000111) == 0){
			   PORTA = 0b00000111;
					}
	else if((PINC & 0b00001000) == 0) {
 	   PORTA = 0b00001000;
    }
	else if((PINC & 0b00001001) == 0){
	   PORTA = 0b00001001;
		}
	else if((PINC & 0b00001010) == 0){
	   PORTA = 0b00001010;
				}
	else if((PINC & 0b00001100) == 0){
	   PORTA = 0b00001100;
				}
	else if((PINC & 0b00001110) == 0){
		   PORTA = 0b00001110;
	}
    else if((PINC & 0b00001111) == 0) {
       PORTA = 0b00001111;
    	}
    else {
       PORTA = 0b00000000;
    }

	}

}

