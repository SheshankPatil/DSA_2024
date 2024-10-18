#include <stdio.h>

int subtract(int a, int b) { return a + (~b + 1); }

int main() {
  int x = 0, y = 2;
  int result = subtract(x, y);
  printf("The result of %d - %d is: %d\n", x, y, result);
  return 0;
}
