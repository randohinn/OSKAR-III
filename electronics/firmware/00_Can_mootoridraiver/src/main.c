/*
	CAN Mootorite draiver
	November 2020
	Rando Hinn, SA Teaduskeskus AHHAA
*/
#include <include/spi.h>
#include <include/mcp2515.h>

int main() {
	
	SPI_init();

	mcp2515_set_mode(REQOP_CONFIG);
	

	/* https://www.kvaser.com/support/calculators/bit-timing-calculator/ */
	mcp2515_set_register(CNF1, 0x01);
	mcp2515_set_register(CNF2, 0xAC);
	mcp2515_set_register(CNF3, 0x03);


	mcp2515_set_mode(REQOP_NORMAL);
	
	while(1) {
		// Here be dragons
	}

	return 0;
}
