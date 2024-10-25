#include <stdio.h>

int majorityElement(int *a, int n) {
  int major = a[0], count = 0;

  for (int i = 1; i < n; i++) {
    if (a[i] == major) {
      count++;
    } else {
      count--;
    }
    if (count == 0) {
      major = a[i];
      count = 1;
    }
  }
  count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == major) {
      count++;
    }
  }
  if (count > n / 2) {
    return major;
  } else {
    return -1;
  }
}

int main() {
  int a[] = {3, 2, 3, 4, 3, 2, 2, 2, 2};
  int n = 9;
  printf("%d\n", majorityElement(a, n));
  return 0;
}