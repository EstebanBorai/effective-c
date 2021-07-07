#include <stdio.h>

static unsigned int counter = 0;

/* increments counter by 1 */
void increment(void);

/* retrieves the current value for counter */
unsigned int retrieve(void);

int main() {
  for (int i = 0; i < 5; i++) {
    increment();
    printf("%d", retrieve());
  }

  return 0;
}

void increment(void) {
  counter++;
}

unsigned int retrieve(void) {
  return counter;
}
