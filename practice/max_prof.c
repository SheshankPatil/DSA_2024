#include <stdio.h>

int maxprof(int *arr, int n) {
  int maxprof = 0;
  int minval = arr[0];
  for (int i = 0; i < n; i++) {
    if (minval > arr[i]) {
      minval = arr[i];
    } else if (arr[i] - minval > maxprof) {
      maxprof = arr[i] - minval;
    }
  }
  return maxprof;
}

int main() {
  int arr[] = {7, 6, 4, 7, 9};
  int n = (sizeof(arr) / sizeof(int));
  printf("%d", maxprof(arr, n));

  return 0;
}