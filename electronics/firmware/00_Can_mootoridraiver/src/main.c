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

	

	mcp2515_set_mode(REQOP_NORMAL);
	
	while(1) {
		// Here be dragons
	}

	return 0;
}