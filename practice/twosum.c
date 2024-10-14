#include <stdio.h>

int *twosum(int *arr, int size, int target) {
  static int returnarr[2];
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == target) {
        returnarr[0] = i;
        returnarr[1] = j;
        return returnarr;
      }
    }
  }
  return NULL;
}

int main() {
  int arr[] = {1, 3, 5, 7, 9};
  int size = (sizeof(arr) / sizeof(int));
  int target = 10;
  int *result = twosum(arr, size, target);
  printf("%d %d", result[0], result[1]);

  return 0;
}