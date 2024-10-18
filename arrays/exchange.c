#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  a = b ^ a;
  b = b ^ a;
  a = b ^ a;

  printf("%d", a);

  return 0;
}