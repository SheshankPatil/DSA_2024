#include <stdio.h>
#include <stdlib.h>

int maxsubarray(int *a, int n) {

  int max = 0;
  int curr = 0;
  for (int i = 0; i < n; i++) {
    curr = curr + a[i];
    if (curr > max) {
      max = curr;
    }
    if (curr < 0) {
      curr = 0;
    }
  }
  return max;
}

int main() {
  int n[] = {-1};
  int size = (sizeof(n) / sizeof(int));
  printf("%d", maxsubarray(n, size));
  return 0;
}