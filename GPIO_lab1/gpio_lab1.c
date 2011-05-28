#include <htc.h>

 //----------------------CONFIGURE DEVICE--------------------
 __CONFIG(FOSC_INTRCIO & WDTE_OFF & PWRTE_OFF & MCLRE_OFF & 
		 CP_OFF & CPD_OFF & BOREN_OFF & IESO_OFF & FCMEN_OFF);

/** PRIVATE PROTOTYPES *********************************************/
static void initialize (void);
static void do_outputs (void);

/** SOFTWARE CONTROL LOOP CODE *************************************/
void
main (void)
{
	initialize ();
	do_outputs ();
	while (1);
}

static void
initialize (void)
{
	PORTC = 0b00000000;

	ANS4 = 0;
	ANS5 = 0;
	ANS6 = 0;
	ANS7 = 0;
	ANS8 = 0;
	ANS9 = 0;

	TRISC0 = 0;
	TRISC1 = 0;
	TRISC2 = 0;
	TRISC3 = 0;
	TRISC4 = 0;
	TRISC5 = 0;
	TRISC6 = 0;
	TRISC7 = 0;
}

static void
do_outputs (void)
{
	RC0 = 1;
	RC1 = 0;
	RC2 = 1;
	RC3 = 1;
	RC4 = 0;
	RC5 = 1;
	RC6 = 0;
	RC7 = 1;
}
