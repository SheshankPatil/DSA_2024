#include <stdio.h>

void printarrya(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    /* code here */
  }
  printf("\n");
}

void method1(int *arr, int n) {
  int temp = arr[n - 1];
  for (int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
}

int main() {
  int arr[] = {3, 45, 6, 8, 1};
  int n = (sizeof(arr) / sizeof(int));
  // printarrya(arr,n);
  // roatearry(arr,n);
  method1(arr, n);
  printarrya(arr, n);

  return 0;
}