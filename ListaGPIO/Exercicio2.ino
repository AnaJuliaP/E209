#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRD |= 0b00011000;

    while(1) {
        PORTD ^= 0b00001000;
     	_delay_ms(500);
        PORTB ^= 0b00010000;
    }
}
