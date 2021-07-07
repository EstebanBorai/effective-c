#include <stdio.h>

float add_pi(float);
float sum_one(float);
float subzero(float);

int main(void) {
  float (*funs[3]) (float a);

  funs[0] = add_pi;
  funs[1] = sum_one;
  funs[2] = subzero;

  printf("%.2f\n", (*funs[0])(3.14));
  printf("%.2f\n", (*funs[1])(14));
  printf("%.2f\n", (*funs[2])(10));

  return 0;
}

float add_pi(float a) {
  return a + 3.14;
}

float sum_one(float n) {
  return n + 1;
}

float subzero(float n) {
  return n * -1;
}
