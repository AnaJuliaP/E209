#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD &= 0b11011111;
  PORTD |= 0b00100000;

  while (1) {

    if ((PIND & (1 << 0b00100000) == 0) {
      PORTD &= ~(1 << 0b00100000)
    } else {
      PORTD |= (1 << 0b00100000);
    }

    _delay_ms(100);
  }

  return 0;
}
