// IO.c
// This software configures the switch and LED
// You are allowed to use any switch and any LED, 
// although the Lab suggests the SW1 switch PF4 and Red LED PF1
// Runs on LM4F120 or TM4C123
// Program written by: Franklin Mao & Ronak Patel
// Date Created: March 30, 2018
// Last Modified:  4/2/19
// Lab number: 7


#include "../inc/tm4c123gh6pm.h"
#include <stdint.h>

//------------IO_Init------------
// Initialize GPIO Port for a switch and an LED
// Input: none
// Output: none
void IO_Init(void) {
  SYSCTL_RCGCGPIO_R |= 0X20;
	while((SYSCTL_RCGCGPIO_R&0X20)==0){
	}
	GPIO_PORTF_LOCK_R=GPIO_LOCK_KEY;
	GPIO_PORTF_CR_R|=0x1F;
	GPIO_PORTF_DIR_R&= ~0X10;
	GPIO_PORTF_DIR_R|= 0X06;
	GPIO_PORTF_DEN_R|=0X16;
	GPIO_PORTF_PUR_R|=0X10;
	SYSCTL_RCGCGPIO_R |= 0X10;
	while((SYSCTL_RCGCGPIO_R&0X010)==0){
	}
	GPIO_PORTE_DIR_R |=0X00;
	GPIO_PORTE_DEN_R |=0X0F;
	
	
}

//------------IO_HeartBeat------------
// Toggle the output state of the  LED.
// Input: none
// Output: none
void IO_HeartBeat(void) {
	GPIO_PORTF_DATA_R^=0X04;
}


//------------IO_Touch------------
// wait for release and press of the switch
// Delay to debounce the switch
// Input: none
// Output: none
void IO_Touch(void) {
	while(((GPIO_PORTF_DATA_R&0X10)>>4)==1){
	}
	for(int i=0;i<1600000;i++){
	}																	//delay for 20ms
	while(((GPIO_PORTF_DATA_R&0x10)>>4)==0){
	}
 // --UUU-- wait for release; delay for 20ms; and then wait for press
}  

