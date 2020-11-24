#include <include/mcp2515.h>
#include <include/spi.h>

void mcp2515_set_mode(uint8_t mode) {
    SPI_unset_cs();
    SPI_send(BIT_MODIFY);
    SPI_send(CANCTRL);
    SPI_send(REQOP_MASK);
    SPI_send((mode << REQOP_OFFSET));
    SPI_set_cs();    
}

void mcp2515_enable_clkout() {
    SPI_unset_cs();
    SPI_send(BIT_MODIFY);
    SPI_SEND(CANCTRL);
    SPI_send(CLKEN);
    SPI_send(CLKEN);
    SPI_set_cs();
}

void mcp2515_disable_clkout() {
    SPI_unset_cs();
    SPI_send(BIT_MODIFY);
    SPI_SEND(CANCTRL);
    SPI_send(CLKEN);
    SPI_send(!CLKEN);
    SPI_set_cs();
}
