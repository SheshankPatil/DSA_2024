#include <stdio.h>

int binarysearch(int *x, int n, int key) {
  int low, mid, high;
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x[mid] == key) {
      return mid;
    }
    if (x[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int x[] = {-1, 0, 3, 5, 9, 12};
  int key = 2;
  int n = (sizeof(x) / sizeof(int));
  printf("%d", binarysearch(x, n, key));

  return 0;
}