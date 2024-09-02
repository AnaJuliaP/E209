#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD |= 0b11000000;
  DDRD &= ~0b01000000;

  while (1) {
  }

  return 0;
}
