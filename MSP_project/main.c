#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
    int i = 0;
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return 0;
}
