#ifndef SPI_H
#define SPI_H
#include <avr/io.h>

void SPI_init();
uint8_t SPI_txrx(uint8_t data);

#endif