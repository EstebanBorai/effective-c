#include <stdio.h>

int j;                           // "j" is declared in the file scope

void f(int i) {
  int j = 1;                     // block scoped j begins, shadowing file scope j
  i++;                           // function parameter i

  for (int i = 0; i < 2; i++) {  // block scope of loop-local i begins
    int j = 2;                   // block scope of the inner j begins, shadows outer j
    printf("%d\n", j);           // inner j is in scope, prints 2
  }                              // block scope of inner i and j ends

  printf("%d\n", j);             // function local block scope j is printed (1)
}

void g(int j);                   // function prototype scope j begins

int main(void) {
  f(1);
}
