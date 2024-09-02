#include <avr/io.h>

int main(void) {
    DDRD |= 0b00000100;
    PORTD |= 0b00000100;

    while(1) {
    }

    return 0;
}
