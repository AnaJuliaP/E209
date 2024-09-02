#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRB &= 0b11100001;
  PORTB |= 0b00011110;

  DDRD |= 0b00001000;

  uint8_t estado = 0;

  while (1) {
    if (estado == 0 && !(PINB & 0b00000100)) {
      estado = 1;
    } else if (estado == 1 && !(PINB & 0b00001000)) {
      estado = 2;
    } else if (estado == 2 && !(PINB & 0b00010000)) {
      estado = 3;
    } else if (estado == 3 && !(PINB & 0b00000010)) {
      if (!(PINB & 0b00000010) && !(PINB & 0b00000100) && !(PINB & 0b00001000) && !(PINB & 0b00010000)) {
        PORTD |= 0b00001000;
      }
    } else {
      estado = 0;
      PORTD &= ~0b00001000;
    }
  }

  return 0;
}
