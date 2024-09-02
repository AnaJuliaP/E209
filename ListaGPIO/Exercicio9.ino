#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRD &= 0b11111000;

  if ((DDRD & 0b00000111) == 0) {
  }

  while (1) {
  }

  return 0;
}
