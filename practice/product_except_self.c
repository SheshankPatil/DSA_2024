#include <stdio.h>
#include <stdlib.h>

int *product_exceptself(int *a, int n) {
  int *b = (int *)malloc(sizeof(int));
  int prod = a[0];
  for (int i = 1; i < n; i++) {
    prod = prod * a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      int p = 1;
      for (int j = 0; j < n; j++) {
        if (i != j) {
          p *= a[j];
        }
      }
      b[i] = p;
    } else {
      b[i] = prod / a[i];
    }
  }
  return b;
}

int *selfproduct(int n, int *a) {
  int *b = (int *)malloc(sizeof(int));
  int prodct = a[0];
  for (int i = 1; i < n; i++) {
    prodct = prodct * a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      int p = 1;
      for (int j = 0; j < n; j++) {
        if (i != j) {
          p = p * a[j];
        }
      }
      b[i] = p;
    } else {
      b[i] = prodct / a[i];
    }
  }
  return b;
}
int main() {

  int a[] = {1, 2, 0, 4};
  int n = (sizeof(a) / sizeof(int));
  int *temp = selfproduct(n, a);
  for (int i = 0; i < n; i++) {
    printf("%d\n", temp[i]);
  }

  return 0;
}