#include <stdio.h>

void swap(int *pa, int *pb) {  // pa -> a: 21  pb -> b: 17
  int t = *pa;                 // t: 21

  *pa = *pb;                   // pa -> a: 17  pb -> b: 17
  *pb = t;                     // pa -> a: 17  pb -> b: 21

  return;
}

int main(void) {
  int a = 21;
  int b = 17;

  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);

  return 0;
}
