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
	mcp2515_set_register(CANINTE,(1 << RX1IE) | (1 << RX0IE));
    mcp2515_set_register(BFPCTRL, (1 << B0BFE) | (1 << B0BFM));
	mcp2515_set_mode(REQOP_NORMAL);

	can_frame_t frm;

	frm.SID = 0x140+1;
	frm.header.rtr = 0;
	frm.header.len = 8;
	frm.data[0] = 0x30;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;
	frm.data[0] = 0x00;

	mcp2515_load_message(TXB0ADDR, &frm);
	mcp2515_request_to_send(TXB0ADDR);
	
	while(1) {
		// Here be dragons
	}

	return 0;
}
