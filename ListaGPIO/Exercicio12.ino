#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB &= 0b11100000;
    PORTB |= 0b00011111;

    DDRD |= 0b00000001;
    DDRC |= 0b00000001;

    while (1) {
        uint8_t entradas = PINB & 0b00011111;

        if ((entradas == 0b10101) || (entradas == 0b01010)) {
            PORTD |= 0b00000001;
            PORTC &= ~0b00000001;
        } else if ((entradas == 0b00000) || (entradas == 0b11111)) {
            PORTD &= ~0b00000001;
            PORTC |= 0b00000001;
        } else {
            PORTD &= ~0b00000001;
            PORTC &= ~0b00000001;
        }
    }

    return 0;
}
