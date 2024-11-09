#include <stdio.h>
#include <sys/types.h>

int main() {
  int n = 25 << 5;
  int m = ~n;
  uint x = 0;
  x = ~x;
  printf("%d\n", n);
  printf("%d\n", m);

  return 0;
}