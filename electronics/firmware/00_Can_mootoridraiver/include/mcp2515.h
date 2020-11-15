/*
	OSKAR III - MCP2515.h
	Rando Hinn, SA Teaduskeskus AHHAA
	November 2020
*/

#ifndef MCP2515_H
#define MCP2515_H

/* -------------------    Instructions    ------------------- */

#define RESET 0xC0
#define READ 0x03
#define WRITE 0x02
#define READ_RX_BUFFER 0x90
#define LOAD_TX_BUFFER 0x40
#define READ_STATUS 0xA0
#define RTS 0x80
#define RX_STATUS 0xB0
#define BIT_MODIFY 0x05

/* -------------------     Registers     ------------------- */

// Transmit buffer 0 control
#define TXB0CTRL 0x30

// Transmit buffer 0 ID
#define TXB0SIDH 0x31
#define TXB0SIDL 0x32

// Transmit buffer 0 E(xtended)ID
#define TXB0EIDH 0x33
#define TXB0EIDL 0x34

// Transmit buffer 0 DLC (data length)
#define TXB0DLC 0x35

// Transmit buffer 0 data bytes
#define TXB0D0 0x36
#define TXB0D1 0x37
#define TXB0D2 0x38
#define TXB0D3 0x39
#define TXB0D4 0x3A
#define TXB0D5 0x3B
#define TXB0D6 0x3C
#define TXB0D7 0x3D

// Transmit buffer 1 Control
#define TXB1CTRL 0x40

// Transmit buffer 1 ID
#define TXB1SIDH 0x41
#define TXB1SIDL 0x42

// Transmit buffer 1 E(xtended)ID
#define TXB1EIDH 0x43
#define TXB1EIDL 0x44

// Transmit buffer 0 DLC (data length)
#define TXB1DLC 0x45

// Transmit buffer 0 data bytes
#define TXB1D0 0x46
#define TXB1D1 0x47
#define TXB1D2 0x48
#define TXB1D3 0x49
#define TXB1D4 0x4A
#define TXB1D5 0x4B
#define TXB1D6 0x4C
#define TXB1D7 0x4D

// Transmit buffer 2 Control
#define TXB2CTRL 0x50

// Transmit buffer 2 ID
#define TXB2SIDH 0x51
#define TXB2SIDL 0x52

// Transmit buffer 2 E(xtended)ID
#define TXB2EIDH 0x53
#define TXB2EIDL 0x54

// Transmit buffer 0 DLC (data length)
#define TXB2DLC 0x55

// Transmit buffer 0 data bytes
#define TXB2D0 0x56
#define TXB2D1 0x57
#define TXB2D2 0x58
#define TXB2D3 0x59
#define TXB2D4 0x5A
#define TXB2D5 0x5B
#define TXB2D6 0x5C
#define TXB2D7 0x5D


// Recieve buffer 0 control
#define RXB0CTRL 0x60

// Recieve buffer 0 ID
#define RXB0SIDH 0x61 
#define RXB0SIDL 0x62

// Recieve buffer 0 E(xtended)ID
#define RXB0EIDH 0x63
#define RXB0EIDL 0x64

// Recieve buffer 0 DLC (data length)
#define RXB0DLC 0x65

// Recieve buffer 0 data bytes
#define RXB0D0 0x66
#define RXB0D1 0x67
#define RXB0D2 0x68
#define RXB0D3 0x69
#define RXB0D4 0x6A
#define RXB0D5 0x6B
#define RXB0D6 0x6C
#define RXB0D7 0x6D





#define RXB1CTRL 0x70


// Error flag
#define EFLG 0x2D
#define TXRTSCTRL 0x0D

// CAN Interrupt enable & interrupt flag
#define CANINTE 0x2B
#define CANINTF 0x2C



#endif