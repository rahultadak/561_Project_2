#include <MKL25Z4.H>
#include "triggers.h"

void Init_Triggers(void)
{
	// Enable clock to ports B and D
	SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
	
	PORTB->PCR[8] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[8] |= PORT_PCR_MUX(1) | PORT_PCR_PE_MASK | PORT_PCR_PS_MASK;          
	PORTB->PCR[9] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[9] |= PORT_PCR_MUX(1) | PORT_PCR_PE_MASK | PORT_PCR_PS_MASK;
}
