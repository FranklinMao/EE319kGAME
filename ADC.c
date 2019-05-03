// ADC.c
// Runs on LM4F120/TM4C123
// Provide functions that initialize ADC0
// Last Modified: 11/6/2018
// Student names: Franklin Mao & Ronak Patel
// Last modification date: change this to the last modification date or look very silly

#include <stdint.h>
#include "../inc/tm4c123gh6pm.h"

// ADC initialization function 
// Input: none
// Output: none
// measures from PD2, analog channel 5
void ADC_Init(void){ 
	SYSCTL_RCGCGPIO_R |= 0x08;
	int volatile ddelay = 4444;
	GPIO_PORTD_DIR_R &= ~0x04;
	GPIO_PORTD_DEN_R |= 0x04;
	SYSCTL_RCGCADC_R |= 0x01;				//active adc0
	int volatile cdelay = 4444;
	ADC0_PC_R = 0x01;			// configure for 125k
	ADC0_SSPRI_R = 0x0123;	// seq 3 is highest priority
	ADC0_ACTSS_R &= ~0x0008;		// disable sample sequencer 3
	ADC0_EMUX_R &= ~0xF000;			// seq3 is software trigger
	ADC0_SSMUX3_R = (ADC0_SSMUX3_R &0xfffffffF0)+5;		// Ain5 (PD2)
	ADC0_SSCTL3_R = 0x0006;		// no TS0 D0, yes IE0 END0
	ADC0_IM_R &= ~0x0008;			// disable SS3 interrupts
	ADC0_ACTSS_R  |= 0x0008;		// enable sample sequencers 3

}

//------------ADC_In------------
// Busy-wait Analog to digital conversion
// Input: none
// Output: 12-bit result of ADC conversion
// measures from PD2, analog channel 5
uint32_t ADC_In(void){  
//	GPIO_PORTF_DATA_R^=0x04;
	uint32_t data;
	ADC0_PSSI_R = 0x0008;				// start a sample collection
	while((ADC0_RIS_R&0x08)==0){};			//wait for flag to be set/ready
	data = ADC0_SSFIFO3_R &0xFFF;			// read sample
	ADC0_ISC_R = 0x008;				//clear flag
  return data;
}


