#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD &= 0b11011111;
  PORTD |= 0b00100000;

  while (1) {
    
    if ((PIND & 0b00100000) == 0) {
    } else {
    }

    _delay_ms(100);
  }

  return 0;
}
