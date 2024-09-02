#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRD |= 0b01110000;

    while (1) {
        // Seu código aqui
    }

    return 0;
}
