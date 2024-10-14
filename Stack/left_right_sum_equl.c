#include <stdio.h>

int chechksum(int *arr, int n, int sum) {

  int t1 = sum;
  int t2 = sum;
  int i = 0;
  int j = n - 1;
  while (i < j) {
    t1 = t1 - arr[i];
    t2 = t2 - arr[j];
    if (t1 > t2) {
      t1 = t1 - arr[i + 1];
    }
    if (t1 == t2) {
      return i + 1;
    }
    i++;
    j--;
  }
}

int arrysum(int *arr, int n) {
  int temp;
  for (int i = 0; i < n; i++) {
    temp = temp + arr[i];
  }
  return temp;
}

int main() {
  int arr[] = {5, 1, 1, 2, 1, 9};
  int n = (sizeof(arr) / sizeof(int));
  int sum = arrysum(arr, n);
  //   printf("%d", n);
  printf("%d", chechksum(arr, n, sum));

  return 0;
}