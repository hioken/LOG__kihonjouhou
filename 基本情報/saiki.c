#include <stdio.h>

int r(int x);

void main(void) {
  printf("%d", r(3))
}

int r(int x) {
  if (x > 0) x += r(x - 1);
  return x;
}
