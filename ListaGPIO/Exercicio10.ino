#include <avr/io.h>
#include <util/delay.h>

int main() {
  DDRD |= 0b10000000;
  PORTD |= 0b00010000;
  uint8_t buttonState = 0;

  while (1) {
    if ((PIND & 0b00010000) == 0) {
      _delay_ms(50);
      if ((PIND & 0b00010000) == 0) {
        if (buttonState == 0) {
          PORTD ^= 0b10000000;
          buttonState = 1;
        }
      }
    } else {
      buttonState = 0;
    }
  }

  return 0;
}
