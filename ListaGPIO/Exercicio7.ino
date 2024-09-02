#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD &= 0b11111011;
  DDRD |= 0b00001000;

  while (1) {
    if (PIND & 0b11111011) {
      PORTD &= ~0b00001000;
    } else {
      PORTD |= 0b00001000;
    }
  }

  return 0;
}
