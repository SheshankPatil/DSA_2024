#include <stdio.h>

int maxprof(int *arr, int n) {
  int low = arr[0];
  int high;
  int low_ind, high_ind, prof;

  for (int i = 0; i < n; i++) {
    if (low > arr[i]) {
      low = arr[i];
      low_ind = i;
    }
  }
  for (int j = low_ind; j < n; j++) {
    if (high < arr[j]) {
      high = arr[j];
      high_ind = j;
    }
  }
  prof = high - low;

  return prof;
}

int main() {
  int arr[] = {7, 6, 4, 3, 1};
  int n = (sizeof(arr) / sizeof(int));
  printf("%d", maxprof(arr, n));

  return 0;
}