/* uart.h - UART initialization & communication */

#ifndef UART_H
#define UART_H

#include <stdint.h>

/*
* Initializa UART0.
*/
void uart_init();

/*
* Transmit a byte via UART0.
* uint8_t Byte: byte to send
*/
void uart_putc(uint8_t byte);

/*
* print a string to the UART one character at a time
* const char *str: 0-terminated string
*/
void uart_puts(const char *str);

/*
* Receive a byte via UART0
*
* Returns:
* uint8_t: byte received.
*/
uint8_t uart_getc();
#endif 