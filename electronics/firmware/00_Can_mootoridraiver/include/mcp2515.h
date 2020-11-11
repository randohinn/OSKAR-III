#ifndef MCP2515_H
#define MCP2515_H

// Instruktsioonid

#define RESET 0xC0
#define READ 0x03
#define WRITE 0x02
#define READ_RX_BUFFER 0x90
#define LOAD_TX_BUFFER 0x40
#define READ_STATUS 0xA0
#define RTS 0x80
#define RX_STATUS 0xB0
#define BIT_MODIFY 0x05

// Registrid

#define TXB0CTRL 0x30

#define TXB1CTRL 0x40

#define TXB2CTRL 0x50

#define TXB0SIDH 0x31
#define TXB0SIDL 0x32

#define TXB1SIDH 0x41
#define TXB1SIDL 0x42

#define TXB2SIDH 0x51
#define TXB2SIDL 0x52

#define TXRTSCTRL 0x0D


#endif