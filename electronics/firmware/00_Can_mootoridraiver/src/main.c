/*
	CAN Mootorite draiver
	November 2020
	Rando Hinn, SA Teaduskeskus AHHAA
*/
#include <include/spi.h>
#include <include/mcp2515.h>
#define F_CPU 8000000U
#include <util/delay.h>



int main() {
	
    uint8_t blink_debug = 0;
    
	DDRB |= (1 << DDB1);
	
	SPI_init();
	
    mcp2515_set_mode(REQOP_CONFIG);
    PORTB |= (1 << PINB1);

    while(!(mcp2515_read_register(CANSTAT) & 0x80)){};
	PORTB &= ~(1 << PINB1);

    
    /* https://www.intrepidcs.com/products/free-tools/mb-time-calculator/  (16mhz, 1Mbps) */
	uint8_t cnf1 = 0x00;
	uint8_t cnf2 = 0x91;
	uint8_t cnf3 = 0x01;

	mcp2515_set_register(CNF1, cnf1);
	mcp2515_set_register(CNF2, cnf2);
	mcp2515_set_register(CNF3, cnf3);
	
	if(mcp2515_verify_register(CNF1, cnf1) && mcp2515_verify_register(CNF2, cnf2) && mcp2515_verify_register(CNF3, cnf3)){
		mcp2515_set_mode(REQOP_NORMAL);
        while(!(mcp2515_read_register(CANSTAT) == 0x00)){};
	} else {
		blink_debug = 1;
	}
	
	

	can_frame_t frm;
    
    uint8_t id = 0;

	frm.SID = 0x140+id;
	frm.header.rtr = 0;
	frm.header.len = 8;
	frm.data[0] = 0x30;
	frm.data[1] = 0x00;
	frm.data[2] = 0x00;
	frm.data[3] = 0x00;
	frm.data[4] = 0x00;
	frm.data[5] = 0x00;
	frm.data[6] = 0x00;
	frm.data[7] = 0x00;

	mcp2515_load_message(TXB0ADDR, &frm);
	mcp2515_request_to_send(TXB0ADDR);
	
	while(1) {
		if(blink_debug) {
            PORTB |= (1 << PINB1);
            _delay_ms(1000);
            PORTB &= ~(1 << PINB1);
            _delay_ms(1000);
        } else {
            uint8_t stat = mcp2515_read_register(TXB0CTRL);
            if(stat & 0b00010000) {
                 _delay_ms(1000);
                mcp2515_abort_send(TXB0CTRL);
                                 _delay_ms(1000);

                if(id < 32) {
                    id++;

                } else {
                    id = 1;
                }
                frm.SID = 0x140+id;
                mcp2515_load_message(TXB0ADDR, &frm);
                mcp2515_request_to_send(TXB0ADDR);
            } 
           


        }
	}

	return 0;
}
