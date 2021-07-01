#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int op_code = puts("Hello, world!");
  int fmt_op_code = printf("%s\n", "Hello, world!");

  printf("op_code: %d\n", op_code);
  printf("fmt_op_code: %d\n", fmt_op_code);

  return EXIT_SUCCESS;
}
